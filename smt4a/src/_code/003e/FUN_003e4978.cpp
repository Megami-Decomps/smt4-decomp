/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e4978` (_code @ 0x3e4978, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0018719c(unsigned int);
extern int FUN_001ab888(void);


unsigned int FUN_003e4978(void)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_0018719c(0x533);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v2 = 0;
    temp_v3 = temp_v2;
    do {
      if ((temp_v2 & 0xffff) < 0xc) {
        temp_v0 = FUN_001ab888();
        temp_v0 = temp_v0 + (temp_v2 & 0xffff) * 0x134;
        if ((temp_v0 != -0x1ddc) && ((*(unsigned int *)(temp_v0 + 0x1f0c) & 1) != 0)) {
          temp_v3 = temp_v3 + 1;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 < 0xc);
    if ((int)temp_v3 < 2) {
      temp_v1 = 0;
    }
    else {
      temp_v1 = 1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
