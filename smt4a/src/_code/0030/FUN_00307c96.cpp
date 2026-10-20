#include "romwright_types.h"

extern "C" {

int FUN_001178e2(void);

/* Supplied declaration required: FUN_001178e2. */


unsigned int FUN_00307c96(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001178e2();
  return param_1;
}

} /* extern "C" */
