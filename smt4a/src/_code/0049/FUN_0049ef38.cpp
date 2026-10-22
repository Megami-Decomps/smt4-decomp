/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049ef38` (_code @ 0x49ef38, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001834a4(int, int);
int FUN_001835b4(int, int, int, int, int, int);
int renderCtxCalculateStereoParallax(unsigned int);

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: efctSetSpeed. */
extern int asdTMTexTableNodeIsLoaded(unsigned int);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */


void FUN_0049ef38(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 4 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  short temp_v2;
  short temp_v3;
  short temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  float temp_v8;
  
  temp_v5 = *(int *)(param_1 + 0x84);
  temp_v6 = (unsigned int)*(unsigned short *)(temp_v5 + *(int *)(param_2 + 0x10) * 10 + 0x36);
  temp_v0 = *(unsigned short *)(temp_v5 + *(int *)(param_2 + 0x10) * 10 + 0x38);
  if ((((*(short *)(temp_v5 + 0x36) == 0) || (temp_v5 = asdTMTexTableNodeIsLoaded(0x33), temp_v5 != 0)) &&
      ((*(short *)(*(int *)(param_1 + 0x84) + 0x40) == 0 || (temp_v5 = asdTMTexTableNodeIsLoaded(0x33), temp_v5 != 0)
       ))) && (temp_v6 != 0)) {
    temp_v7 = (unsigned int)temp_v0 + temp_v6 * 1000;
    temp_v5 = FUN_001834a4(0x33,temp_v7);
    temp_v8 = 0.25f;
    temp_v1 = **(short **)(temp_v5 + 0xc);
    renderCtxCalculateStereoParallax(g_renderCtx);
    temp_v5 = FUN_001834a4(0x33,0x1d);
    temp_v2 = *(short *)(temp_v5 + 8);
    temp_v3 = *(short *)(temp_v5 + 10);
    temp_v4 = **(short **)(temp_v5 + 0xc);
    efctSetSpeed();
    FUN_001835b4(2,0x33,temp_v7,temp_v2 + param_3 + (int)temp_v8 + ((int)temp_v4 - (int)temp_v1) / 2,
                 temp_v3 + param_4,param_5 + 5);
    efctSetSpeed();
    return;
  }
  return;
}

} /* extern "C" */
