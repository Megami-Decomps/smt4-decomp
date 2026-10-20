#include "romwright_types.h"

extern "C" {

int FUN_002ea6ae(unsigned int, int, unsigned int);

/* Supplied declaration required: FUN_002ea6ae. */


unsigned int FUN_002eb16e(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002ea6ae(param_1,param_2,*(unsigned int *)(param_2 + 0x10));
  return param_1;
}

} /* extern "C" */
