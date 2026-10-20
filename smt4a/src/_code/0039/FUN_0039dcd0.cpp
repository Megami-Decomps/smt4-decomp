#include "romwright_types.h"

extern "C" {

int FUN_003216ec(void);

/* Supplied declaration required: FUN_003216ec. */


unsigned int FUN_0039dcd0(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_003216ec();
  return 1;
}

} /* extern "C" */
