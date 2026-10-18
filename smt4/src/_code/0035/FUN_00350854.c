/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00350854` (_code @ 0x350854, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023a5dc. */
extern unsigned int FUN_0034ee48(int);
/* Supplied declaration required: FUN_0034ee98. */


unsigned int FUN_00350854(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = param_1 + 0x158;
  FUN_0034ee98();
  if (temp_v0 == 0) {
    *(unsigned int *)(param_1 + 0xc) = 7;
    return 0;
  }
  temp_v0 = FUN_0023a5dc(param_1 + 0x158);
  if (temp_v0 != 0) {
    temp_v1 = FUN_0023a5dc(param_1 + 0x158);
    temp_v2 = FUN_0034ee48(param_1 + 0x158);
    if (temp_v1 <= temp_v2) {
      return 1;
    }
  }
  return 0;
}
