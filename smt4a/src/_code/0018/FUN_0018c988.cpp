#include "romwright_types.h"

extern "C" {

int FUN_001a3710(void);

/* Supplied declaration required: FUN_001a3710. */


unsigned int FUN_0018c988(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001a3710();
  return param_1;
}

} /* extern "C" */
