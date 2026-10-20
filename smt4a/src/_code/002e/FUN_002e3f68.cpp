#include "romwright_types.h"

extern "C" {

int FUN_002e5780(void);

/* Supplied declaration required: FUN_002e5780. */


unsigned int FUN_002e3f68(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e5780();
  return param_1;
}

} /* extern "C" */
