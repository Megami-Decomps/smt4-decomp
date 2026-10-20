#include "romwright_types.h"

extern "C" {

int FUN_0015a5c0(int, int, unsigned int);

extern unsigned int DAT_005891bc; /* 0x5891bc */

/* Supplied declaration required: FUN_0015a5c0. */


void FUN_0013869c(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_0015a5c0(0,0,DAT_005891bc);
  return;
}

} /* extern "C" */
