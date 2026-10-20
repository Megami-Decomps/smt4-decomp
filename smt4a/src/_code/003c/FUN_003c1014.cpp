#include "romwright_types.h"

extern "C" {

int FUN_00385444(void);

/* Supplied declaration required: FUN_00385444. */


unsigned int FUN_003c1014(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_00385444();
  return 1;
}

} /* extern "C" */
