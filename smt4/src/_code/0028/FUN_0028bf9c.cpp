#include "romwright_types.h"

extern "C" {

int timerStart(int, int, int);

/* Supplied declaration required: timerStart. */


void FUN_0028bf9c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  timerStart(param_1 + 0x1c4,3,1);
  return;
}

} /* extern "C" */
