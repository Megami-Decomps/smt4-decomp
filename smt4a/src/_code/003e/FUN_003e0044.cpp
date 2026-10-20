/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0044` (_code @ 0x3e0044, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001801a4(void);


unsigned char FUN_003e0044(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001801a4();
  return ((unsigned int)*(unsigned short *)(temp_v0 + 0x5e) & (1 << (param_1 & 0xff))) != 0;
}

} /* extern "C" */
