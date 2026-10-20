#include "romwright_types.h"

extern "C" {

int FUN_001656e0(unsigned int, int);
int FUN_0016572c(unsigned int, int);
int FUN_00167f24(int);

extern int FUN_00163e40(unsigned int);
extern int FUN_00165058(unsigned int);
/* Supplied declaration required: FUN_001656e0. */
/* Supplied declaration required: FUN_0016572c. */
/* Supplied declaration required: FUN_00167f24. */


unsigned int FUN_002280f0(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = *param_1;
  if (temp_v2 != 0) {
    temp_v1 = 0;
    if (temp_v1 < *(int *)(temp_v2 + 0x44)) {
      do {
        temp_v3 = temp_v2 + temp_v1 * 4;
        temp_v0 = FUN_00163e40(*(unsigned int *)(temp_v3 + 4));
        if ((temp_v0 != 0) && (temp_v0 = FUN_00165058(*(unsigned int *)(temp_v3 + 4)), temp_v0 != 4)) {
          FUN_001656e0(*(unsigned int *)(temp_v3 + 4),1);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(int *)(temp_v2 + 0x44));
    }
    temp_v1 = 0;
    do {
      temp_v3 = temp_v2 + temp_v1 * 4;
      temp_v0 = FUN_00163e40(*(unsigned int *)(temp_v3 + 0x4c));
      if (temp_v0 != 0) {
        FUN_0016572c(*(unsigned int *)(temp_v3 + 0x4c),1);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x10);
  }
  FUN_00167f24(2);
  return 1;
}

} /* extern "C" */
