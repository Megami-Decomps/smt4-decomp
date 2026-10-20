/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f8f08` (_code @ 0x4f8f08, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0035bb70(void);
int FUN_0035bbc4(void);

extern int DAT_00571508; /* 0x571508 */

/* Supplied declaration required: FUN_0035bb70. */
/* Supplied declaration required: FUN_0035bbc4. */


void FUN_004f8f08(int param_1)

{
/* irregular: 2 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x3050) = 0;
  FUN_0035bbc4();
  FUN_0035bb70();
  if (DAT_00571508 != 0) {
    *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) & 0xf7ffffff;
  }
  return;
}

} /* extern "C" */
