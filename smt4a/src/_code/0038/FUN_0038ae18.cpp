#include "romwright_types.h"

extern "C" {

int FUN_00312d6c(void);
int FUN_00324ae4(void);

/* Supplied declaration required: FUN_00312d6c. */
/* Supplied declaration required: FUN_00324ae4. */


unsigned int FUN_0038ae18(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_00312d6c();
  FUN_00324ae4();
  return 1;
}

} /* extern "C" */
