#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0061a470; /* 0x61a470 */


void FUN_00161044(int param_1,unsigned int param_2,int param_3)

{
  if (param_1 == 0x400 || (param_3 = param_1 - 0x401) == 0) {
    (*(int *)((unsigned char *)&DAT_0061a470 + 0x124)) = param_1 - 0x400;
  }
  else if (param_3 == 0xf) {
    (*(int *)((unsigned char *)&DAT_0061a470 + 0x124)) = 2;
  }
  return;
}

} /* extern "C" */
