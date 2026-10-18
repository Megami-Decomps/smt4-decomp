/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002931cc` (_code @ 0x2931cc, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0023f554(void);


unsigned char FUN_002931cc(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0023f554();
  return ((unsigned int)*(unsigned char *)(temp_v0 + (param_1 >> 3)) & (1 << (param_1 & 7))) != 0;
}
