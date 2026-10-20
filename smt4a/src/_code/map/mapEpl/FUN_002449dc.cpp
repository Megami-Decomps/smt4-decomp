#include "romwright_types.h"

extern "C" {

int FUN_0019c0e0(void);

extern int DAT_00580c88; /* 0x580c88 */

/* Supplied declaration required: FUN_0019c0e0. */


void FUN_002449dc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)(DAT_00580c88 + temp_v0 * 0x18 + 0x1c) != 0) {
      FUN_0019c0e0();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x10);
  return;
}

} /* extern "C" */
