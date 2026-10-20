#include "romwright_types.h"

extern "C" {

int memClear(unsigned short *, int);

/* Supplied declaration required: memClear. */


void FUN_00361140(unsigned short *param_1)

{
/* irregular: 1 native warning(s); review required */
  memClear(param_1,0xe30);
  *param_1 = 2;
  return;
}

} /* extern "C" */
