/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106fa8` (_code @ 0x106fa8, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010eb10(void);

extern unsigned char DAT_00558a68; /* 0x558a68 */

/* Supplied declaration required: FUN_0010eb10. */


void FUN_00106fa8(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0010eb10();
  *param_1 = (unsigned int)&DAT_00558a68;
  return;
}

} /* extern "C" */
