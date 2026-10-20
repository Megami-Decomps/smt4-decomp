#include "romwright_types.h"

extern "C" {

int FUN_003e4140(int);

extern unsigned char DAT_00588fd0; /* 0x588fd0 */

/* Supplied declaration required: FUN_003e4140. */


void FUN_0038b6bc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4));
  if ((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x20d1) = 1;
    FUN_003e4140(temp_v0 + 0x20d4);
    return;
  }
  return;
}

} /* extern "C" */
