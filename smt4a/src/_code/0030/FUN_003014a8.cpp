#include "romwright_types.h"

extern "C" {

int FUN_002ffd8c(void);

/* Supplied declaration required: FUN_002ffd8c. */


unsigned int FUN_003014a8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002ffd8c();
  return param_1;
}

} /* extern "C" */
