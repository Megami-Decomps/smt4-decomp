/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cc320` (_code @ 0x2cc320, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014bef4(unsigned int);
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_002cc320(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_00236038(1);
  if (temp_v0 < (int)temp_v1) {
    temp_v2 = FUN_0014bef4(temp_v1 & 0xffff);
    FUN_003283ac(temp_v2 < temp_v0);
    return 1;
  }
  FUN_003283ac(1);
  return 1;
}
