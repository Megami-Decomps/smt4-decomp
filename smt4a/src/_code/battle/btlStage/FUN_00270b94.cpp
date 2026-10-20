#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);

extern int DAT_0057a4f4; /* 0x57a4f4 */

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_00270b94(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0057a4f4 != 0) {
    FUN_0019a5a0();
    DAT_0057a4f4 = 0;
  }
  return;
}

} /* extern "C" */
