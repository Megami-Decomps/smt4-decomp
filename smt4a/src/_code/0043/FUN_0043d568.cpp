#include "romwright_types.h"

extern "C" {

int FUN_0043df70(int, unsigned int);

extern int DAT_005c0afc; /* 0x5c0afc */

/* Supplied declaration required: FUN_0043df70. */


void FUN_0043d568(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_005c0afc != 0) {
    FUN_0043df70(DAT_005c0afc,param_1);
    return;
  }
  return;
}

} /* extern "C" */
