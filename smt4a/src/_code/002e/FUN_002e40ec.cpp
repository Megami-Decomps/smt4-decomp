#include "romwright_types.h"

extern "C" {

int __aeabi_memcpy(void);

/* Supplied declaration required: __aeabi_memcpy. */


unsigned int FUN_002e40ec(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  __aeabi_memcpy();
  return param_1;
}

} /* extern "C" */
