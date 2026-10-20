#include "romwright_types.h"

extern "C" {

int FUN_0048b11c(int);

extern int DAT_00587f28; /* 0x587f28 */

/* Supplied declaration required: FUN_0048b11c. */


void FUN_00368b6c(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00587f28 != 0) {
    FUN_0048b11c(DAT_00587f28 + 0x68);
    return;
  }
  return;
}

} /* extern "C" */
