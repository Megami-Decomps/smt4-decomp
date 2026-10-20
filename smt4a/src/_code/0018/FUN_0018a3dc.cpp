#include "romwright_types.h"

extern "C" {

int FUN_001a165c(unsigned char *);

extern unsigned char DAT_00643380; /* 0x643380 */

/* Supplied declaration required: FUN_001a165c. */


void FUN_0018a3dc(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_001a165c(&DAT_00643380);
  return;
}

} /* extern "C" */
