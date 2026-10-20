/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049cf9c` (_code @ 0x49cf9c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int loadSlotEnsureLoaded(int);

extern unsigned char DAT_00588f9c; /* 0x588f9c */

/* Supplied declaration required: loadSlotEnsureLoaded. */


void FUN_0049cf9c(void)

{
/* irregular: 1 native warning(s); review required */
  if ((*(int *)((unsigned char *)&DAT_00588f9c + 0x4)) < 1) {
    loadSlotEnsureLoaded(0x17);
  }
  (*(int *)((unsigned char *)&DAT_00588f9c + 0x4)) = (*(int *)((unsigned char *)&DAT_00588f9c + 0x4)) + 1;
  return;
}

} /* extern "C" */
