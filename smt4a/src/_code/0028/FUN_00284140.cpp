#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f248; /* 0x57f248 */


unsigned char FUN_00284140(int param_1)

{
  unsigned char temp_v0;
  
  if (*(short *)((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) + 0x64e) == param_1) {
    temp_v0 = *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) + 8);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
