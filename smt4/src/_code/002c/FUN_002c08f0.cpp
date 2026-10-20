/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c08f0` (_code @ 0x2c08f0, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_004e3cf4; /* 0x4e3cf4 */


unsigned int FUN_002c08f0(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = *(int *)(DAT_004e3cf4 + (param_1 >> 0x14) * 8);
  while( 1 ) {
    if (temp_v0 == 0) {
      return 0;
    }
    if (*(unsigned int *)(temp_v0 + 0x24) == (param_1 & 0xfffff)) break;
    temp_v0 = *(int *)(temp_v0 + 0x4c);
  }
  if (temp_v0 == 0) {
    return 0;
  }
  return *(unsigned int *)(temp_v0 + 0x48);
}

} /* extern "C" */
