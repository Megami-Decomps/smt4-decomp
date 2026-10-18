/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e3c2c` (_code @ 0x2e3c2c, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

extern int FUN_0027eb98(unsigned int);
/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_00296f60(void);


unsigned int FUN_002e3c2c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_0027eb98(DAT_0043427c);
  FUN_0028df54(((unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x28) + 0xfa) & (1 << (temp_v0 & 0xff))) != 0);
  return 1;
}
