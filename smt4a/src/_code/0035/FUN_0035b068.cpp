#include "romwright_types.h"

extern "C" {

int FUN_0035af44(void);

extern int DAT_0057f390; /* 0x57f390 */

/* Supplied declaration required: FUN_0035af44. */


void FUN_0035b068(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0057f390 != 0) {
    FUN_0035af44();
    return;
  }
  return;
}

} /* extern "C" */
