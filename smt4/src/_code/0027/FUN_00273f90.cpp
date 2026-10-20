/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00273f90` (_code @ 0x273f90, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00202254(void);

extern signed char DAT_0049f942; /* 0x49f942 */
extern unsigned char DAT_004bce8c; /* 0x4bce8c */

/* Supplied declaration required: FUN_00202254. */


void FUN_00273f90(void)

{
/* irregular: 1 native warning(s); review required */
  if (((*(signed char *)((unsigned char *)&DAT_004bce8c + 0x250)) != '\0') && (DAT_0049f942 != '\0')) {
    FUN_00202254();
    return;
  }
  return;
}

} /* extern "C" */
