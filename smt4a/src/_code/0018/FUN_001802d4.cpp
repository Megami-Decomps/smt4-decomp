#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f248; /* 0x57f248 */


unsigned int FUN_001802d4(unsigned int param_1)

{
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  temp_v1 = (int)*(short *)((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) + 0x64e) == param_1;
  if (temp_v1) {
    param_1 = (unsigned int)*(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) + 8);
  }
  if ((temp_v1 && param_1 == 1) && (*(short *)((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) + 0x650) < 1)) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
