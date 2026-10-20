#include "romwright_types.h"

extern "C" {

int FUN_0011b272(void);

/* Supplied declaration required: FUN_0011b272. */


unsigned int FUN_00303a22(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0011b272();
  return param_1;
}

} /* extern "C" */
