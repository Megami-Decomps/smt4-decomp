#include "romwright_types.h"

extern "C" {

int FUN_004853fc(unsigned char *, int);

/* Supplied declaration required: FUN_004853fc. */


void FUN_004850c4(unsigned char *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_004853fc(param_1,9);
  *param_1 = 1;
  return;
}

} /* extern "C" */
