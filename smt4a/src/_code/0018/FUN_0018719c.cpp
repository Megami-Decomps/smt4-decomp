/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018719c` (_code @ 0x18719c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001ab940(void);


unsigned char FUN_0018719c(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001ab940();
  return ((unsigned int)*(unsigned char *)(temp_v0 + (param_1 >> 3)) & (1 << (param_1 & 7))) != 0;
}

} /* extern "C" */
