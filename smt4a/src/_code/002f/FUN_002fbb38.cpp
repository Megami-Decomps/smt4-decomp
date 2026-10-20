#include "romwright_types.h"

extern "C" {

int FUN_001323aa(void);

/* Supplied declaration required: FUN_001323aa. */


unsigned int FUN_002fbb38(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001323aa();
  return param_1;
}

} /* extern "C" */
