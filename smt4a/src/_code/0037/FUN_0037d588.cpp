#include "romwright_types.h"

extern "C" {

int FUN_00261424(void);
int FUN_003283ac(void);

/* Supplied declaration required: FUN_00261424. */
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_0037d588(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_00261424();
  FUN_003283ac();
  return 1;
}

} /* extern "C" */
