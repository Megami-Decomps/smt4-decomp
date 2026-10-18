/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003235b4` (_code @ 0x3235b4, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00282b94. */
extern int FUN_00293c98(void);
/* Supplied declaration required: FUN_00296f60. */


unsigned int FUN_003235b4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  temp_v2 = FUN_00293c98();
  FUN_00282b94(temp_v2,temp_v0);
  if (temp_v2 != 0) {
    *(int *)(temp_v2 + 0x274) = *(int *)(temp_v2 + 0x274) + temp_v1;
  }
  return 1;
}
