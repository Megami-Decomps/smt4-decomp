#include "romwright_types.h"

extern "C" {


unsigned int FUN_00388024(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 9;
  if ((param_1 & 8) != 0) {
    temp_v0 = 2;
  }
  else if ((param_1 & 1) != 0) {
    temp_v0 = 3;
  }
  else if ((param_1 & 4) != 0) {
    temp_v0 = 4;
  }
  else if ((param_1 & 2) != 0) {
    temp_v0 = 5;
  }
  else if ((param_1 & 0x10) != 0) {
    temp_v0 = 6;
  }
  return temp_v0;
}

} /* extern "C" */
