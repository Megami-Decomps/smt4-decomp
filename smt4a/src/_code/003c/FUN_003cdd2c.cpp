#include "romwright_types.h"

extern "C" {

int FUN_003cb5f0(void);

/* Supplied declaration required: FUN_003cb5f0. */


unsigned int FUN_003cdd2c(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_003cb5f0();
  return 1;
}

} /* extern "C" */
