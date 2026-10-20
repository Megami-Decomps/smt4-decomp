#include "romwright_types.h"

extern "C" {

int mwmofilterDeblockerRelease(unsigned int);

/* Supplied declaration required: mwmofilterDeblockerRelease. */


void FUN_00423654(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  mwmofilterDeblockerRelease(*param_1);
  *param_1 = 0;
  return;
}

} /* extern "C" */
