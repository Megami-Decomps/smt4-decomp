#include "romwright_types.h"

extern "C" {

int FUN_00336d68(int);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_00336d68. */


void FUN_004aaf80(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_00336d68((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 8);
  return;
}

} /* extern "C" */
