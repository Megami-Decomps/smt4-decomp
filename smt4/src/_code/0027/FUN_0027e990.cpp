/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027e990` (_code @ 0x27e990, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ba8f4(int);

extern int DAT_00432fc8; /* 0x432fc8 */
extern int DAT_00433130; /* 0x433130 */

/* Supplied declaration required: FUN_002ba8f4. */


void FUN_0027e990(void)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned char *)(DAT_00433130 + 0x450c) = 0;
  FUN_002ba8f4(DAT_00432fc8 + 0x88);
  return;
}

} /* extern "C" */
