#include "romwright_types.h"

extern "C" {

int FUN_00308d3c(void);

extern int DAT_00447e28; /* 0x447e28 */

/* Supplied declaration required: FUN_00308d3c. */


void FUN_00308cb8(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00447e28 != 0) {
    FUN_00308d3c();
    return;
  }
  return;
}

} /* extern "C" */
