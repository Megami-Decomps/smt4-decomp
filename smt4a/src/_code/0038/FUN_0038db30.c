/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038db30` (_code @ 0x38db30, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_003f0e20. */


unsigned int FUN_0038db30(void)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = FUN_00236038(0);
  temp_v2 = FUN_00236038(1);
  temp_v0 = FUN_00236038(2);
  temp_v3 = FUN_0014aa78();
  FUN_003f0e20(temp_v3,temp_v1);
  if (((temp_v3 != 0) && (-1 < temp_v2)) && (temp_v2 < 9)) {
    temp_v3 = temp_v3 + temp_v2 * 2;
    *(short *)(temp_v3 + 0x13c) = *(short *)(temp_v3 + 0x13c) + temp_v0;
  }
  return 1;
}
