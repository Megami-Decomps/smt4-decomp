#include "romwright_types.h"

extern "C" {

int FUN_002c4938(unsigned short *, int);

/* Supplied declaration required: FUN_002c4938. */


void FUN_00361140(unsigned short *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c4938(param_1,0xe30);
  *param_1 = 2;
  return;
}

} /* extern "C" */
