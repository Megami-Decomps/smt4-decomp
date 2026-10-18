/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00340c68` (_code @ 0x340c68, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005b3f98; /* 0x5b3f98 */

/* Supplied declaration required: FUN_001a9110. */


void FUN_00340c68(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001a9110(param_1,*(unsigned int *)(DAT_005b3f98 + 0xc));
  return;
}
