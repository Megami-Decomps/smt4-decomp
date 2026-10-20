/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00187010` (_code @ 0x187010, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001ab888(void);


int FUN_00187010(unsigned int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  while( 1 ) {
    if ((temp_v1 & 0xffff) >= 0xc) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = FUN_001ab888();
      temp_v0 = temp_v0 + (temp_v1 & 0xffff) * 0x134 + 0x1ddc;
    }
    if (*(unsigned short *)(temp_v0 + 300) == param_1) break;
    temp_v1 = temp_v1 + 1;
    if ((int)temp_v1 >= 0xc) {
      return 0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
