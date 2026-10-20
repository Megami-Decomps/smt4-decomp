/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fda08` (_code @ 0x3fda08, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0045adc0(int, int, unsigned int);

/* Supplied declaration required: FUN_0045adc0. */


void FUN_003fda08(int param_1,unsigned int param_2,unsigned char param_3)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  int temp_v0;
  unsigned int in_s0;
  
  temp_v0 = *(int *)(param_1 + 0x20c);
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + 0xc;
  }
  if ((param_2 < *(unsigned short *)(*(int *)(temp_v0 + 0x30) + 0x7c)) &&
     (temp_v0 = *(int *)(*(int *)(*(int *)(temp_v0 + 0x30) + 0x78) + param_2 * 4), temp_v0 != 0)) {
    *(unsigned int *)(param_1 + 0xb4) = param_2;
    *(unsigned int *)(param_1 + 0xb8) = in_s0;
    *(int *)(param_1 + 0xc0) = temp_v0;
    FUN_0045adc0(param_1 + 200,temp_v0,*(unsigned int *)(param_1 + 0x210));
    *(unsigned char *)(param_1 + 0xd4) = param_3;
  }
  return;
}

} /* extern "C" */
