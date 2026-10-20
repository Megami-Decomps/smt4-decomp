#include "romwright_types.h"

extern "C" {

int FUN_004d8bf8(void);

extern int DAT_0057a4f8; /* 0x57a4f8 */

/* Supplied declaration required: FUN_004d8bf8. */


void FUN_003e7840(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0057a4f8 != 0) {
    FUN_004d8bf8();
    return;
  }
  return;
}

} /* extern "C" */
