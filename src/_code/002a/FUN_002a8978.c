/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a8978` (_code @ 0x2a8978, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002a6410. */
/* Supplied declaration required: FUN_002aeb2c. */


void FUN_002a8978(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (param_1 != 0) {
    param_2 = *(int *)(param_1 + 0x84);
  }
  if (param_1 != 0 && param_2 != -1) {
    if (*(int *)(param_1 + 0x80) != 0) {
      FUN_002aeb2c(*(unsigned int *)(param_1 + 0x10));
      FUN_002a6410(DAT_00433158,*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 0x84));
      *(unsigned int *)(param_1 + 0x80) = 0;
      *(unsigned int *)(param_1 + 0x84) = 0xffffffff;
    }
    return;
  }
  return;
}
