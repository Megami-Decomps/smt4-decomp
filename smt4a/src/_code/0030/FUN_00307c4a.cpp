#include "romwright_types.h"

extern "C" {

int FUN_00117bc8(void);

/* Supplied declaration required: FUN_00117bc8. */


unsigned int FUN_00307c4a(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00117bc8();
  return param_1;
}

} /* extern "C" */
