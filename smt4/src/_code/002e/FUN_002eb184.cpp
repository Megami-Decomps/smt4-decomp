#include "romwright_types.h"

extern "C" {

int FUN_0039bcdc(int);

extern int DAT_0044cdf0; /* 0x44cdf0 */

/* Supplied declaration required: FUN_0039bcdc. */


void FUN_002eb184(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0044cdf0 != 0) {
    FUN_0039bcdc(DAT_0044cdf0 + 0x40);
    return;
  }
  return;
}

} /* extern "C" */
