/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f82b8` (_code @ 0x3f82b8, 0x224 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164168(...);
int vec2GetXInt(int);
int vec2GetYInt(int);
int efctSetSpeed(void);
int FUN_001835b4(int, int, int, int, int, int);
int renderCtxCalculateStereoParallax(unsigned int);
int FUN_003f5b14(...);
int FUN_003f5d94(int, int, int);
int FUN_003f6e24(int, int, int);
int FUN_003f78f8(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00164168. */
/* Supplied declaration required: vec2GetXInt. */
/* Supplied declaration required: vec2GetYInt. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
/* Supplied declaration required: FUN_003f5b14. */
/* Supplied declaration required: FUN_003f5d94. */
/* Supplied declaration required: FUN_003f6e24. */
/* Supplied declaration required: FUN_003f78f8. */


void FUN_003f82b8(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  float temp_v5;
  
  temp_v0 = vec2GetXInt(param_1 + 0x16c);
  temp_v1 = vec2GetYInt(param_1 + 0x16c);
  switch(*(unsigned int *)(param_1 + 0x14)) {
  case 0:
  case 1:
  case 2:
  case 3:
    vec2GetXInt(param_1 + 0x540);
    vec2GetYInt(param_1 + 0x540);
    temp_v5 = 0.26f;
    renderCtxCalculateStereoParallax(g_renderCtx);
    temp_v0 = temp_v0 + (int)temp_v5;
    efctSetSpeed();
    FUN_001835b4(2,0x31,0,temp_v0,temp_v1,0x8d);
    FUN_001835b4(2,0x31,1,temp_v0,temp_v1,0x8d);
    FUN_001835b4(2,0x31,9,temp_v0,temp_v1,0x8d);
    break;
  case 4:
  case 5:
    FUN_003f6e24(param_1,temp_v0,temp_v1);
    break;
  default:
    FUN_003f5d94(param_1,temp_v0,temp_v1);
    break;
  case 9:
  case 10:
  case 0xb:
    temp_v5 = 0.26f;
    renderCtxCalculateStereoParallax(g_renderCtx);
    FUN_003f5b14(param_1,temp_v0,temp_v1,0xe2,0xe5);
    temp_v3 = 0;
    do {
      temp_v4 = (*(int *)(param_1 + 0x50) + temp_v3) - *(int *)(param_1 + 0x128);
      if (-1 < temp_v4) {
        temp_v2 = FUN_001834a4(0x31,temp_v3 + 0xfc);
        FUN_00164168(*(unsigned int *)(param_1 + 0x5d8),
                     (int)*(short *)(temp_v2 + 8) + temp_v0 + (int)temp_v5,*(short *)(temp_v2 + 10) + temp_v1,
                     0xc9,6,temp_v4);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 8);
    FUN_003f78f8(param_1,temp_v0,temp_v1);
  }
  efctSetSpeed();
  return;
}

} /* extern "C" */
