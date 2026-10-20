#include "romwright_types.h"

extern "C" {

int FUN_0035fb44(int);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_0035fb44. */


void FUN_004aa1d0(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_0035fb44((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x28c4);
  return;
}

} /* extern "C" */
