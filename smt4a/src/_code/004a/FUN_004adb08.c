/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004adb08` (_code @ 0x4adb08, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_004ac83c(int);


unsigned int FUN_004adb08(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = 1;
  temp_v1 = *(int *)(*(int *)(param_1 + 0x1430) + 8);
  if (temp_v1 != *(int *)(param_1 + 0x1430)) {
    do {
      temp_v2 = *(int *)(*(int *)(temp_v1 + 0x18) + 0x10);
      temp_v0 = FUN_004ac83c(temp_v2);
      if (temp_v0 == 0) {
        temp_v3 = 0;
      }
      else {
        *(unsigned char *)(*(int *)(temp_v2 + 0x48) + 0x11) = 1;
      }
      temp_v0 = *(int *)(temp_v1 + 0xc);
      if (*(int *)(temp_v1 + 0xc) != 0) {
        do {
          temp_v1 = temp_v0;
          temp_v0 = *(int *)(temp_v1 + 8);
        } while (*(int *)(temp_v1 + 8) != 0);
      }
      else {
        temp_v0 = *(int *)(temp_v1 + 4);
        if (temp_v1 == *(int *)(temp_v0 + 0xc)) {
          do {
            temp_v1 = temp_v0;
            temp_v0 = *(int *)(temp_v1 + 4);
          } while (temp_v1 == *(int *)(temp_v0 + 0xc));
        }
        if (*(int *)(temp_v1 + 0xc) != temp_v0) {
          temp_v1 = temp_v0;
        }
      }
    } while (temp_v1 != *(int *)(param_1 + 0x1430));
  }
  return temp_v3;
}
