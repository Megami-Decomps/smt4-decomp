/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030727e` (_code @ 0x30727e, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002e7328(int, unsigned int);
extern int FUN_002e76b6(unsigned int);
/* Supplied declaration required: FUN_002e77ec. */


void FUN_0030727e(int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e7328(param_1,8);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e76b6(*(unsigned int *)(param_1 + 8));
    FUN_002e77ec(temp_v0 + *(int *)(param_1 + 0xc),param_2);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 8;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}
