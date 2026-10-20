#include "romwright_types.h"

extern "C" {

int FUN_0011eec4(void);

/* Supplied declaration required: FUN_0011eec4. */


unsigned int FUN_0030c6e4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0011eec4();
  return param_1;
}

} /* extern "C" */
