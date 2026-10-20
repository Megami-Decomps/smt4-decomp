/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bce00` (_code @ 0x2bce00, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00131780(unsigned int, unsigned int);

extern unsigned int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_00131780. */


void FUN_002bce00(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00131780(g_aocSystem,param_1);
  return;
}

} /* extern "C" */
