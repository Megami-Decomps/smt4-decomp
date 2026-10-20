#include "romwright_types.h"

extern "C" {

int FUN_00358fbc(unsigned int);

extern int DAT_0057f390; /* 0x57f390 */

/* Supplied declaration required: FUN_00358fbc. */


void FUN_00319e58(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0057f390 != 0) {
    FUN_00358fbc(*(unsigned int *)(DAT_0057f390 + 4));
    return;
  }
  return;
}

} /* extern "C" */
