/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ad10c` (_code @ 0x1ad10c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a7f4(unsigned int);
int FUN_001b2d54(unsigned int, unsigned int, unsigned int);

extern unsigned int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_001b2d54. */


void FUN_001ad10c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_0019a7f4(*(unsigned int *)(param_1 + 0x10));
    FUN_001b2d54(DAT_00570280,*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 0x84));
    *(unsigned int *)(param_1 + 0x80) = 0;
    *(unsigned int *)(param_1 + 0x84) = 0xffffffff;
  }
  return;
}

} /* extern "C" */
