#include "romwright_types.h"

extern "C" {

int FUN_002b7184(unsigned int, int);
int FUN_002b71d0(unsigned int, int);

extern int DAT_0043ded0; /* 0x43ded0 */

/* Supplied declaration required: FUN_002b7184. */
/* Supplied declaration required: FUN_002b71d0. */
extern int FUN_002b722c(unsigned int);
extern int FUN_002bf244(unsigned int);


void FUN_002011a4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_0043ded0;
  if (DAT_0043ded0 != 0) {
    temp_v2 = 0;
    if (0 < *(int *)(DAT_0043ded0 + 0x2c)) {
      do {
        temp_v3 = temp_v0 + temp_v2 * 4;
        temp_v1 = FUN_002bf244(*(unsigned int *)(temp_v3 + 4));
        if ((temp_v1 != 0) && (temp_v1 = FUN_002b722c(*(unsigned int *)(temp_v3 + 4)), temp_v1 != 4)) {
          FUN_002b71d0(*(unsigned int *)(temp_v3 + 4),1);
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < *(int *)(temp_v0 + 0x2c));
    }
    temp_v2 = 0;
    do {
      temp_v3 = temp_v0 + temp_v2 * 4;
      temp_v1 = FUN_002bf244(*(unsigned int *)(temp_v3 + 0x34));
      if (temp_v1 != 0) {
        FUN_002b7184(*(unsigned int *)(temp_v3 + 0x34),1);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 10);
  }
  return;
}

} /* extern "C" */
