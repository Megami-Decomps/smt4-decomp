#include "romwright_types.h"

extern "C" {

int FUN_001a08d8(unsigned int *);

extern unsigned int DAT_005b3fd4; /* 0x5b3fd4 */

/* Supplied declaration required: FUN_001a08d8. */


void FUN_001400a0(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_001a08d8(&DAT_005b3fd4);
  return;
}

} /* extern "C" */
