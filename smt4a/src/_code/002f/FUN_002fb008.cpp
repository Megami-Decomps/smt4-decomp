#include "romwright_types.h"

extern "C" {

int FUN_0031076a(int);

/* Supplied declaration required: FUN_0031076a. */


int FUN_002fb008(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0031076a(param_1 + 4);
  return param_1;
}

} /* extern "C" */
