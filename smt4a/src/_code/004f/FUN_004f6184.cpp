#include "romwright_types.h"

extern "C" {

int FUN_0031b9d4(void);

/* Supplied declaration required: FUN_0031b9d4. */


void FUN_004f6184(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((*(unsigned int *)(param_1 + 0x339c) & 4) != 0) {
    FUN_0031b9d4();
    *(unsigned int *)(param_1 + 0x339c) = (*(unsigned int *)(param_1 + 0x339c) & 0xfffffffb) | 8;
  }
  return;
}

} /* extern "C" */
