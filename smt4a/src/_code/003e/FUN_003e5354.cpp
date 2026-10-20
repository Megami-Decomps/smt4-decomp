/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e5354` (_code @ 0x3e5354, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameFlagIsSet(unsigned int);
extern int gameGetSlotTable(void);


void FUN_003e5354(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = gameFlagIsSet(0x533);
  if (temp_v0 != 0) {
    temp_v1 = 0;
    temp_v2 = temp_v1;
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
    if ((int)temp_v2 >= 2) {
      temp_v0 = gameGetSlotTable();
      param_1 = *(short *)(temp_v0 + 0x2c4e) + param_1;
      if (param_1 < 0) {
        param_1 = 0;
      }
      else if (param_1 >= 9) {
        param_1 = 8;
      }
      *(short *)(temp_v0 + 0x2c4e) = (short)param_1;
    }
  }
  return;
}

} /* extern "C" */
