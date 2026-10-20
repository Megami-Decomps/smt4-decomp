#include "romwright_types.h"

extern "C" {

int FUN_00196114(unsigned int, unsigned int);

/* Supplied declaration required: FUN_00196114. */


void FUN_0017e5a4(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(*(int *)(param_1 + 0x34) + 8) =
       (((*(int *)(param_2 + 4) + *(int *)(param_2 + 8)) - *(int *)(param_1 + 0x34)) - 0x18U) >> 3;
  FUN_00196114(*(unsigned int *)(param_2 + 4),*(unsigned int *)(param_2 + 8));
  *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_2 + 0xc) | 4;
  *(unsigned int *)(param_2 + 8) = *(unsigned int *)(param_1 + 0x30);
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x30) = 0;
  return;
}

} /* extern "C" */
