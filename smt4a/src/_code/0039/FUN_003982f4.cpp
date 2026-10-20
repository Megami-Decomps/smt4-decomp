#include "romwright_types.h"

extern "C" {

int FUN_00398464(void);

extern int DAT_00581274; /* 0x581274 */

/* Supplied declaration required: FUN_00398464. */


void FUN_003982f4(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00581274 != 0) {
    FUN_00398464();
    return;
  }
  return;
}

} /* extern "C" */
