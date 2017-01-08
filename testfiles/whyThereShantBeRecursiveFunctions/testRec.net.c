#include <stdio.h>
#include "utils.c"

int main() {
	char _screenW = readByte();
	char _screenH = readByte();
	char* _rom = readRom();
	int _addr, _pow;
	char _l_10_103 = 0;
	char _l_10_112 = 0;
	char _l_10_121 = 0;
	char _l_10_130 = 0;
	char _l_10_139 = 0;
	char _l_10_148 = 0;
	char _l_10_157 = 0;
	char _l_10_166 = 0;
	char _l_10_175 = 0;
	char _l_10_184 = 0;
	char _l_10_193 = 0;
	char _l_10_202 = 0;
	char _l_10_211 = 0;
	char _l_10_22 = 0;
	char _l_10_220 = 0;
	char _l_10_229 = 0;
	char _l_10_238 = 0;
	char _l_10_247 = 0;
	char _l_10_256 = 0;
	char _l_10_265 = 0;
	char _l_10_274 = 0;
	char _l_10_283 = 0;
	char _l_10_292 = 0;
	char _l_10_301 = 0;
	char _l_10_31 = 0;
	char _l_10_40 = 0;
	char _l_10_49 = 0;
	char _l_10_58 = 0;
	char _l_10_67 = 0;
	char _l_10_76 = 0;
	char _l_10_85 = 0;
	char _l_10_94 = 0;
	char _l_11_102[22] = {0};
	char _l_11_111[21] = {0};
	char _l_11_120[20] = {0};
	char _l_11_129[19] = {0};
	char _l_11_138[18] = {0};
	char _l_11_147[17] = {0};
	char _l_11_156[16] = {0};
	char _l_11_165[15] = {0};
	char _l_11_174[14] = {0};
	char _l_11_183[13] = {0};
	char _l_11_192[12] = {0};
	char _l_11_201[11] = {0};
	char _l_11_21[31] = {0};
	char _l_11_210[10] = {0};
	char _l_11_219[9] = {0};
	char _l_11_228[8] = {0};
	char _l_11_237[7] = {0};
	char _l_11_246[6] = {0};
	char _l_11_255[5] = {0};
	char _l_11_264[4] = {0};
	char _l_11_273[3] = {0};
	char _l_11_282[2] = {0};
	char _l_11_291[1] = {0};
	char _l_11_30[30] = {0};
	char _l_11_39[29] = {0};
	char _l_11_48[28] = {0};
	char _l_11_57[27] = {0};
	char _l_11_66[26] = {0};
	char _l_11_75[25] = {0};
	char _l_11_84[24] = {0};
	char _l_11_93[23] = {0};
	char _l_12_101[22] = {0};
	char _l_12_110[21] = {0};
	char _l_12_119[20] = {0};
	char _l_12_128[19] = {0};
	char _l_12_137[18] = {0};
	char _l_12_146[17] = {0};
	char _l_12_155[16] = {0};
	char _l_12_164[15] = {0};
	char _l_12_173[14] = {0};
	char _l_12_182[13] = {0};
	char _l_12_191[12] = {0};
	char _l_12_20[31] = {0};
	char _l_12_200[11] = {0};
	char _l_12_209[10] = {0};
	char _l_12_218[9] = {0};
	char _l_12_227[8] = {0};
	char _l_12_236[7] = {0};
	char _l_12_245[6] = {0};
	char _l_12_254[5] = {0};
	char _l_12_263[4] = {0};
	char _l_12_272[3] = {0};
	char _l_12_281[2] = {0};
	char _l_12_29[30] = {0};
	char _l_12_290[1] = {0};
	char _l_12_38[29] = {0};
	char _l_12_47[28] = {0};
	char _l_12_56[27] = {0};
	char _l_12_65[26] = {0};
	char _l_12_74[25] = {0};
	char _l_12_83[24] = {0};
	char _l_12_92[23] = {0};
	char _l_9_104 = 0;
	char _l_9_113 = 0;
	char _l_9_122 = 0;
	char _l_9_131 = 0;
	char _l_9_140 = 0;
	char _l_9_149 = 0;
	char _l_9_158 = 0;
	char _l_9_167 = 0;
	char _l_9_176 = 0;
	char _l_9_185 = 0;
	char _l_9_194 = 0;
	char _l_9_203 = 0;
	char _l_9_212 = 0;
	char _l_9_221 = 0;
	char _l_9_23 = 0;
	char _l_9_230 = 0;
	char _l_9_239 = 0;
	char _l_9_248 = 0;
	char _l_9_257 = 0;
	char _l_9_266 = 0;
	char _l_9_275 = 0;
	char _l_9_284 = 0;
	char _l_9_293 = 0;
	char _l_9_302 = 0;
	char _l_9_32 = 0;
	char _l_9_41 = 0;
	char _l_9_50 = 0;
	char _l_9_59 = 0;
	char _l_9_68 = 0;
	char _l_9_77 = 0;
	char _l_9_86 = 0;
	char _l_9_95 = 0;
	char o[32] = {0};
	char zero16[16] = {0};
	char zero2[2] = {0};
	char zero32[32] = {0};
	char zero4[4] = {0};
	char zero8[8] = {0};

	while(1) {
		for(int i = 0; i < 1; i++)
			zero2[i] = 0;
		for(int i = 0; i < 1; i++)
			zero2[i+1] = 0;
		for(int i = 0; i < 2; i++)
			zero4[i] = zero2[i];
		for(int i = 0; i < 2; i++)
			zero4[i+2] = zero2[i];
		for(int i = 0; i < 4; i++)
			zero8[i] = zero4[i];
		for(int i = 0; i < 4; i++)
			zero8[i+4] = zero4[i];
		for(int i = 0; i < 8; i++)
			zero16[i] = zero8[i];
		for(int i = 0; i < 8; i++)
			zero16[i+8] = zero8[i];
		for(int i = 0; i < 16; i++)
			zero32[i] = zero16[i];
		for(int i = 0; i < 16; i++)
			zero32[i+16] = zero16[i];
		_l_9_23 = zero32[0];
		_l_10_22 = !_l_9_23;
		for(int i = 1; i <= 31; i ++) _l_11_21[i-1] = zero32[i];
		_l_9_32 = _l_11_21[0];
		_l_10_31 = !_l_9_32;
		for(int i = 1; i <= 30; i ++) _l_11_30[i-1] = _l_11_21[i];
		_l_9_41 = _l_11_30[0];
		_l_10_40 = !_l_9_41;
		for(int i = 1; i <= 29; i ++) _l_11_39[i-1] = _l_11_30[i];
		_l_9_50 = _l_11_39[0];
		_l_10_49 = !_l_9_50;
		for(int i = 1; i <= 28; i ++) _l_11_48[i-1] = _l_11_39[i];
		_l_9_59 = _l_11_48[0];
		_l_10_58 = !_l_9_59;
		for(int i = 1; i <= 27; i ++) _l_11_57[i-1] = _l_11_48[i];
		_l_9_68 = _l_11_57[0];
		_l_10_67 = !_l_9_68;
		for(int i = 1; i <= 26; i ++) _l_11_66[i-1] = _l_11_57[i];
		_l_9_77 = _l_11_66[0];
		_l_10_76 = !_l_9_77;
		for(int i = 1; i <= 25; i ++) _l_11_75[i-1] = _l_11_66[i];
		_l_9_86 = _l_11_75[0];
		_l_10_85 = !_l_9_86;
		for(int i = 1; i <= 24; i ++) _l_11_84[i-1] = _l_11_75[i];
		_l_9_95 = _l_11_84[0];
		_l_10_94 = !_l_9_95;
		for(int i = 1; i <= 23; i ++) _l_11_93[i-1] = _l_11_84[i];
		_l_9_104 = _l_11_93[0];
		_l_10_103 = !_l_9_104;
		for(int i = 1; i <= 22; i ++) _l_11_102[i-1] = _l_11_93[i];
		_l_9_113 = _l_11_102[0];
		_l_10_112 = !_l_9_113;
		for(int i = 1; i <= 21; i ++) _l_11_111[i-1] = _l_11_102[i];
		_l_9_122 = _l_11_111[0];
		_l_10_121 = !_l_9_122;
		for(int i = 1; i <= 20; i ++) _l_11_120[i-1] = _l_11_111[i];
		_l_9_131 = _l_11_120[0];
		_l_10_130 = !_l_9_131;
		for(int i = 1; i <= 19; i ++) _l_11_129[i-1] = _l_11_120[i];
		_l_9_140 = _l_11_129[0];
		_l_10_139 = !_l_9_140;
		for(int i = 1; i <= 18; i ++) _l_11_138[i-1] = _l_11_129[i];
		_l_9_149 = _l_11_138[0];
		_l_10_148 = !_l_9_149;
		for(int i = 1; i <= 17; i ++) _l_11_147[i-1] = _l_11_138[i];
		_l_9_158 = _l_11_147[0];
		_l_10_157 = !_l_9_158;
		for(int i = 1; i <= 16; i ++) _l_11_156[i-1] = _l_11_147[i];
		_l_9_167 = _l_11_156[0];
		_l_10_166 = !_l_9_167;
		for(int i = 1; i <= 15; i ++) _l_11_165[i-1] = _l_11_156[i];
		_l_9_176 = _l_11_165[0];
		_l_10_175 = !_l_9_176;
		for(int i = 1; i <= 14; i ++) _l_11_174[i-1] = _l_11_165[i];
		_l_9_185 = _l_11_174[0];
		_l_10_184 = !_l_9_185;
		for(int i = 1; i <= 13; i ++) _l_11_183[i-1] = _l_11_174[i];
		_l_9_194 = _l_11_183[0];
		_l_10_193 = !_l_9_194;
		for(int i = 1; i <= 12; i ++) _l_11_192[i-1] = _l_11_183[i];
		_l_9_203 = _l_11_192[0];
		_l_10_202 = !_l_9_203;
		for(int i = 1; i <= 11; i ++) _l_11_201[i-1] = _l_11_192[i];
		_l_9_212 = _l_11_201[0];
		_l_10_211 = !_l_9_212;
		for(int i = 1; i <= 10; i ++) _l_11_210[i-1] = _l_11_201[i];
		_l_9_221 = _l_11_210[0];
		_l_10_220 = !_l_9_221;
		for(int i = 1; i <= 9; i ++) _l_11_219[i-1] = _l_11_210[i];
		_l_9_230 = _l_11_219[0];
		_l_10_229 = !_l_9_230;
		for(int i = 1; i <= 8; i ++) _l_11_228[i-1] = _l_11_219[i];
		_l_9_239 = _l_11_228[0];
		_l_10_238 = !_l_9_239;
		for(int i = 1; i <= 7; i ++) _l_11_237[i-1] = _l_11_228[i];
		_l_9_248 = _l_11_237[0];
		_l_10_247 = !_l_9_248;
		for(int i = 1; i <= 6; i ++) _l_11_246[i-1] = _l_11_237[i];
		_l_9_257 = _l_11_246[0];
		_l_10_256 = !_l_9_257;
		for(int i = 1; i <= 5; i ++) _l_11_255[i-1] = _l_11_246[i];
		_l_9_266 = _l_11_255[0];
		_l_10_265 = !_l_9_266;
		for(int i = 1; i <= 4; i ++) _l_11_264[i-1] = _l_11_255[i];
		_l_9_275 = _l_11_264[0];
		_l_10_274 = !_l_9_275;
		for(int i = 1; i <= 3; i ++) _l_11_273[i-1] = _l_11_264[i];
		_l_9_284 = _l_11_273[0];
		_l_10_283 = !_l_9_284;
		for(int i = 1; i <= 2; i ++) _l_11_282[i-1] = _l_11_273[i];
		_l_9_293 = _l_11_282[0];
		_l_10_292 = !_l_9_293;
		for(int i = 1; i <= 1; i ++) _l_11_291[i-1] = _l_11_282[i];
		_l_9_302 = _l_11_291[0];
		_l_10_301 = !_l_9_302;
		_l_12_290[0] = _l_10_301;
		for(int i = 0; i < 1; i++)
			_l_12_281[i] = _l_10_292;
		for(int i = 0; i < 1; i++)
			_l_12_281[i+1] = _l_12_290[i];
		for(int i = 0; i < 1; i++)
			_l_12_272[i] = _l_10_283;
		for(int i = 0; i < 2; i++)
			_l_12_272[i+1] = _l_12_281[i];
		for(int i = 0; i < 1; i++)
			_l_12_263[i] = _l_10_274;
		for(int i = 0; i < 3; i++)
			_l_12_263[i+1] = _l_12_272[i];
		for(int i = 0; i < 1; i++)
			_l_12_254[i] = _l_10_265;
		for(int i = 0; i < 4; i++)
			_l_12_254[i+1] = _l_12_263[i];
		for(int i = 0; i < 1; i++)
			_l_12_245[i] = _l_10_256;
		for(int i = 0; i < 5; i++)
			_l_12_245[i+1] = _l_12_254[i];
		for(int i = 0; i < 1; i++)
			_l_12_236[i] = _l_10_247;
		for(int i = 0; i < 6; i++)
			_l_12_236[i+1] = _l_12_245[i];
		for(int i = 0; i < 1; i++)
			_l_12_227[i] = _l_10_238;
		for(int i = 0; i < 7; i++)
			_l_12_227[i+1] = _l_12_236[i];
		for(int i = 0; i < 1; i++)
			_l_12_218[i] = _l_10_229;
		for(int i = 0; i < 8; i++)
			_l_12_218[i+1] = _l_12_227[i];
		for(int i = 0; i < 1; i++)
			_l_12_209[i] = _l_10_220;
		for(int i = 0; i < 9; i++)
			_l_12_209[i+1] = _l_12_218[i];
		for(int i = 0; i < 1; i++)
			_l_12_200[i] = _l_10_211;
		for(int i = 0; i < 10; i++)
			_l_12_200[i+1] = _l_12_209[i];
		for(int i = 0; i < 1; i++)
			_l_12_191[i] = _l_10_202;
		for(int i = 0; i < 11; i++)
			_l_12_191[i+1] = _l_12_200[i];
		for(int i = 0; i < 1; i++)
			_l_12_182[i] = _l_10_193;
		for(int i = 0; i < 12; i++)
			_l_12_182[i+1] = _l_12_191[i];
		for(int i = 0; i < 1; i++)
			_l_12_173[i] = _l_10_184;
		for(int i = 0; i < 13; i++)
			_l_12_173[i+1] = _l_12_182[i];
		for(int i = 0; i < 1; i++)
			_l_12_164[i] = _l_10_175;
		for(int i = 0; i < 14; i++)
			_l_12_164[i+1] = _l_12_173[i];
		for(int i = 0; i < 1; i++)
			_l_12_155[i] = _l_10_166;
		for(int i = 0; i < 15; i++)
			_l_12_155[i+1] = _l_12_164[i];
		for(int i = 0; i < 1; i++)
			_l_12_146[i] = _l_10_157;
		for(int i = 0; i < 16; i++)
			_l_12_146[i+1] = _l_12_155[i];
		for(int i = 0; i < 1; i++)
			_l_12_137[i] = _l_10_148;
		for(int i = 0; i < 17; i++)
			_l_12_137[i+1] = _l_12_146[i];
		for(int i = 0; i < 1; i++)
			_l_12_128[i] = _l_10_139;
		for(int i = 0; i < 18; i++)
			_l_12_128[i+1] = _l_12_137[i];
		for(int i = 0; i < 1; i++)
			_l_12_119[i] = _l_10_130;
		for(int i = 0; i < 19; i++)
			_l_12_119[i+1] = _l_12_128[i];
		for(int i = 0; i < 1; i++)
			_l_12_110[i] = _l_10_121;
		for(int i = 0; i < 20; i++)
			_l_12_110[i+1] = _l_12_119[i];
		for(int i = 0; i < 1; i++)
			_l_12_101[i] = _l_10_112;
		for(int i = 0; i < 21; i++)
			_l_12_101[i+1] = _l_12_110[i];
		for(int i = 0; i < 1; i++)
			_l_12_92[i] = _l_10_103;
		for(int i = 0; i < 22; i++)
			_l_12_92[i+1] = _l_12_101[i];
		for(int i = 0; i < 1; i++)
			_l_12_83[i] = _l_10_94;
		for(int i = 0; i < 23; i++)
			_l_12_83[i+1] = _l_12_92[i];
		for(int i = 0; i < 1; i++)
			_l_12_74[i] = _l_10_85;
		for(int i = 0; i < 24; i++)
			_l_12_74[i+1] = _l_12_83[i];
		for(int i = 0; i < 1; i++)
			_l_12_65[i] = _l_10_76;
		for(int i = 0; i < 25; i++)
			_l_12_65[i+1] = _l_12_74[i];
		for(int i = 0; i < 1; i++)
			_l_12_56[i] = _l_10_67;
		for(int i = 0; i < 26; i++)
			_l_12_56[i+1] = _l_12_65[i];
		for(int i = 0; i < 1; i++)
			_l_12_47[i] = _l_10_58;
		for(int i = 0; i < 27; i++)
			_l_12_47[i+1] = _l_12_56[i];
		for(int i = 0; i < 1; i++)
			_l_12_38[i] = _l_10_49;
		for(int i = 0; i < 28; i++)
			_l_12_38[i+1] = _l_12_47[i];
		for(int i = 0; i < 1; i++)
			_l_12_29[i] = _l_10_40;
		for(int i = 0; i < 29; i++)
			_l_12_29[i+1] = _l_12_38[i];
		for(int i = 0; i < 1; i++)
			_l_12_20[i] = _l_10_31;
		for(int i = 0; i < 30; i++)
			_l_12_20[i+1] = _l_12_29[i];
		for(int i = 0; i < 1; i++)
			o[i] = _l_10_22;
		for(int i = 0; i < 31; i++)
			o[i+1] = _l_12_20[i];
	}
}