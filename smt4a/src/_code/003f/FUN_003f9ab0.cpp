#include "romwright_types.h"

extern "C" {

int FUN_003f95e0(void);

/* Supplied declaration required: FUN_003f95e0. */


unsigned int FUN_003f9ab0(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_003f95e0();
  return param_1;
}

} /* extern "C" */
