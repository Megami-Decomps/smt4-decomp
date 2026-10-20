#include "romwright_types.h"

extern "C" {

int FUN_002bc02c(void);

/* Supplied declaration required: FUN_002bc02c. */


unsigned int FUN_001ed5fc(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002bc02c();
  return 1;
}

} /* extern "C" */
