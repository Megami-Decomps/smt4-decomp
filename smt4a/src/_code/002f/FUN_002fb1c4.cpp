#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(unsigned int);
int FUN_002fd02a(void);

/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002fd02a. */


void FUN_002fb1c4(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_002fd02a();
  FUN_002e6e14(param_1);
  return;
}

} /* extern "C" */
