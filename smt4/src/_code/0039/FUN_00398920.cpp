#include "romwright_types.h"

extern "C" {

int FUN_00296ee0(unsigned char *, int);

/* Supplied declaration required: FUN_00296ee0. */


void FUN_00398920(unsigned char *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00296ee0(param_1,9);
  *param_1 = 1;
  return;
}

} /* extern "C" */
