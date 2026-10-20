#include "romwright_types.h"

extern "C" {

int FUN_00128cd8(void);

/* Supplied declaration required: FUN_00128cd8. */


unsigned int FUN_0011c6ac(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00128cd8();
  return param_1;
}

} /* extern "C" */
