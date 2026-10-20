/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b330` (_code @ 0x38b330, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00429f38(void);

extern unsigned char DAT_0057f6c1; /* 0x57f6c1 */

/* Supplied declaration required: FUN_00429f38. */


void FUN_0038b330(unsigned char param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00429f38();
  DAT_0057f6c1 = param_1;
  return;
}

} /* extern "C" */
