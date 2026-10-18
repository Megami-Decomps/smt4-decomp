/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e3ac0` (_code @ 0x2e3ac0, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

extern int FUN_0027eb98(unsigned int);
extern unsigned short FUN_00296f60(void);


unsigned int FUN_002e3ac0(void)

{
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_0027eb98(DAT_0043427c);
  temp_v1 = *(int *)(temp_v1 + 0x28);
  *(unsigned short *)(temp_v1 + 0x14c) = 2;
  *(unsigned short *)(temp_v1 + 0x14e) = temp_v0;
  return 1;
}
