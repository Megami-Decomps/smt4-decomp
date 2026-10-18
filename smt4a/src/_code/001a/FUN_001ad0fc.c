/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ad0fc` (_code @ 0x1ad0fc, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_001b2d54. */


void FUN_001ad0fc(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (param_1 != 0) {
    param_2 = *(int *)(param_1 + 0x84);
  }
  if (param_1 != 0 && param_2 != -1) {
    if (*(int *)(param_1 + 0x80) != 0) {
      FUN_0019a7f4(*(unsigned int *)(param_1 + 0x10));
      FUN_001b2d54(DAT_00570280,*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 0x84));
      *(unsigned int *)(param_1 + 0x80) = 0;
      *(unsigned int *)(param_1 + 0x84) = 0xffffffff;
    }
    return;
  }
  return;
}
