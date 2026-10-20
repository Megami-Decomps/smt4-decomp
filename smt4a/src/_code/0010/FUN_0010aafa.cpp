#include "romwright_types.h"

extern "C" {

int FUN_002ee50c(void);

/* Supplied declaration required: FUN_002ee50c. */


unsigned int FUN_0010aafa(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_2 != 0) {
    FUN_002ee50c();
    return 1;
  }
  return 0;
}

} /* extern "C" */
