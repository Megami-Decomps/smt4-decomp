/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300100` (_code @ 0x300100, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003a1098(int, unsigned int, unsigned int);

extern unsigned int DAT_00647194; /* 0x647194 */

/* Supplied declaration required: FUN_003a1098. */


void FUN_00300100(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if ((&DAT_00647194)[param_1] != 0) {
    FUN_003a1098(0,(&DAT_00647194)[param_1],param_2);
    return;
  }
  return;
}

} /* extern "C" */
