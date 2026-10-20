#include "romwright_types.h"

extern "C" {

int FUN_001db998(unsigned int, unsigned int);

/* Supplied declaration required: FUN_001db998. */


void FUN_002a0428(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = *param_1 & 0xffdfffff;
  FUN_001db998(param_1[2],param_2);
  return;
}

} /* extern "C" */
