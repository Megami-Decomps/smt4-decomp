/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311fd0` (_code @ 0x311fd0, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned long long FUN_00249b0c(void);
/* Supplied declaration required: FUN_0028df54. */
/* Supplied declaration required: FUN_00293c98. */
extern int FUN_00296f60(void);


unsigned int FUN_00311fd0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned long long temp_v4;
  
  temp_v1 = FUN_00296f60();
  FUN_00293c98();
  temp_v4 = FUN_00249b0c();
  temp_v2 = (unsigned int)((unsigned long long)temp_v4 >> 0x20);
  if ((int)temp_v4 != 0) {
    temp_v0 = *(unsigned short *)((int)temp_v4 + temp_v1 * 2 + 0x1f2);
    temp_v3 = (temp_v0 & 0xfc00) != 0;
    if (temp_v3) {
      temp_v2 = 2;
    }
    if (!temp_v3 || temp_v2 == temp_v0 >> 10) {
      FUN_0028df54(1);
      return 1;
    }
  }
  FUN_0028df54(0);
  return 1;
}
