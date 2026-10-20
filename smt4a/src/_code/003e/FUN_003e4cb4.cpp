/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e4cb4` (_code @ 0x3e4cb4, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameGetSlotTable(void);


unsigned int FUN_003e4cb4(int param_1)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = gameGetSlotTable();
  if (*(short *)(temp_v0 + 0x2c4c) != 0) {
    temp_v2 = 0;
    do {
      if ((temp_v2 & 0xffff) >= 0xc) {
        temp_v1 = 0;
      }
      else {
        temp_v1 = gameGetSlotTable();
        temp_v1 = temp_v1 + (temp_v2 & 0xffff) * 0x134 + 0x1ddc;
      }
      if (*(short *)(temp_v1 + 300) == *(short *)(temp_v0 + 0x2c4c)) {
        if (temp_v1 == 0) {
          return 0;
        }
        if ((*(unsigned int *)(temp_v1 + 0x130) & 1) == 0 || param_1 == 0) {
          return 0;
        }
        if ((*(unsigned int *)(param_1 + 0x130) & 1) == 0) {
          return 0;
        }
        if (*(short *)(temp_v1 + 300) != *(short *)(param_1 + 300)) {
          return 0;
        }
        return 1;
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 < 0xc);
  }
  return 0;
}

} /* extern "C" */
