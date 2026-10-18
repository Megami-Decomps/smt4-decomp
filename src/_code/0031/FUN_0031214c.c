/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031214c` (_code @ 0x31214c, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

extern int FUN_0027eb98(unsigned int);
/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00296f60(void);


unsigned int FUN_0031214c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = 0;
  if (temp_v0 == 0) {
    temp_v1 = 7;
  }
  else if (temp_v0 == 1) {
    temp_v1 = 10;
  }
  else if (temp_v0 == 2) {
    temp_v1 = 0xb;
  }
  temp_v0 = FUN_0027eb98(DAT_0043427c);
  FUN_0028df54(0 < *(short *)(*(int *)(temp_v0 + 0x20) + temp_v1 * 2 + 0x72));
  return 1;
}
