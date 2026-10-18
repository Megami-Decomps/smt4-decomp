/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7c88` (_code @ 0x2f7c88, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_0027eb98. */
/* Supplied declaration required: FUN_00282b94. */
/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00293c98(void);
/* Supplied declaration required: FUN_00296f60. */
extern unsigned int FUN_0029ee4c(unsigned int, unsigned int);
extern unsigned int FUN_002a89e4(int);


unsigned int FUN_002f7c88(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  FUN_0027eb98(DAT_0043427c);
  if (temp_v0 < 0x6d) {
    temp_v2 = FUN_00293c98();
    FUN_00282b94(temp_v2,temp_v0);
    if (temp_v2 == 0) {
      FUN_0028df54(0);
      return 1;
    }
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + 0x1c6) & (1 << (temp_v1 & 0xff));
  }
  else {
    temp_v3 = FUN_002a89e4(temp_v0 - 0x6d);
    temp_v1 = FUN_0029ee4c(temp_v3,temp_v1 & 0xffff);
  }
  FUN_0028df54(temp_v1 != 0);
  return 1;
}
