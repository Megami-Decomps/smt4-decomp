#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588c40; /* 0x588c40 */


unsigned int FUN_00162880(void)

{
  unsigned int temp_v0;
  
  if (((*(int *)((unsigned char *)&DAT_00588c40 + 0x4)) == 0) || (*(int *)((*(int *)((unsigned char *)&DAT_00588c40 + 0x4)) + 0x4364) == 0x17)) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
