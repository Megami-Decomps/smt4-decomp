/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e4a00` (_code @ 0x3e4a00, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameGetSlotTable(void);


int FUN_003e4a00(void)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  temp_v1 = 0;
  do {
    if ((temp_v1 & 0xffff) < 0xc) {
      temp_v0 = gameGetSlotTable();
      temp_v0 = temp_v0 + (temp_v1 & 0xffff) * 0x134;
      if ((temp_v0 != -0x1ddc) && ((*(unsigned int *)(temp_v0 + 0x1f0c) & 1) != 0)) {
        temp_v2 = temp_v2 + 1;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 0xc);
  return temp_v2;
}

} /* extern "C" */
