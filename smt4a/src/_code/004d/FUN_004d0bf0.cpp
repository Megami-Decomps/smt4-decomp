/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d0bf0` (_code @ 0x4d0bf0, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001ab888(void);


unsigned int FUN_004d0bf0(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_001ab888();
  temp_v1 = 0;
  while ((temp_v2 = (int)*(char *)(temp_v0 + temp_v1 + 0x1c88), temp_v2 < 0 ||
         (*(unsigned short *)(temp_v0 + temp_v2 * 300 + 0xca) != param_1))) {
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x18) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
