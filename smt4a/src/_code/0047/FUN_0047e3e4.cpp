#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);
int FUN_0019c364(void);

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */


void FUN_0047e3e4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_0019c364();
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  return;
}

} /* extern "C" */
