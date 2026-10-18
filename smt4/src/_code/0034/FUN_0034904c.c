/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034904c` (_code @ 0x34904c, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c09bc(void);


unsigned char FUN_0034904c(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c09bc();
  return (unsigned int)(*(int *)(temp_v0 + 0x1f458) - *(int *)(temp_v0 + 0x1f85c)) >= 900;
}
