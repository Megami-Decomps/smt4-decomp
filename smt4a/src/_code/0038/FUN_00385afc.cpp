#include "romwright_types.h"

extern "C" {

int FUN_0048c1ac(int);

extern int DAT_00587f28; /* 0x587f28 */

/* Supplied declaration required: FUN_0048c1ac. */


void FUN_00385afc(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00587f28 != 0) {
    FUN_0048c1ac(DAT_00587f28 + 0x68);
    return;
  }
  return;
}

} /* extern "C" */
