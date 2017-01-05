package net.slimevoid.sd.simulatorenv;

import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.List;

public class SimulatorEnv {
	
	public static final int EXIT = 0, CHAR = 1, REDRAW = 2;

	public static void main(String[] args) throws IOException {
		if(args.length >= 4) {
			int sW = Integer.parseInt(args[0]);
			int sH = Integer.parseInt(args[1]);
			Process p = Runtime.getRuntime().exec(args[2]);
			new SimulatorEnv(sW, sH).run(p.getInputStream(), p.getOutputStream(), 
											new FileInputStream(new File(args[3])));
		} else {
			System.err.println("Args format: [width] [height] [simulator] [ROM]");
			System.exit(-1);
		}
	}
	
	private final int w;
	private final int h;
	private final char[] buff;

	private SimulatorEnv(int w, int h) {
		this.w = w;
		this.h = h;
		buff = new char[w*h];
		for(int i = 0; i < buff.length; i ++) buff[i] = '.';
	}

	public void run(InputStream in, OutputStream out, InputStream rom) {
		try {
			in = new BufferedInputStream(in);
			out = new BufferedOutputStream(out);
			out.write(w);
			out.write(h);
			writeRom(rom, out);
			while(true) {
				switch(in.read()) {
				case EXIT:
					in.close();
					return;
				
				case CHAR:
					buff[in.read() + w * in.read()] = (char) in.read();
					break;
					
				case REDRAW:
					clearScreen();
					drawScreen();
					break;
				}
			}
		} catch(Exception e) {
			System.err.println("Error while executing simulator:");
			System.err.print(e);
			if(e.getMessage() != null)
				System.err.print(": "+e.getMessage());
			System.err.println();
		}
	}
	
	public void writeRom(InputStream rom, OutputStream out) throws IOException {
		List<Integer> buff = new ArrayList<>();
		int r;
		while((r = rom.read()) > 0) {
			buff.add(r);
		}
		int sizePow = 0;
		while((1 << sizePow) < buff.size()) sizePow += 1;
		out.write(sizePow);
		for(int i = 0; i < (1 << sizePow); i ++) {
			if(i < buff.size()) out.write(buff.get(i));
			else out.write(0);
		}
	}

	public void clearScreen() {
		System.out.print("\033[H\033[2J");  
		System.out.flush(); 
	}

	public void drawScreen() {
		StringBuilder builder = new StringBuilder();
		for(int y = 0; y < h; y ++) {
			for(int x = 0; x < w; x ++) {
				builder.append(buff[x+w*y]);
			}
			builder.append('\n');
		}
		System.out.print(builder.toString());
	}
}
