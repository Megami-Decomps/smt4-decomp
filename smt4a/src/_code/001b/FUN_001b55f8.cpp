#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_001b55f8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  return;
}

} /* extern "C" */
