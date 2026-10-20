#include "romwright_types.h"

extern "C" {

int FUN_00164a9c(void);
int FUN_0019a5a0(void);

extern unsigned int DAT_005b3bf0; /* 0x5b3bf0 */

/* Supplied declaration required: FUN_00164a9c. */
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_001505f8(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_00164a9c();
  FUN_0019a5a0();
  DAT_005b3bf0 = 0;
  return;
}

} /* extern "C" */
