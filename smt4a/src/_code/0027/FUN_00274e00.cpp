#include "romwright_types.h"

extern "C" {

int FUN_001aea28(unsigned int, int);

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_00581280; /* 0x581280 */

/* Supplied declaration required: FUN_001aea28. */


void FUN_00274e00(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0x3f;
  do {
    temp_v0 = *(int *)(DAT_00581280 + temp_v2 * 0x3c + 0x40);
    temp_v1 = DAT_00581280;
    if (temp_v0 != 0) {
      temp_v1 = *(int *)(temp_v0 + 4);
    }
    if (temp_v0 != 0 && temp_v1 != 0) {
      FUN_001aea28(DAT_0056fcc0,temp_v1);
    }
    temp_v2 = temp_v2 - 1;
  } while (temp_v2 >= 0);
  return;
}

} /* extern "C" */
