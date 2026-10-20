#include "romwright_types.h"

extern "C" {

int FUN_00336b54(int, int);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_00336b54. */


void FUN_004a96b8(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_00336b54((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x28c4,0);
  return;
}

} /* extern "C" */
