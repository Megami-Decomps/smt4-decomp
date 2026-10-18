/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f1438` (_code @ 0x2f1438, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00282b94. */
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_00295760. */
/* Supplied declaration required: FUN_00296f60. */
extern unsigned int FUN_002a89e4(int);
/* Supplied declaration required: FUN_003bcb20. */


unsigned int FUN_002f1438(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  if (temp_v0 < 0x6d) {
    FUN_00293c98();
    temp_v2 = FUN_00293c98();
    FUN_00282b94(temp_v2,temp_v0);
    temp_v3 = *(unsigned int *)(temp_v2 + 0x27c);
  }
  else {
    temp_v3 = FUN_002a89e4(temp_v0 - 0x6d);
  }
  FUN_003bcb20(temp_v3,temp_v1);
  FUN_00295760(temp_v3);
  return 1;
}
