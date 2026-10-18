/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b24fc` (_code @ 0x2b24fc, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00465124; /* 0x465124 */

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
extern int FUN_00253f24(int);
/* Supplied declaration required: FUN_00253f64. */


void FUN_002b24fc(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_cr14, in_r12, in_s0; 2 native warning(s); review required */
  int temp_v0;
  int in_r12;
  unsigned int in_cr14;
  unsigned int in_s0;
  
  if (param_1 == 0) {
    return;
  }
  FUN_00253f64();
  temp_v0 = FUN_00253f24(param_1);
  if (temp_v0 != 0) {
    coprocessor_storelong(0xb,in_cr14,in_r12 + 0x3fc);
    if ((param_3 & 0x1fffff) != 0) {
      *(unsigned int *)(DAT_00465124 + 0x28) = in_s0;
    }
    return;
  }
  return;
}
