#include "romwright_types.h"

extern "C" {

int FUN_003a1b38(int, int);

extern int DAT_00580c8c; /* 0x580c8c */

/* Supplied declaration required: FUN_003a1b38. */


void FUN_00353484(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(DAT_00580c8c + param_1 * 100 + 0x68) != 0) {
    FUN_003a1b38(*(int *)(DAT_00580c8c + param_1 * 100 + 0x68),param_2);
    return;
  }
  return;
}

} /* extern "C" */
