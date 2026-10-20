#include "romwright_types.h"

extern "C" {

int FUN_0019c0e0(void);

extern int DAT_00580c8c; /* 0x580c8c */

/* Supplied declaration required: FUN_0019c0e0. */


void FUN_002b7490(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)(DAT_00580c8c + temp_v0 * 100 + 0x68) != 0) {
      FUN_0019c0e0();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x10);
  return;
}

} /* extern "C" */
