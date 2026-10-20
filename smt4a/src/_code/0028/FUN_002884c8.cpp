#include "romwright_types.h"

extern "C" {

int FUN_00184758(int, int, int);
int FUN_003f5220(unsigned int, unsigned int);

extern int DAT_0057f268; /* 0x57f268 */

/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_003f5220. */


void FUN_002884c8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057f268;
  *(unsigned int *)(DAT_0057f268 + 0x2c) = *(unsigned int *)(DAT_0057f268 + 0x2c) ^ 1;
  FUN_00184758(temp_v0 + 0x180,4,0);
  temp_v1 = 0;
  do {
    FUN_003f5220(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0xa10),*(unsigned int *)(temp_v0 + 0x2c));
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  temp_v1 = 0;
  do {
    FUN_003f5220(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0xa20),*(unsigned int *)(temp_v0 + 0x2c));
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  return;
}

} /* extern "C" */
