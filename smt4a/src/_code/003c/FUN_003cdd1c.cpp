#include "romwright_types.h"

extern "C" {

int FUN_003cb49c(void);

/* Supplied declaration required: FUN_003cb49c. */


unsigned int FUN_003cdd1c(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_003cb49c();
  return 1;
}

} /* extern "C" */
