/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8ba4` (_code @ 0x2f8ba4, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameGetSlotTable(void);


int FUN_002f8ba4(char *param_1,char *param_2)

{
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v6 = (int)*param_1;
  if (-1 < temp_v6) {
    temp_v5 = (int)*param_2;
    if ((temp_v5 < 0) || (temp_v6 == 0x7f)) {
      return 1;
    }
    if (temp_v5 != 0x7f) {
      temp_v3 = -1;
      temp_v4 = -1;
      temp_v0 = gameGetSlotTable();
      if (*(char *)(temp_v0 + 0x1ca0) == temp_v6) {
        temp_v3 = 0;
      }
      if (*(char *)(temp_v0 + 0x1ca0) == temp_v5) {
        temp_v4 = 0;
      }
      if ((temp_v3 < 0) && (*(char *)(temp_v0 + 0x1ca1) == temp_v6)) {
        temp_v3 = 1;
      }
      if ((temp_v4 < 0) && (*(char *)(temp_v0 + 0x1ca1) == temp_v5)) {
        temp_v4 = 1;
      }
      if ((temp_v3 < 0) && (*(char *)(temp_v0 + 0x1ca2) == temp_v6)) {
        temp_v3 = 2;
      }
      if ((temp_v4 < 0) && (*(char *)(temp_v0 + 0x1ca2) == temp_v5)) {
        temp_v4 = 2;
      }
      temp_v1 = 0;
      temp_v2 = 0x18;
      pcVar2 = (char *)(temp_v0 + 0x1c88);
      do {
        if ((temp_v3 < 0) && (*pcVar2 == temp_v6)) {
          temp_v3 = temp_v1 + 3;
        }
        if ((temp_v4 < 0) && (*pcVar2 == temp_v5)) {
          temp_v4 = temp_v1 + 3;
        }
        temp_v2 = temp_v2 - 1;
        pcVar2 = pcVar2 + 1;
        temp_v1 = temp_v1 + 1;
      } while (temp_v2 != 0);
      if ((temp_v3 < 0) && (temp_v6 >= 0x19)) {
        temp_v3 = temp_v6 + 3;
      }
      if ((temp_v4 < 0) && (temp_v5 >= 0x19)) {
        temp_v4 = temp_v5 + 3;
      }
      return temp_v3 - temp_v4;
    }
  }
  return -1;
}

} /* extern "C" */
