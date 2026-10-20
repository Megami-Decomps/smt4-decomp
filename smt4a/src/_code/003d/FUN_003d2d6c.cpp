#include "romwright_types.h"

extern "C" {

int FUN_0021c120(unsigned int, unsigned int, int);

/* Supplied declaration required: FUN_0021c120. */


void FUN_003d2d6c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0021c120(0xffffffff,param_1,0);
  return;
}

} /* extern "C" */
