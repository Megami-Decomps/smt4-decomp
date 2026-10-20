#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_002e3328(void);

extern unsigned int *DAT_00589144; /* 0x589144 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_0037d400(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_001631d0(*DAT_00589144,0);
  if (DAT_00589144 != (unsigned int *)0x0) {
    FUN_002e3328();
    DAT_00589144 = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
