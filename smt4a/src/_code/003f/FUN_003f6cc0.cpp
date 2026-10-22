/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6cc0` (_code @ 0x3f6cc0, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001835b4(int, int, int, int, int, unsigned int);
int renderCtxCalculateStereoParallax(unsigned int);

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */


void FUN_003f6cc0(unsigned int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 unsigned int param_6)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  float temp_v4;
  
  switch(param_5) {
  case 0:
    temp_v3 = 1000;
    break;
  case 1:
    temp_v3 = 0x3ee;
    break;
  case 2:
    temp_v3 = 0x3ea;
    break;
  case 3:
    temp_v3 = 0x3eb;
    break;
  case 4:
    temp_v3 = 0x3ec;
    break;
  case 5:
    temp_v3 = 0x3f0;
    break;
  case 6:
    temp_v3 = 0x3ed;
    break;
  case 7:
  case 9:
    temp_v3 = 0x3ef;
    break;
  case 8:
    temp_v3 = 0x3e9;
    break;
  case 10:
    temp_v3 = 3;
    break;
  case 0xb:
    temp_v3 = 0x3f1;
    break;
  default:
    temp_v3 = -1;
  }
  if (temp_v3 < 0) {
    return;
  }
  temp_v4 = 0.26f;
  renderCtxCalculateStereoParallax(g_renderCtx);
  temp_v2 = FUN_001834a4(0x31,param_6);
  temp_v0 = *(short *)(temp_v2 + 8);
  temp_v1 = *(short *)(temp_v2 + 10);
  efctSetSpeed();
  FUN_001835b4(2,0x31,temp_v3,(int)temp_v0 + param_2 + (int)temp_v4,temp_v1 + param_3,param_4);
  efctSetSpeed();
  return;
}

} /* extern "C" */
