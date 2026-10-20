#include "romwright_types.h"

extern "C" {

int FUN_002af5c0(int, int, int);

extern unsigned char DAT_00439c88; /* 0x439c88 */

/* Supplied declaration required: FUN_002af5c0. */


void FUN_003ae03c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00439c88 + 0x20));
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + 0x7e4b) = 1;
  FUN_002af5c0(temp_v0 + 0x7ec0,0xd,0);
  return;
}

} /* extern "C" */
