/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00309e5c` (_code @ 0x309e5c, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00465124; /* 0x465124 */

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Supplied declaration required: FUN_002a7b50. */


void FUN_00309e5c(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_cr14, in_r12, in_s0; 2 native warning(s); review required */
  int in_r12;
  unsigned int in_cr14;
  unsigned int in_s0;
  
  if (param_1 == (unsigned int *)0x0) {
    return;
  }
  FUN_002a7b50(*param_1);
  FUN_002a7b50(param_1[1]);
  FUN_002a7b50(param_1[2]);
  coprocessor_storelong(0xb,in_cr14,in_r12 + 0x3fc);
  if ((param_3 & 0x1fffff) != 0) {
    *(unsigned int *)(DAT_00465124 + 0x28) = in_s0;
  }
  return;
}
