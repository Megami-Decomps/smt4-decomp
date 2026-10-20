#include "romwright_types.h"

extern "C" {

int sysMemClear(unsigned short *, int);

/* Supplied declaration required: sysMemClear. */


void FUN_0043bfdc(unsigned short *param_1)

{
/* irregular: 1 native warning(s); review required */
  sysMemClear(param_1,0xe30);
  *param_1 = 3;
  return;
}

} /* extern "C" */
