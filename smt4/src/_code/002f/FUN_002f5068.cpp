/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5068` (_code @ 0x2f5068, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e0634(unsigned int, int, unsigned int);

extern int DAT_00464fac; /* 0x464fac */

/* Supplied declaration required: FUN_003e0634. */


void FUN_002f5068(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_003e0634(*(unsigned int *)(DAT_00464fac + 0x18),1,param_1);
  return;
}

} /* extern "C" */
