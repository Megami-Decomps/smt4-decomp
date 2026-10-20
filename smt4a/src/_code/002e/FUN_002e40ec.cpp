#include "romwright_types.h"

extern "C" {

int rt_memcpy(void);

/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_002e40ec(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  rt_memcpy();
  return param_1;
}

} /* extern "C" */
