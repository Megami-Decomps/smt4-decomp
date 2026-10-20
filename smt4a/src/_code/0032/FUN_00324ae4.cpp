#include "romwright_types.h"

extern "C" {

int FUN_002df914(void);

extern int DAT_00580238; /* 0x580238 */

/* Supplied declaration required: FUN_002df914. */


void FUN_00324ae4(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00580238 != 0) {
    FUN_002df914();
    return;
  }
  return;
}

} /* extern "C" */
