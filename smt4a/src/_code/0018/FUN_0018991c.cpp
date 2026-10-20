#include "romwright_types.h"

extern "C" {

int FUN_00189938(void);

extern signed char DAT_00589284; /* 0x589284 */

/* Supplied declaration required: FUN_00189938. */


void FUN_0018991c(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00589284 != '\0') {
    FUN_00189938();
    return;
  }
  return;
}

} /* extern "C" */
