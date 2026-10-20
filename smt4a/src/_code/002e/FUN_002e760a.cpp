#include "romwright_types.h"

extern "C" {

int rt_malloc(void);

/* Supplied declaration required: rt_malloc. */


void FUN_002e760a(void)

{
/* irregular: 1 native warning(s); review required */
  rt_malloc();
  return;
}

} /* extern "C" */
