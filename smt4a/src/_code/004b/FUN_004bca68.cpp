/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bca68` (_code @ 0x4bca68, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_004bca68(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = 0;
  if (param_1 != 0) {
    temp_v1 = 0;
    while( 1 ) {
      temp_v2 = param_1 + temp_v1 * 2;
      temp_v3 = *(unsigned short *)(temp_v2 + 0x34) != param_2;
      if (temp_v3) {
        temp_v2 = (unsigned int)*(unsigned short *)(temp_v2 + 0x36);
      }
      if (!temp_v3 || temp_v2 == param_2) break;
      temp_v1 = temp_v1 + 2;
      if (temp_v1 >= 8) {
        return 0;
      }
    }
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
