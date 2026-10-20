#include "romwright_types.h"

extern "C" {

int FUN_00439cc4(unsigned char *);

extern unsigned char DAT_00643380; /* 0x643380 */

/* Supplied declaration required: FUN_00439cc4. */


void FUN_00439eb0(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_00439cc4(&DAT_00643380);
  return;
}

} /* extern "C" */
