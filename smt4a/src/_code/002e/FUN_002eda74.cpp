#include "romwright_types.h"

extern "C" {

int FUN_003105b0(void);

/* Supplied declaration required: FUN_003105b0. */


unsigned int FUN_002eda74(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_003105b0();
  return param_1;
}

} /* extern "C" */
