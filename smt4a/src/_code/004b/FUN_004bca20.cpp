/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bca20` (_code @ 0x4bca20, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameGetSlotTable(void);


int FUN_004bca20(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  if (param_1 != 0) {
    temp_v0 = gameGetSlotTable();
    temp_v0 = temp_v0 + 0x68;
    temp_v1 = 0;
    do {
      if (temp_v0 == param_1) {
        return temp_v1;
      }
      if (*(char *)(temp_v0 + 0x66) == *(char *)(param_1 + 0x66)) {
        return temp_v1;
      }
      temp_v1 = temp_v1 + 1;
      temp_v0 = temp_v0 + 300;
    } while (temp_v1 < 0x18);
  }
  return -1;
}

} /* extern "C" */
