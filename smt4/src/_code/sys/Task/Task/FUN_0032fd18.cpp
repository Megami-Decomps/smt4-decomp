#include "romwright_types.h"

extern "C" {

int FUN_00241c98(unsigned int);
int FUN_0028ec84(int);

extern unsigned int DAT_004c5830; /* 0x4c5830 */

/* Supplied declaration required: FUN_00241c98. */
/* Supplied declaration required: FUN_0028ec84. */


void FUN_0032fd18(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  do {
    for (temp_v0 = (&DAT_004c5830)[(temp_v1 & 0xff) * 4]; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x20)) {
      FUN_0028ec84(temp_v0);
    }
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 5);
  temp_v1 = 0;
  do {
    FUN_00241c98(temp_v1 & 0xff);
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 5);
  return;
}

} /* extern "C" */
