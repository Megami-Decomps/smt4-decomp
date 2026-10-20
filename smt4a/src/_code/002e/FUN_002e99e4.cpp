#include "romwright_types.h"

extern "C" {

int FUN_002e93da(int);

/* Supplied declaration required: FUN_002e93da. */


void FUN_002e99e4(int param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e93da(param_1);
  *(unsigned char *)(param_1 + 8) = param_2;
  *(unsigned char *)(param_1 + 0x65) = 0;
  return;
}

} /* extern "C" */
