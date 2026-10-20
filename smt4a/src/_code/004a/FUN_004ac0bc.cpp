#include "romwright_types.h"

extern "C" {

int FUN_0020e71c(int);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_0020e71c. */


void FUN_004ac0bc(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_0020e71c((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x28c4);
  return;
}

} /* extern "C" */
