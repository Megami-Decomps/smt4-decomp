#include "romwright_types.h"

extern "C" {

int FUN_00308d3c(void);

extern int DAT_00447060; /* 0x447060 */

/* Supplied declaration required: FUN_00308d3c. */


void FUN_0030f4e8(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00447060 != 0) {
    FUN_00308d3c();
    return;
  }
  return;
}

} /* extern "C" */
