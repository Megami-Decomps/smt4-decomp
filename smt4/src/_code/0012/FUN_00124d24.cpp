/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124d24` (_code @ 0x124d24, 0x2ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int renderCtxCalculateStereoParallax(unsigned int);
int FUN_002bdce0(...);
int FUN_002bed3c(void);
int vec2GetXInt(...);
int FUN_002bedb0(...);
int FUN_002bee04(unsigned int, int, unsigned int);
int FUN_002bf380(...);
int efctSetSpeed(void);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int DAT_0043e190; /* 0x43e190 */
extern unsigned int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
/* Supplied declaration required: FUN_002bdce0. */
/* Supplied declaration required: FUN_002bed3c. */
extern int vec2GetYInt(int);
/* Supplied declaration required: vec2GetXInt. */
/* Supplied declaration required: FUN_002bedb0. */
/* Supplied declaration required: FUN_002bee04. */
/* Supplied declaration required: FUN_002bf380. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: efctSetSpeed. */
extern int gameFlagIsSet(unsigned int);
extern unsigned int FUN_002c5d80(unsigned int, unsigned int);


void FUN_00124d24(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  
  temp_v0 = gameFlagIsSet(0x402);
  if (temp_v0 != 0) {
    temp_v0 = vec2GetXInt(DAT_0043e190 + 0x754);
    temp_v1 = vec2GetYInt(DAT_0043e190 + 0x754);
    if ('\0' < *(char *)(DAT_0043e190 + 0x82)) {
      temp_v2 = vec2GetXInt(DAT_0043e190 + 0x7e0);
      temp_v0 = temp_v0 + temp_v2;
      temp_v2 = vec2GetYInt(DAT_0043e190 + 0x7e0);
      temp_v1 = temp_v1 + temp_v2;
    }
    temp_v3 = FUN_002c5d80(1,0);
    FUN_002bee04(g_titleScene,3,temp_v3);
    efctSetSpeed();
    FUN_002bed3c();
    temp_v5 = 0.27f;
    if (param_1 != 0) {
      temp_v4 = temp_v5;
      temp_v2 = FUN_002bf4f8(0xe,0x94);
      temp_v5 = temp_v4;
      renderCtxCalculateStereoParallax(g_titleScene);
      temp_v0 = temp_v0 + (int)temp_v4;
    }
    else {
      temp_v2 = FUN_002bf4f8(0xe,0xc0);
    }
    FUN_002bf380(2,0xe,0,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0xb);
    FUN_002bdce0(*(unsigned int *)(DAT_0043e190 + 0x6c),*(short *)(temp_v2 + 8) + temp_v0,
                 *(short *)(temp_v2 + 10) + temp_v1,0);
    if (*(char *)(DAT_0043e190 + 0x80) != '\0') {
      if (param_1 != 0) {
        temp_v2 = FUN_002bf4f8(0xe,0x100);
      }
      else {
        temp_v2 = FUN_002bf4f8(0xe,0x11f);
      }
      FUN_002bf380(2,0xe,0xc,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0xb);
      FUN_002bdce0(*(unsigned int *)(DAT_0043e190 + 0x74),*(short *)(temp_v2 + 8) + temp_v0,
                   *(short *)(temp_v2 + 10) + temp_v1,1);
    }
    temp_v0 = DAT_0043e190;
    if (*(char *)(DAT_0043e190 + 0xa1) != '\0') {
      temp_v1 = DAT_0043e190 + 0x754;
      temp_v3 = vec2GetXInt();
      temp_v1 = vec2GetYInt(temp_v1);
      renderCtxCalculateStereoParallax(g_titleScene);
      temp_v4 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = FUN_002bf4f8(0xe,0x100);
      FUN_002bf380(2,0xe,0x16,(int)*(short *)(temp_v2 + 8) + (int)(temp_v5 + temp_v4),
                   *(short *)(temp_v2 + 10) + temp_v1,0xb);
      FUN_002bdce0(-*(int *)(temp_v0 + 0x9c),(int)*(short *)(temp_v2 + 8) + (int)(temp_v5 + temp_v4),
                   *(short *)(temp_v2 + 10) + temp_v1,1);
    }
    efctSetSpeed();
    FUN_002bed3c();
    FUN_002bedb0(g_titleScene,3);
  }
  return;
}

} /* extern "C" */
