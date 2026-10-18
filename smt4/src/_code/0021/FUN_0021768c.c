/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021768c` (_code @ 0x21768c, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a8764(void);


int FUN_0021768c(char *param_1,char *param_2)

{
  char temp_v0;
  char temp_v1;
  int temp_v2;
  char *pcVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = *param_1;
  if (-1 < temp_v0) {
    temp_v1 = *param_2;
    if ((temp_v1 < '\0') || (temp_v0 == '\x7f')) {
      return 1;
    }
    if (temp_v1 != '\x7f') {
      temp_v5 = -1;
      temp_v6 = -1;
      temp_v2 = FUN_002a8764();
      if (*(char *)(temp_v2 + 0x9108) == temp_v0) {
        temp_v5 = 0;
      }
      if (*(char *)(temp_v2 + 0x9108) == temp_v1) {
        temp_v6 = 0;
      }
      if ((temp_v5 < 0) && (*(char *)(temp_v2 + 0x9109) == temp_v0)) {
        temp_v5 = 1;
      }
      if ((temp_v6 < 0) && (*(char *)(temp_v2 + 0x9109) == temp_v1)) {
        temp_v6 = 1;
      }
      if ((temp_v5 < 0) && (*(char *)(temp_v2 + 0x910a) == temp_v0)) {
        temp_v5 = 2;
      }
      if ((temp_v6 < 0) && (*(char *)(temp_v2 + 0x910a) == temp_v1)) {
        temp_v6 = 2;
      }
      temp_v3 = 0;
      temp_v4 = 0x18;
      pcVar4 = (char *)(temp_v2 + 0x90f0);
      do {
        if ((temp_v5 < 0) && (*pcVar4 == temp_v0)) {
          temp_v5 = temp_v3 + 3;
        }
        if ((temp_v6 < 0) && (*pcVar4 == temp_v1)) {
          temp_v6 = temp_v3 + 3;
        }
        temp_v4 = temp_v4 - 1;
        pcVar4 = pcVar4 + 1;
        temp_v3 = temp_v3 + 1;
      } while (temp_v4 != 0);
      return temp_v5 - temp_v6;
    }
  }
  return -1;
}
