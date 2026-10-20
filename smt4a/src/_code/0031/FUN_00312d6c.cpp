#include "romwright_types.h"

extern "C" {

int FUN_002bcafc(void);

extern int DAT_00581274; /* 0x581274 */

/* Supplied declaration required: FUN_002bcafc. */


void FUN_00312d6c(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00581274 != 0) {
    FUN_002bcafc();
    return;
  }
  return;
}

} /* extern "C" */
