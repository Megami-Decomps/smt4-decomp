#include "romwright_types.h"

extern "C" {

int FUN_00221c10(void);

/* Supplied declaration required: FUN_00221c10. */


void FUN_003d9e88(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((*(unsigned int *)(param_1 + 0x3028) & 4) != 0) {
    FUN_00221c10();
    *(unsigned int *)(param_1 + 0x3028) = (*(unsigned int *)(param_1 + 0x3028) & 0xfffffffb) | 8;
  }
  return;
}

} /* extern "C" */
