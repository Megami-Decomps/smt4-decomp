#include "romwright_types.h"

extern "C" {

int FUN_00135804(void);

/* Supplied declaration required: FUN_00135804. */


unsigned int FUN_002ff8a8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00135804();
  return param_1;
}

} /* extern "C" */
