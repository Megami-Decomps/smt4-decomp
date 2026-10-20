#include "romwright_types.h"

extern "C" {

int FUN_00218be0(int);

extern unsigned char DAT_00439c88; /* 0x439c88 */

/* Supplied declaration required: FUN_00218be0. */


void FUN_003ae3cc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00439c88 + 0x20));
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + 0x7e38) = 4;
  FUN_00218be0(temp_v0 + 8);
  return;
}

} /* extern "C" */
