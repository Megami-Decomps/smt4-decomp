/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d6420` (_code @ 0x3d6420, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00227228(int);
int rangeInit(int, int, int);

/* Supplied declaration required: FUN_00227228. */
extern int rangeIsValid(int);
/* Supplied declaration required: rangeInit. */


void FUN_003d6420(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (-1 < param_2) {
    temp_v0 = rangeIsValid(param_1 + 0x30);
    if (temp_v0 == 0) {
      FUN_00227228(param_1 + 0x30);
    }
    rangeInit(param_1 + 0x30,(int)*(short *)(param_2 * 0xc + 0x439968),0);
    *(unsigned int *)(param_1 + 0x634) = *(unsigned int *)(param_1 + 0x634) | 0x40000;
    return;
  }
  return;
}

} /* extern "C" */
