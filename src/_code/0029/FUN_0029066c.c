/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029066c` (_code @ 0x29066c, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c0b94(void);


unsigned char FUN_0029066c(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c0b94();
  return *(unsigned char *)(temp_v0 + 0x24b84) - 1 < 3;
}
