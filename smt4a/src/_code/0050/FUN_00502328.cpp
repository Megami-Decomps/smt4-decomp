#include "romwright_types.h"

extern "C" {


unsigned int FUN_00502328(int param_1,int param_2,int param_3,unsigned int param_4)

{
  unsigned int temp_v0;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    temp_v0 = 0xd820ebf8;
  }
  else if (param_2 == 0 || param_3 == 0) {
    temp_v0 = 0xe0e0ebf6;
  }
  else if (param_4 > 0x10) {
    temp_v0 = 0xe0e0ebec;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
