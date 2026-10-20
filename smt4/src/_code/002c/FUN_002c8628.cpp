#include "romwright_types.h"

extern "C" {

int FUN_00266a2c(void);

extern int DAT_00447060; /* 0x447060 */

/* Supplied declaration required: FUN_00266a2c. */


void FUN_002c8628(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00447060 != 0) {
    FUN_00266a2c();
    return;
  }
  return;
}

} /* extern "C" */
