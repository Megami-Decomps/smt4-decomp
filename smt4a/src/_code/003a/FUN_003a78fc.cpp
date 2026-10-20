#include "romwright_types.h"

extern "C" {

int FUN_003283ac(void);
int FUN_003dee48(void);

/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003dee48. */


unsigned int FUN_003a78fc(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_003dee48();
  FUN_003283ac();
  return 1;
}

} /* extern "C" */
