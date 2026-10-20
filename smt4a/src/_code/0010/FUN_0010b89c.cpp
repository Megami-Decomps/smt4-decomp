#include "romwright_types.h"

extern "C" {

int FUN_002f5044(void);

/* Supplied declaration required: FUN_002f5044. */


unsigned int FUN_0010b89c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002f5044();
  return param_1;
}

} /* extern "C" */
