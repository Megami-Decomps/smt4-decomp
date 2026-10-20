#include "romwright_types.h"

extern "C" {

int FUN_0048c380(int);

extern int DAT_00587f28; /* 0x587f28 */

/* Supplied declaration required: FUN_0048c380. */


void FUN_00314bd8(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00587f28 != 0) {
    FUN_0048c380(DAT_00587f28 + 0x68);
    return;
  }
  return;
}

} /* extern "C" */
