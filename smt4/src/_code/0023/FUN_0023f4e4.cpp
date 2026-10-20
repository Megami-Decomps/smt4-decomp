#include "romwright_types.h"

extern "C" {

int FUN_003d9e88(void);

extern int DAT_00435d18; /* 0x435d18 */

/* Supplied declaration required: FUN_003d9e88. */


void FUN_0023f4e4(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00435d18 != 0) {
    FUN_003d9e88();
    return;
  }
  return;
}

} /* extern "C" */
