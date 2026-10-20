#include "romwright_types.h"

extern "C" {

int FUN_003c4d64(void);

/* Supplied declaration required: FUN_003c4d64. */


unsigned int FUN_003c1050(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_003c4d64();
  return 1;
}

} /* extern "C" */
