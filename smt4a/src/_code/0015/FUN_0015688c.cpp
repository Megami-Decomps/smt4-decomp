/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015688c` (_code @ 0x15688c, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001ab888(void);


int FUN_0015688c(void)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_001ab888();
  if (*(short *)(temp_v0 + 0x2c4c) != 0) {
    temp_v2 = 0;
    do {
      if ((temp_v2 & 0xffff) >= 0xc) {
        temp_v1 = 0;
      }
      else {
        temp_v1 = FUN_001ab888();
        temp_v1 = temp_v1 + (temp_v2 & 0xffff) * 0x134 + 0x1ddc;
      }
      if (*(short *)(temp_v1 + 300) == *(short *)(temp_v0 + 0x2c4c)) {
        return temp_v1;
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 < 0xc);
  }
  return 0;
}

} /* extern "C" */
