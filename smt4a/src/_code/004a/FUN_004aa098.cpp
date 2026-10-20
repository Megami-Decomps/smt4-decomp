#include "romwright_types.h"

extern "C" {

int FUN_002ccd58(int);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_002ccd58. */


void FUN_004aa098(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002ccd58((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x28c4);
  return;
}

} /* extern "C" */
