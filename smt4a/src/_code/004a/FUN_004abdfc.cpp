#include "romwright_types.h"

extern "C" {

int FUN_0039e970(int);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_0039e970. */


void FUN_004abdfc(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_0039e970((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x28c4);
  return;
}

} /* extern "C" */
