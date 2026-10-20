#include "romwright_types.h"

extern "C" {

int FUN_00117620(int);

/* Supplied declaration required: FUN_00117620. */


void FUN_00306d18(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00117620(param_1 + 0xa4);
  return;
}

} /* extern "C" */
