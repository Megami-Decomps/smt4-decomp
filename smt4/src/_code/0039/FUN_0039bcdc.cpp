#include "romwright_types.h"

extern "C" {

int timerStart(int, int, int);

/* Supplied declaration required: timerStart. */


void FUN_0039bcdc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned char *)(param_1 + 0x9ed) = 1;
  timerStart(param_1 + 0x9f8,6,0);
  return;
}

} /* extern "C" */
