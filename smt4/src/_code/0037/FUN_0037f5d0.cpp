#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004ea494; /* 0x4ea494 */


int FUN_0037f5d0(int param_1,int param_2)

{
  int temp_v0;
  
  if (param_2 < 0x10) {
    temp_v0 = param_1 + param_2 * 2 + 0xcc;
  }
  else if (param_2 < 0x20) {
    temp_v0 = (int)&(*(unsigned int *)((unsigned char *)&DAT_004ea494 - 0x20)) + param_2 * 2;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
