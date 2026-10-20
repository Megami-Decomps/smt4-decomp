#include "romwright_types.h"

extern "C" {

int FUN_002e59f8(unsigned int, int, int);

/* Supplied declaration required: FUN_002e59f8. */


void FUN_00343cc8(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e59f8(param_2,param_1 + 0xe,0x12);
  return;
}

} /* extern "C" */
