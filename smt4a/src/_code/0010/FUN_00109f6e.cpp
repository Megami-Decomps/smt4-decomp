#include "romwright_types.h"

extern "C" {

int FUN_00109f7e(void);
int FUN_002f310e(unsigned int);

/* Supplied declaration required: FUN_00109f7e. */
/* Supplied declaration required: FUN_002f310e. */


void FUN_00109f6e(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_00109f7e();
  FUN_002f310e(param_1);
  return;
}

} /* extern "C" */
