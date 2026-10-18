/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4f90` (_code @ 0x2f4f90, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558d28; /* 0x558d28 */

/* Supplied declaration required: FUN_002f4fac. */
/* Supplied declaration required: FUN_002f4fd0. */


void FUN_002f4f90(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00558d28;
  FUN_002f4fac(param_1,0);
  FUN_002f4fd0(param_1);
  return;
}
