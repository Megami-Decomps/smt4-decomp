/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032fef4` (_code @ 0x32fef4, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0032ff2c; /* 0x32ff2c */
extern int DAT_0043e158; /* 0x43e158 */

/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf9e8. */


unsigned int FUN_0032fef4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043e158;
  FUN_002be7fc(DAT_0043e158 + 0xc4,&LAB_0032ff2c);
  *(unsigned char *)(temp_v0 + 0x14) = 1;
  *(unsigned int *)(temp_v0 + 8) = 1;
  FUN_002bf9e8(0x10001fd);
  return 1;
}
