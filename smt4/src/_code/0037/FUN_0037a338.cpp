#include "romwright_types.h"

extern "C" {

int FUN_001216bc(void);

/* Supplied declaration required: FUN_001216bc. */


unsigned int FUN_0037a338(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001216bc();
  return param_1;
}

} /* extern "C" */
