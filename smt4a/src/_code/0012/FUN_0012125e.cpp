#include "romwright_types.h"

extern "C" {

int FUN_002e74c4(unsigned int, int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_002e74c4. */


unsigned int FUN_0012125e(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e74c4(param_1,*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18),
               *(unsigned int *)(param_2 + 0x10),0xffffffff);
  return param_1;
}

} /* extern "C" */
