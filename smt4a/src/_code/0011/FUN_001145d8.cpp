#include "romwright_types.h"

extern "C" {

int FUN_0011b312(void);

/* Supplied declaration required: FUN_0011b312. */


unsigned int FUN_001145d8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0011b312();
  return param_1;
}

} /* extern "C" */
