#include "romwright_types.h"

extern "C" {

int FUN_0011080c(unsigned int);

/* Supplied declaration required: FUN_0011080c. */


void FUN_0010ed92(unsigned int *param_1,int param_2,int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  FUN_0011080c(*param_1);
  if (param_4 != 0) {
    *(unsigned short *)((param_3 * 2 + param_2) - 2) = 0;
  }
  return;
}

} /* extern "C" */
