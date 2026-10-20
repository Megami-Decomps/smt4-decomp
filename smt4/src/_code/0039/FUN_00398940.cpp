#include "romwright_types.h"

extern "C" {

int FUN_00296ee0(int, int);

/* Supplied declaration required: FUN_00296ee0. */


void FUN_00398940(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00296ee0(param_1,1);
  *(unsigned int *)(param_1 + 0xa4) = 0x140;
  *(unsigned int *)(param_1 + 0xa8) = 0;
  *(unsigned int *)(param_1 + 0xac) = 0x140;
  return;
}

} /* extern "C" */
