#include "romwright_types.h"

extern "C" {

int FUN_002e93da(unsigned int);
int FUN_002e9538(unsigned int, unsigned int);

/* Supplied declaration required: FUN_002e93da. */
/* Supplied declaration required: FUN_002e9538. */


unsigned int FUN_002ea9c0(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_002e93da(param_1);
  FUN_002e9538(*(unsigned int *)(param_1 + 4),param_2);
  *(unsigned char *)(param_1 + 0x65) = 0;
  return 1;
}

} /* extern "C" */
