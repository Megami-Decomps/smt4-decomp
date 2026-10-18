/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00217358` (_code @ 0x217358, 0x194 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_003d2150. */


unsigned int FUN_00217358(int param_1)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  char *pcVar6;
  
  temp_v4 = 1;
  temp_v2 = 0;
  do {
    if ((temp_v2 == 0) || (*(char *)(param_1 + temp_v2 * 0x8c + 0x38fe) != '\0')) {
      FUN_00163aa4(param_1 + temp_v2 * 0x8c + 0x3900);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 6);
  temp_v2 = 0;
  do {
    temp_v3 = param_1 + temp_v2 * 0x8c;
    if (*(char *)(temp_v3 + 0x398a) != '\0') {
      if ((*(int *)(param_1 + temp_v2 * 4 + 0x43f0) != 0) &&
         (pcVar6 = (char *)(param_1 + temp_v2 + 0x4420), *pcVar6 == '\0')) {
        FUN_003d2150(0x1000215);
        *pcVar6 = '\x01';
      }
      FUN_00163aa4(temp_v3 + 0x3cd4);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 6);
  temp_v2 = 0;
  while ((temp_v3 = param_1 + temp_v2 * 0x8c, *(char *)(temp_v3 + 0x398a) != '\0' &&
         (*(char *)(temp_v3 + 0x3d5e) != '\0'))) {
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 6) {
LAB_00217488:
      temp_v2 = 0;
      temp_v3 = 6;
      do {
        if (*(short *)(param_1 + temp_v2 * 0x8c + 0x3d32) >= 0xe) {
          temp_v0 = param_1 + temp_v2 * 4;
          temp_v1 = *(int *)(temp_v0 + 0x4380) + 1;
          *(int *)(temp_v0 + 0x4380) = temp_v1;
          if (temp_v1 >= 0x10000) {
            *(unsigned int *)(temp_v0 + 0x4380) = 0;
          }
        }
        temp_v3 = temp_v3 - 1;
        temp_v2 = temp_v2 + 1;
      } while (temp_v3 != 0);
      return temp_v4;
    }
  }
  temp_v4 = 0;
  goto LAB_00217488;
}
