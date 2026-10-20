/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041e3a0` (_code @ 0x41e3a0, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184758(int, int, int);
int FUN_00184c00(int, int, int);

/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */


void FUN_0041e3a0(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (param_2 != 0) {
    FUN_00184758(param_1 + 0x474,8,0);
    FUN_00184c00(param_1 + 0x474,1,0);
  }
  temp_v0 = 0;
  if (temp_v0 < *(int *)(param_1 + 0x18)) {
    do {
      temp_v1 = param_1 + temp_v0 * 0x8c;
      FUN_00184758(temp_v1 + 0x500,8,0);
      FUN_00184c00(temp_v1 + 0x500,1,0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(int *)(param_1 + 0x18));
  }
  *(unsigned int *)(param_1 + 0x6ec) = 0;
  *(unsigned int *)(param_1 + 0x6f0) = 0;
  *(unsigned int *)(param_1 + 0x6f4) = 0;
  *(unsigned int *)(param_1 + 0x620) = *(unsigned int *)(param_1 + 0x18);
  return;
}

} /* extern "C" */
