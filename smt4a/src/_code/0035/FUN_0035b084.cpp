#include "romwright_types.h"

extern "C" {

int FUN_004bb31c(unsigned int);

extern int DAT_0057f390; /* 0x57f390 */

/* Supplied declaration required: FUN_004bb31c. */


void FUN_0035b084(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0057f390 != 0) {
    FUN_004bb31c(*(unsigned int *)(DAT_0057f390 + 4));
    return;
  }
  return;
}

} /* extern "C" */
