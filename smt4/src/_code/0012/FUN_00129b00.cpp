/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129b00` (_code @ 0x129b00, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013b3f4(unsigned int);

extern unsigned char DAT_00471a70; /* 0x471a70 */

/* Supplied declaration required: FUN_0013b3f4. */


void FUN_00129b00(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_0013b3f4((*(unsigned int *)((unsigned char *)&DAT_00471a70 + 0x1c)));
  return;
}

} /* extern "C" */
