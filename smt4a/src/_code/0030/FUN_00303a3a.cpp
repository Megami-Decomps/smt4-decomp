#include "romwright_types.h"

extern "C" {

int FUN_00133cbc(void);

/* Supplied declaration required: FUN_00133cbc. */


unsigned int FUN_00303a3a(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00133cbc();
  return param_1;
}

} /* extern "C" */
