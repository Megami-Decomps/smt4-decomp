#include "romwright_types.h"

extern "C" {

int FUN_00184c00(int, int, int);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_00184c00. */


void FUN_004a9c04(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_00184c00((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x7528,0xe,0);
  return;
}

} /* extern "C" */
