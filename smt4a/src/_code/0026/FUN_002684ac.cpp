/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002684ac` (_code @ 0x2684ac, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00140e00(int);

extern unsigned char DAT_0057f699; /* 0x57f699 */
extern unsigned int DAT_0057f6b0; /* 0x57f6b0 */

/* Supplied declaration required: FUN_00140e00. */


void FUN_002684ac(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  DAT_0057f699 = 0;
  DAT_0057f6b0 = param_1 | DAT_0057f6b0;
  FUN_00140e00(0);
  return;
}

} /* extern "C" */
