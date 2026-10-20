/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004082f8` (_code @ 0x4082f8, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002c2710(void);


unsigned char FUN_004082f8(unsigned int param_1)

{
  int temp_v0;
  
  if (param_1 < 0x6e) {
    temp_v0 = FUN_002c2710();
    return ((1 << (param_1 & 7)) & 0xffU & (unsigned int)*(unsigned char *)(temp_v0 + 0x22f0 + (param_1 >> 3))) != 0;
  }
  return 0;
}

} /* extern "C" */
