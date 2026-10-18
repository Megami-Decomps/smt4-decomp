/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00205b18` (_code @ 0x205b18, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
/* Supplied declaration required: FUN_00296f60. */
extern int FUN_002c0bcc(unsigned int);


unsigned int FUN_00205b18(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00296f60(1);
  if (temp_v0 < (int)temp_v1) {
    temp_v2 = FUN_002c0bcc(temp_v1 & 0xffff);
    FUN_0028df54(temp_v2 < temp_v0);
    return 1;
  }
  FUN_0028df54(1);
  return 1;
}
