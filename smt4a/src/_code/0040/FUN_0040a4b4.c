/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040a4b4` (_code @ 0x40a4b4, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001519ac(void);


unsigned char FUN_0040a4b4(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001519ac();
  return *(char *)(temp_v0 + 0x10) != '\0';
}
