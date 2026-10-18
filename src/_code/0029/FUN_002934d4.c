/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002934d4` (_code @ 0x2934d4, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

extern unsigned int *FUN_0027eb98(unsigned int);


unsigned int FUN_002934d4(void)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_0027eb98(DAT_0043427c);
  temp_v0 = 0;
  if ((puVar1 != (unsigned int *)0x0) && (((*puVar1 & 0x80) != 0 || (temp_v0 = 0, (*puVar1 & 0x1000) != 0))))
  {
    temp_v0 = 1;
  }
  return temp_v0;
}
