#include "romwright_types.h"

extern "C" {

int FUN_00104952(void);
int FUN_002eb46c(unsigned int, int);

/* Supplied declaration required: FUN_00104952. */
/* Supplied declaration required: FUN_002eb46c. */


void FUN_00104fc6(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_00104952();
  FUN_002eb46c(param_1,0);
  return;
}

} /* extern "C" */
