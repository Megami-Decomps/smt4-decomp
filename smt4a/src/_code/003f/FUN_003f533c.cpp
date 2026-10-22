/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f533c` (_code @ 0x3f533c, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_00180310(...);
int FUN_001835b4(int, int, int, int, int, unsigned int);
int drawSetColorFromRGBA8(...);
int renderCtxCalculateStereoParallax(unsigned int);

/* stack frame of param_10: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_10_stack;

extern unsigned char LAB_003f54bc; /* 0x3f54bc */
extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00180310. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */


void FUN_003f533c(unsigned int param_1,int param_2,int param_3,unsigned int param_4,int param_5,
                 unsigned int param_6,unsigned int param_7,unsigned int param_8,unsigned int param_9,
                 int param_10)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float temp_v2;
  float temp_v3;
  
  temp_v3 = 0.26f;
  temp_v2 = temp_v3;
  renderCtxCalculateStereoParallax(g_renderCtx);
  efctSetSpeed();
  drawSetColorFromRGBA8(param_9);
  temp_v0 = FUN_001834a4(0x31,param_6);
  temp_v1 = (int)*(short *)(temp_v0 + 8) + param_2 + (int)temp_v3;
  temp_v0 = *(short *)(temp_v0 + 10) + param_3;
  if (param_10 != 0) {
    FUN_001835b4(2,0x31,2,temp_v1,temp_v0,param_4);
  }
  else {
    FUN_001835b4(2,0x31,0xa0,temp_v1,temp_v0,param_4);
  }
  renderCtxCalculateStereoParallax(g_renderCtx);
  temp_v0 = FUN_001834a4(0x31,param_7);
  FUN_00180310(6,(int)*(short *)(temp_v0 + 8) + param_2 + (int)temp_v2,*(short *)(temp_v0 + 10) + param_3,
               0,4,param_4,&LAB_003f54bc,param_5 % 10);
  temp_v0 = FUN_001834a4(0x31,param_8);
  FUN_00180310(6,(int)*(short *)(temp_v0 + 8) + param_2 + (int)temp_v2,*(short *)(temp_v0 + 10) + param_3,
               0,4,param_4,&LAB_003f54bc,param_5 / 10);
  drawSetColorFromRGBA8(0xffffffff);
  efctSetSpeed();
  return;
}

} /* extern "C" */
