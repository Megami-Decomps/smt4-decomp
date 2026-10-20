/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00288da8` (_code @ 0x288da8, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned char FUN_00288da8(int param_1,int param_2)

{
  unsigned int temp_v0;
  int q;
  
  q = (int)(((long long)(param_2 << 0xc) * 0x28f5c29) >> 0x20);
  temp_v0 = (q - (q >> 0x1f)) * 0x14;
  if (temp_v0 < 0x1000) {
    temp_v0 = 0x1000;
  }
  return (unsigned int)(param_1 << 0xc) <= temp_v0;
}

} /* extern "C" */
