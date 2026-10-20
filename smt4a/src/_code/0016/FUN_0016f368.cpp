#include "romwright_types.h"

extern "C" {

int FUN_0016f33c(unsigned char *);

extern unsigned char DAT_00643380; /* 0x643380 */

/* Supplied declaration required: FUN_0016f33c. */


void FUN_0016f368(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_0016f33c(&DAT_00643380);
  return;
}

} /* extern "C" */
