#include "romwright_types.h"

extern "C" {

int FUN_0049204c(int);

extern int DAT_00587f28; /* 0x587f28 */

/* Supplied declaration required: FUN_0049204c. */


void FUN_003c4d64(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00587f28 != 0) {
    FUN_0049204c(DAT_00587f28 + 0x68);
    return;
  }
  return;
}

} /* extern "C" */
