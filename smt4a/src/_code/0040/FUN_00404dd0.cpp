/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00404dd0` (_code @ 0x404dd0, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001834a4(...);
int FUN_001835b4(int, unsigned int, int, int, int, int);
int renderCtxCalculateStereoParallax(unsigned int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */


void FUN_00404dd0(int param_1,int param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  short *psVar3;
  int temp_v2;
  float temp_v3;
  
  efctSetSpeed();
  temp_v0 = FUN_001834a4(0x32,0x35);
  temp_v1 = FUN_001834a4(*(unsigned int *)(param_1 + 0x1c),*(int *)(param_1 + 0x20) * 1000);
  psVar3 = *(short **)(temp_v1 + 0xc);
  if (psVar3 != (short *)0x0) {
    temp_v2 = (int)**(short **)(temp_v0 + 0xc) - (int)*psVar3;
    temp_v1 = (int)(*(short **)(temp_v0 + 0xc))[1] - (int)psVar3[1];
  }
  else {
    temp_v2 = (int)**(short **)(temp_v0 + 0xc) - (*(unsigned short *)(temp_v1 + 4) & 0xffff7fff);
    temp_v1 = (int)(*(short **)(temp_v0 + 0xc))[1] - (*(unsigned short *)(temp_v1 + 6) & 0xffff7fff);
  }
  temp_v3 = 0.26f;
  renderCtxCalculateStereoParallax(g_renderCtx);
  FUN_001835b4(2,*(unsigned int *)(param_1 + 0x1c),*(int *)(param_1 + 0x20) * 1000,
               *(short *)(temp_v0 + 8) + param_2 + (int)temp_v3 + temp_v2 / 2 +
               (int)*(short *)(*(int *)(param_1 + 0x664) + 0xc),
               (int)*(short *)(temp_v0 + 10) + (int)*(short *)(*(int *)(param_1 + 0x664) + 0xe) +
               param_3 + temp_v1 / 2,0x65);
  efctSetSpeed();
  return;
}

} /* extern "C" */
