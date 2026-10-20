/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00162728` (_code @ 0x162728, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00188d08(unsigned short *, unsigned int);

extern unsigned short *DAT_0057f6a4; /* 0x57f6a4 */

/* Supplied declaration required: FUN_00188d08. */


void FUN_00162728(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  
  puVar1 = DAT_0057f6a4;
  if (param_1 <= *DAT_0057f6a4) {
    *DAT_0057f6a4 = *DAT_0057f6a4 - (short)param_1;
    FUN_00188d08(puVar1,param_1);
    return;
  }
  return;
}

} /* extern "C" */
