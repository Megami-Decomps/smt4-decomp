/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00316520` (_code @ 0x316520, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00137ee0(int, unsigned int *, int);

extern unsigned int DAT_0056fd34; /* 0x56fd34 */

/* Supplied declaration required: FUN_00137ee0. */


void FUN_00316520(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_00137ee0(0xd,&DAT_0056fd34,4);
  DAT_0056fd34 = 0xffffffff;
  return;
}

} /* extern "C" */
