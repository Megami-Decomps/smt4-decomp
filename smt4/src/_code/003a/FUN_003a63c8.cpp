/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a63c8` (_code @ 0x3a63c8, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00297410(int);

extern unsigned char DAT_0044e068; /* 0x44e068 */

/* Supplied declaration required: FUN_00297410. */


void FUN_003a63c8(void)

{
/* irregular: 1 native warning(s); review required */
  if ((*(int *)((unsigned char *)&DAT_0044e068 + 0x4)) < 1) {
    FUN_00297410(0x17);
  }
  (*(int *)((unsigned char *)&DAT_0044e068 + 0x4)) = (*(int *)((unsigned char *)&DAT_0044e068 + 0x4)) + 1;
  return;
}

} /* extern "C" */
