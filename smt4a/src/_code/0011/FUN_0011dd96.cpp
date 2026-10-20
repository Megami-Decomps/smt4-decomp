#include "romwright_types.h"

extern "C" {

int FUN_002e7228(unsigned int);

/* Supplied declaration required: FUN_002e7228. */


void FUN_0011dd96(unsigned int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e7228(*param_2);
  return;
}

} /* extern "C" */
