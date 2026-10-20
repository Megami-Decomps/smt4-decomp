#include "romwright_types.h"

extern "C" {

int FUN_00184c00(int, int, int);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_00184c00. */


void FUN_004a998c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10));
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x74b3) = 1;
  FUN_00184c00(temp_v0 + 0x7528,0xd,0);
  return;
}

} /* extern "C" */
