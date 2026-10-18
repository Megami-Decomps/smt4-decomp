/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5020` (_code @ 0x2f5020, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00464fac; /* 0x464fac */

/* Supplied declaration required: FUN_003e0860. */


void FUN_002f5020(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_003e0860(*(unsigned int *)(DAT_00464fac + 0x18),1,param_1);
  return;
}
