#include "romwright_types.h"

extern "C" {

int FUN_001201be(void);

/* Supplied declaration required: FUN_001201be. */


unsigned int FUN_00307aba(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001201be();
  return param_1;
}

} /* extern "C" */
