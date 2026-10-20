#include "romwright_types.h"

extern "C" {


unsigned short FUN_003ef9b8(int param_1,int param_2)

{
  unsigned short temp_v0;
  
  if ((param_2 >= 0) && (*(short *)(param_1 + 0xe0) - 1 >= param_2)) {
    temp_v0 = *(unsigned short *)(param_1 + param_2 * 2 + 0xb8);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
