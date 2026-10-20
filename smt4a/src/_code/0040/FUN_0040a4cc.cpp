/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040a4cc` (_code @ 0x40a4cc, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001519ac(void);


unsigned char FUN_0040a4cc(unsigned int param_1)

{
  int temp_v0;
  
  if (param_1 < 0x20) {
    temp_v0 = FUN_001519ac();
    return ((1 << (param_1 & 7)) & 0xffU & (unsigned int)*(unsigned char *)(temp_v0 + 0x264 + (param_1 >> 3))) != 0;
  }
  return 0;
}

} /* extern "C" */
