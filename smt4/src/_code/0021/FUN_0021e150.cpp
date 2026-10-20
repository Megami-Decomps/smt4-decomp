#include "romwright_types.h"

extern "C" {

int FUN_0027d0ec(void);

extern int DAT_00447e28; /* 0x447e28 */

/* Supplied declaration required: FUN_0027d0ec. */


void FUN_0021e150(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00447e28 != 0) {
    FUN_0027d0ec();
    return;
  }
  return;
}

} /* extern "C" */
