/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003492a4` (_code @ 0x3492a4, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c0b94(void);


unsigned char FUN_003492a4(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c0b94();
  return (unsigned int)(*(int *)(temp_v0 + 0x1f458) - *(int *)(temp_v0 + 0x1f85c)) >= 900;
}
