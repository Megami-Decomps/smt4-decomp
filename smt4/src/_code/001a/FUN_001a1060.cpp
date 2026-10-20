#include "romwright_types.h"

extern "C" {

int FUN_002b7184(unsigned int, int);
int FUN_002b71d0(unsigned int, int);
int FUN_002bff38(int);

/* Supplied declaration required: FUN_002b7184. */
/* Supplied declaration required: FUN_002b71d0. */
extern int FUN_002b722c(unsigned int);
extern int jobIsValid(unsigned int);
/* Supplied declaration required: FUN_002bff38. */


unsigned int FUN_001a1060(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = *param_1;
  if (temp_v2 != 0) {
    temp_v1 = 0;
    if (temp_v1 < *(int *)(temp_v2 + 0x2c)) {
      do {
        temp_v3 = temp_v2 + temp_v1 * 4;
        temp_v0 = jobIsValid(*(unsigned int *)(temp_v3 + 4));
        if ((temp_v0 != 0) && (temp_v0 = FUN_002b722c(*(unsigned int *)(temp_v3 + 4)), temp_v0 != 4)) {
          FUN_002b71d0(*(unsigned int *)(temp_v3 + 4),1);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(int *)(temp_v2 + 0x2c));
    }
    temp_v1 = 0;
    do {
      temp_v3 = temp_v2 + temp_v1 * 4;
      temp_v0 = jobIsValid(*(unsigned int *)(temp_v3 + 0x34));
      if (temp_v0 != 0) {
        FUN_002b7184(*(unsigned int *)(temp_v3 + 0x34),1);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 10);
  }
  FUN_002bff38(2);
  return 1;
}

} /* extern "C" */
