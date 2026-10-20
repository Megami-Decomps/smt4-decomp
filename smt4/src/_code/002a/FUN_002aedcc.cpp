#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043dcb0; /* 0x43dcb0 */


unsigned int FUN_002aedcc(int param_1)

{
  int temp_v0;
  
  if (((*(short *)((*(int *)((unsigned char *)&DAT_0043dcb0 + 0x4)) + 0x64e) == param_1) &&
      (*(char *)((*(int *)((unsigned char *)&DAT_0043dcb0 + 0x4)) + 8) == '\x01' || *(char *)((*(int *)((unsigned char *)&DAT_0043dcb0 + 0x4)) + 8) == '\x02')) &&
     ((temp_v0 = (int)*(short *)((*(int *)((unsigned char *)&DAT_0043dcb0 + 0x4)) + 0x650), temp_v0 < 1 ||
      ((temp_v0 >= 0xf && (((temp_v0 - 0xfU) & 3) == 0)))))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
