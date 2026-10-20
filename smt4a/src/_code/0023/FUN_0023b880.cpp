#include "romwright_types.h"

extern "C" {

int FUN_003d2d34(unsigned int, int, int);

extern int DAT_0057f290; /* 0x57f290 */

/* Supplied declaration required: FUN_003d2d34. */


unsigned int FUN_0023b880(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0057f290 == 0) {
    return 0;
  }
  FUN_003d2d34(*(unsigned int *)(DAT_0057f290 + 0x48c),0,0x3c);
  return 1;
}

} /* extern "C" */
