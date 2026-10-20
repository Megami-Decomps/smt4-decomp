#include "romwright_types.h"

extern "C" {

int FUN_002ea43c(unsigned int);
int FUN_002faf62(void);

/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002faf62. */


void FUN_002fa6e8(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_002faf62();
  FUN_002ea43c(param_1);
  return;
}

} /* extern "C" */
