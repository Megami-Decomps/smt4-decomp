#include "romwright_types.h"

extern "C" {

int FUN_001836b0(int);
int FUN_0019a5a0(int);

extern int DAT_00580c88; /* 0x580c88 */

/* Supplied declaration required: FUN_001836b0. */
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_00244a58(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 * 0x18 + DAT_00580c88 + 8;
    if (*(int *)(temp_v0 + 0x14) != 0) {
      FUN_001836b0(*(int *)(temp_v0 + 0x14));
      *(unsigned int *)(temp_v0 + 0x14) = 0;
    }
    if (*(int *)(temp_v0 + 0x10) != 0) {
      FUN_0019a5a0(*(int *)(temp_v0 + 0x10));
      *(unsigned int *)(temp_v0 + 0x10) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x10);
  if (DAT_00580c88 != 0) {
    FUN_0019a5a0(DAT_00580c88);
    DAT_00580c88 = 0;
  }
  return;
}

} /* extern "C" */
