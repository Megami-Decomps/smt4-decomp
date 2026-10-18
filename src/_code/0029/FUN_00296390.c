/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00296390` (_code @ 0x296390, 0x194 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bf9e8. */
/* Supplied declaration required: FUN_002bf9f0. */


unsigned int FUN_00296390(int param_1)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  char *pcVar6;
  
  temp_v3 = 1;
  temp_v1 = 0;
  do {
    if ((temp_v1 == 0) || (*(char *)(param_1 + temp_v1 * 0x8c + 0x2d82) != '\0')) {
      FUN_002bf9f0(param_1 + temp_v1 * 0x8c + 0x2d84);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 6);
  temp_v1 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 0x8c;
    if (*(char *)(temp_v2 + 0x2e0e) != '\0') {
      if ((*(int *)(param_1 + temp_v1 * 4 + 0x3618) != 0) &&
         (pcVar6 = (char *)(param_1 + temp_v1 + 0x3648), *pcVar6 == '\0')) {
        FUN_002bf9e8(0x1000174);
        *pcVar6 = '\x01';
      }
      FUN_002bf9f0(temp_v2 + 0x3158);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 6);
  temp_v1 = 0;
  while ((temp_v2 = param_1 + temp_v1 * 0x8c, *(char *)(temp_v2 + 0x2e0e) != '\0' &&
         (*(char *)(temp_v2 + 0x31e2) != '\0'))) {
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 6) {
LAB_002964c0:
      temp_v1 = 0;
      temp_v2 = 6;
      do {
        if (*(short *)(param_1 + temp_v1 * 0x8c + 0x31b6) >= 0xe) {
          piVar1 = (int *)(param_1 + temp_v1 * 4 + 0x3548);
          temp_v0 = *piVar1;
          *piVar1 = temp_v0 + 1;
          if (temp_v0 + 1 >= 0x10000) {
            *piVar1 = 0;
          }
        }
        temp_v2 = temp_v2 - 1;
        temp_v1 = temp_v1 + 1;
      } while (temp_v2 != 0);
      return temp_v3;
    }
  }
  temp_v3 = 0;
  goto LAB_002964c0;
}
