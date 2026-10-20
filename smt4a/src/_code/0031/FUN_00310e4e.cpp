#include "romwright_types.h"

extern "C" {

int FUN_002edb54(int, unsigned int, int);

/* Supplied declaration required: FUN_002edb54. */


unsigned int FUN_00310e4e(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002edb54(param_1 + 0xc,param_2,0);
  return *(unsigned int *)(param_1 + 0xc);
}

} /* extern "C" */
