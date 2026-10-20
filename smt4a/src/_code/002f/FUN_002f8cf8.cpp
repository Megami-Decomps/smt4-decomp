#include "romwright_types.h"

extern "C" {

int FUN_001177b4(int);
int FUN_002f8d10(int);
int FUN_002f8d6c(int);

/* Supplied declaration required: FUN_001177b4. */
/* Supplied declaration required: FUN_002f8d10. */
/* Supplied declaration required: FUN_002f8d6c. */


void FUN_002f8cf8(int param_1)

{
/* irregular: 3 native warning(s); review required */
  FUN_001177b4(param_1 + 0xa4);
  FUN_002f8d10(param_1);
  FUN_002f8d6c(param_1);
  return;
}

} /* extern "C" */
