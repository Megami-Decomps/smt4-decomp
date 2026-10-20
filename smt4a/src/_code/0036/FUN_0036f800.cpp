#include "romwright_types.h"

extern "C" {

int FUN_001b347c(void);
int FUN_003283ac(void);

/* Supplied declaration required: FUN_001b347c. */
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_0036f800(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_001b347c();
  FUN_003283ac();
  return 1;
}

} /* extern "C" */
