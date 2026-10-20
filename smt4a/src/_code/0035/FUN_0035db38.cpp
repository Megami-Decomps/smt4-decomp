#include "romwright_types.h"

extern "C" {

int FUN_00184758(int, int, int);

extern unsigned char DAT_00588fd0; /* 0x588fd0 */

/* Supplied declaration required: FUN_00184758. */


void FUN_0035db38(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_00184758((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x12dc,5,0);
  return;
}

} /* extern "C" */
