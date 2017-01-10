package net.slimevoid.tong;

import java.io.*;
import java.util.*;

public class Compiler {
	
	public static void main(String[] args) throws IOException {
		if(args.length < 2) {
			System.err.println("Args format : [source file] [rom to write]");
			System.exit(-1);		
		}
		Reader read = new BufferedReader(new FileReader(new File(args[0])));
		int r;
		String src = "";
		while((r = read.read()) >= 0) {
			src += (char) r;
		}
		OutputStream out = new BufferedOutputStream(new FileOutputStream(new File(args[1])));
		new Compiler(src).compile(out);
		out.close();
	}

	private final String[] src;
	private int index = 0;
	private Map<String, Integer> vars = new HashMap<>();

	private Compiler(String src) {
		StringBuilder build = new StringBuilder();
		List<String> toks = new ArrayList<>();
		for(int i = 0; i < src.lenght()) {
			char c = src.charAt(i);
			if(('A' <= c && c <= 'z') || c == '.' || c == "_")
				build.append(c);
			else {
				String s = build.toString();
				if(s.length() > 0) toks.add(s);
				build.setLength(0);//TODO check
			}
		}
		this.src = src.trim().split("[ \t\n\r]+");
	}

	public static void error(String msg) {
		System.err.println("Error: "+msg);
		System.exit(-1);
	}

	private void compile(OutputStream out) throws IOException {
		if(!nextToken().equals(".vars")) error("Program must start with .vars");
		List<String> vars = new ArrayList<>();
		String tok;
		while((tok = nextToken()) != null && !tok.startsWith(".")) {
			if(!isIdent(tok)) error("Invalid identifier: "+tok);
			vars.add(tok);
		}
		System.out.println("vars: ");
		int offset = 0xE2000;
		for(String var : vars) {
			System.out.print(var+" ");
			this.vars.put(var, offset++);
		}			
		System.out.println();
		if(tok == null || !tok.equals(".program")) error("Missing .prgm");
		List<Procedure> procs = new ArrayList<>();
		Procedure proc;
		while((proc = nextProc()) != null) procs.add(proc);
	}

	private Procedure nextProc() {
		if(!nextToken().equals("@")) return null;
		return null;
	}

	private void nextInstr(List<Instr> instrs) {
		String tok = nextToken();
		if(tok == null || tok.equals("@")) return;
		if(tok.equals(">")) {
			//TODO 
		} else if(tok.equals("?")) {
			//TODO
		} else if(tok.equals("!")) {
			//TODO
		} else if(isIdent(tok)) {
			if(!vars.contains(tok)) error("Unknown variable "+tok);
			if(!nextToken().equals("=")) error("Missing =");
			Register
		} else error("Invalid instruction");
	}

	private void computeExpr(Register out) {
		//TODO
	}

	private String nextToken() {
		if(index >= src.length) return null;
		return src[index++];
	}

	private String curToken() {
		if(index >= src.length) return null;
		return src[index];
	}

	private boolean isIdent(String str) {
		return true; // TODO
	}
}