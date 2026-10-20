#include "romwright_types.h"

extern "C" {

int FUN_00182540(void);

extern int DAT_00580c88; /* 0x580c88 */

/* Supplied declaration required: FUN_00182540. */


void FUN_00244a14(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (DAT_00580c88 != 0) {
    temp_v0 = 0;
    do {
      if (*(int *)(DAT_00580c88 + temp_v0 * 0x18 + 0x1c) != 0) {
        FUN_00182540();
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x10);
  }
  return;
}

} /* extern "C" */
