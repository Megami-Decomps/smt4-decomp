#include "romwright_types.h"

extern "C" {

int FUN_002e75c2(void);

/* Supplied declaration required: FUN_002e75c2. */


unsigned int FUN_003026b0(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e75c2();
  return param_1;
}

} /* extern "C" */
