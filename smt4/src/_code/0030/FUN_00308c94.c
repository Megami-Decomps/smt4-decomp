/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00308c94` (_code @ 0x308c94, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bf694. */


void FUN_00308c94(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 * 0x178 + 0x4a1398) = param_2;
  FUN_002bf694(param_1 * 0x178 + 0x4a139c,param_3);
  return;
}
