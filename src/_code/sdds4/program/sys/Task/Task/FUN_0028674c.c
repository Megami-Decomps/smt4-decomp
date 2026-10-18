/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028674c` (_code @ 0x28674c, 0xe4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int DAT_004c5830; /* 0x4c5830 */


void FUN_0028674c(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = (&DAT_004c5830)[(temp_v1 & 0xff) * 4];
    if (param_1 != 0) {
      if (param_1 != 1) {
        if ((param_1 != 2) && (param_1 == 3)) {
          for (; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x20)) {
            if ((*(char *)(temp_v0 + 2) == '\0') && (*(romwright_code **)(temp_v0 + 0x14) != (romwright_code *)0x0)) {
              (**(romwright_code **)(temp_v0 + 0x14))(temp_v0 + 0x34);
            }
          }
        }
      }
      else {
        for (; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x20)) {
          if ((*(char *)(temp_v0 + 2) == '\0') && (*(romwright_code **)(temp_v0 + 0x10) != (romwright_code *)0x0)) {
            (**(romwright_code **)(temp_v0 + 0x10))(temp_v0 + 0x34);
          }
        }
      }
    }
    else {
      for (; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x20)) {
        if ((*(char *)(temp_v0 + 2) == '\0') && (*(romwright_code **)(temp_v0 + 0xc) != (romwright_code *)0x0)) {
          (**(romwright_code **)(temp_v0 + 0xc))(temp_v0 + 0x34);
        }
      }
    }
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 5);
  return;
}
