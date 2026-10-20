/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115ad0` (_code @ 0x115ad0, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00115a5e(unsigned int *);
int FUN_002eb728(unsigned int *);

extern unsigned char DAT_00559890; /* 0x559890 */

/* Supplied declaration required: FUN_00115a5e. */
/* Supplied declaration required: FUN_002eb728. */


void FUN_00115ad0(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00559890;
  FUN_00115a5e(param_1);
  FUN_002eb728(param_1);
  return;
}

} /* extern "C" */
