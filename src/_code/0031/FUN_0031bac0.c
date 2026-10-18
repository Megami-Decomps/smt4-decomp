/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031bac0` (_code @ 0x31bac0, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00465124; /* 0x465124 */

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Supplied declaration required: FUN_00295b9c. */
/* Supplied declaration required: FUN_002a7b50. */


void FUN_0031bac0(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_cr14, in_r12, in_s0; 3 native warning(s); review required */
  int temp_v0;
  int in_r12;
  unsigned int in_cr14;
  unsigned int in_s0;
  
  if (param_1 == (unsigned int *)0x0) {
    return;
  }
  temp_v0 = 0;
  do {
    FUN_002a7b50(param_1[temp_v0 + 2]);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 7);
  FUN_002a7b50(param_1[1]);
  FUN_002a7b50(*param_1);
  FUN_002a7b50(param_1[0xd]);
  temp_v0 = 0;
  do {
    FUN_002a7b50(param_1[temp_v0 + 0x12]);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 8);
  FUN_002a7b50(param_1[0xe]);
  FUN_002a7b50(param_1[0x10]);
  FUN_002a7b50(param_1[0x23]);
  FUN_00295b9c((int)*(short *)(param_1 + 0x22),1);
  coprocessor_storelong(0xb,in_cr14,in_r12 + 0x3fc);
  if ((param_3 & 0x1fffff) != 0) {
    *(unsigned int *)(DAT_00465124 + 0x28) = in_s0;
  }
  return;
}
