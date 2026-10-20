/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e4718` (_code @ 0x3e4718, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameDataBlockGetArea28350(void);


unsigned char FUN_003e4718(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = gameDataBlockGetArea28350();
  return ((unsigned int)*(unsigned char *)(temp_v0 + (param_1 >> 3) + 0x12) & (1 << (param_1 & 7))) != 0;
}

} /* extern "C" */
