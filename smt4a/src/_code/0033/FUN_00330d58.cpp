#include "romwright_types.h"

extern "C" {

int FUN_003127b4(void);

/* Supplied declaration required: FUN_003127b4. */


unsigned int FUN_00330d58(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_003127b4();
  return 1;
}

} /* extern "C" */
