#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043dd20; /* 0x43dd20 */


unsigned char FUN_0029e1c8(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if ((*(int *)((unsigned char *)&DAT_0043dd20 + 0x4)) != 0) {
    temp_v0 = *(int *)((*(int *)((unsigned char *)&DAT_0043dd20 + 0x4)) + 0x744);
  }
  return (*(int *)((unsigned char *)&DAT_0043dd20 + 0x4)) == 0 || temp_v0 == 4;
}

} /* extern "C" */
