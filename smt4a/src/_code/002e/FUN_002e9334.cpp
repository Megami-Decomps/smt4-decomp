#include "romwright_types.h"

extern "C" {

int FUN_002e93da(int);
int FUN_002e93ec(unsigned int, unsigned int);

/* Supplied declaration required: FUN_002e93da. */
/* Supplied declaration required: FUN_002e93ec. */


void FUN_002e9334(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_002e93da(param_1);
  *(unsigned char *)(param_1 + 0x65) = 0;
  FUN_002e93ec(*(unsigned int *)(param_1 + 4),param_2);
  return;
}

} /* extern "C" */
