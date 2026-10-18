/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f710c` (_code @ 0x2f710c, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

extern int FUN_0027eb98(unsigned int);
/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00296f60(void);


unsigned int FUN_002f710c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  temp_v1 = FUN_00296f60();
  temp_v2 = FUN_0027eb98(DAT_0043427c);
  temp_v3 = *(unsigned int *)(temp_v2 + 0x28);
  temp_v0 = *(unsigned short *)(temp_v3 + temp_v1 * 2 + 0x126);
  temp_v4 = (temp_v0 & 0xfc00) != 0;
  if (temp_v4) {
    temp_v3 = 2;
  }
  if (temp_v4 && temp_v3 != temp_v0 >> 10) {
    FUN_0028df54(0);
    return 1;
  }
  FUN_0028df54(1);
  return 1;
}
