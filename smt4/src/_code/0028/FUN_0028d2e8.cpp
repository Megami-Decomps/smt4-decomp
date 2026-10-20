#include "romwright_types.h"

extern "C" {


unsigned short FUN_0028d2e8(int param_1,int param_2)

{
  unsigned short temp_v0;
  
  if ((param_2 >= 0) && (*(short *)(param_1 + 0xb4) - 1 >= param_2)) {
    temp_v0 = *(unsigned short *)(param_1 + param_2 * 2 + 0x8c);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
