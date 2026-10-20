#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f3b4; /* 0x57f3b4 */


unsigned char FUN_00239134(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if ((*(int *)((unsigned char *)&DAT_0057f3b4 + 0xc)) != 0) {
    temp_v0 = *(int *)((*(int *)((unsigned char *)&DAT_0057f3b4 + 0xc)) + 4);
  }
  return (*(int *)((unsigned char *)&DAT_0057f3b4 + 0xc)) == 0 || temp_v0 == 3;
}

} /* extern "C" */
