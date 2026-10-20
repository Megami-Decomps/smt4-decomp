#include "romwright_types.h"

extern "C" {

int FUN_002f9f12(void);

/* Supplied declaration required: FUN_002f9f12. */


int * FUN_002eea6a(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    FUN_002f9f12();
  }
  return param_1;
}

} /* extern "C" */
