#include "romwright_types.h"

extern "C" {

int FUN_00486304(int);

extern int DAT_00587f28; /* 0x587f28 */

/* Supplied declaration required: FUN_00486304. */


void FUN_00314c18(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00587f28 != 0) {
    FUN_00486304(DAT_00587f28 + 0x68);
    return;
  }
  return;
}

} /* extern "C" */
