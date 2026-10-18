/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038da14` (_code @ 0x38da14, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003f0e20. */


unsigned int FUN_0038da14(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_0014aa78();
  FUN_003f0e20(temp_v2,temp_v0);
  if (((temp_v2 != 0) && (temp_v1 >= 0)) && (8 >= temp_v1)) {
    temp_v1 = (int)*(short *)(temp_v2 + temp_v1 * 2 + 0x13c);
  }
  else {
    temp_v1 = 0;
  }
  FUN_003283ac(temp_v1);
  return 1;
}
