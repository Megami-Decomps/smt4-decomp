#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned int DAT_00619988; /* 0x619988 */


void FUN_003d9198(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = (&DAT_00619988)[(temp_v1 & 0xff) * 4];
    switch (param_1) {
    case 0:
      for (; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x20)) {
        if ((*(char *)(temp_v0 + 2) == '\0') && (*(romwright_code **)(temp_v0 + 0xc) != (romwright_code *)0x0)) {
          (**(romwright_code **)(temp_v0 + 0xc))(temp_v0 + 0x34);
        }
      }
      break;
    case 1:
      for (; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x20)) {
        if ((*(char *)(temp_v0 + 2) == '\0') && (*(romwright_code **)(temp_v0 + 0x10) != (romwright_code *)0x0)) {
          (**(romwright_code **)(temp_v0 + 0x10))(temp_v0 + 0x34);
        }
      }
      break;
    case 2:
      break;
    case 3:
      for (; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x20)) {
        if ((*(char *)(temp_v0 + 2) == '\0') && (*(romwright_code **)(temp_v0 + 0x14) != (romwright_code *)0x0)) {
          (**(romwright_code **)(temp_v0 + 0x14))(temp_v0 + 0x34);
        }
      }
      break;
    }
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 5);
  return;
}

} /* extern "C" */
