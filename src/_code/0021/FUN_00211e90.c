/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211e90` (_code @ 0x211e90, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0018ae60. */
/* Supplied declaration required: FUN_00296f60. */


unsigned int FUN_00211e90(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  temp_v2 = FUN_00296f60(2);
  if (temp_v1 < 0) {
    temp_v1 = 0;
  }
  if (temp_v2 < 0) {
    temp_v2 = 0;
  }
  FUN_0018ae60(temp_v0,temp_v1,temp_v2);
  return 1;
}
