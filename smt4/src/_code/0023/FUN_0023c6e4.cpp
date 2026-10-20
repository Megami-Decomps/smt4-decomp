#include "romwright_types.h"

extern "C" {

int FUN_003c7f08(void);

extern int DAT_004398d4; /* 0x4398d4 */

/* Supplied declaration required: FUN_003c7f08. */


void FUN_0023c6e4(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_004398d4 != 0) {
    FUN_003c7f08();
    return;
  }
  return;
}

} /* extern "C" */
