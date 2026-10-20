#include "romwright_types.h"

extern "C" {

int FUN_002fa73c(int);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_002fa73c. */


void FUN_004aa768(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002fa73c((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x28c4);
  return;
}

} /* extern "C" */
