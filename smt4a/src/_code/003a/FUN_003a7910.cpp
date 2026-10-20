#include "romwright_types.h"

extern "C" {

int FUN_003283ac(void);
int FUN_004186e0(void);

/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_004186e0. */


unsigned int FUN_003a7910(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_004186e0();
  FUN_003283ac();
  return 1;
}

} /* extern "C" */
