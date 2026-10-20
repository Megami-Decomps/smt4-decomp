#include "romwright_types.h"

extern "C" {

int FUN_0038b548(unsigned int);

extern unsigned char DAT_00588fd0; /* 0x588fd0 */

/* Supplied declaration required: FUN_0038b548. */


void FUN_0035dbd4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  *(char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x1381) = (char)param_1;
  FUN_0038b548(param_1 ^ 1);
  return;
}

} /* extern "C" */
