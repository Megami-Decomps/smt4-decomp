#include "romwright_types.h"

extern "C" {

int FUN_00202254(void);

extern unsigned char DAT_0049f91c; /* 0x49f91c */
extern unsigned char DAT_004bce8c; /* 0x4bce8c */

/* Supplied declaration required: FUN_00202254. */


void FUN_00273f90(void)

{
/* irregular: 1 native warning(s); review required */
  if (((*(signed char *)((unsigned char *)&DAT_004bce8c + 0x250)) != '\0') && ((*(signed char *)((unsigned char *)&DAT_0049f91c + 0x26)) != '\0')) {
    FUN_00202254();
    return;
  }
  return;
}

} /* extern "C" */
