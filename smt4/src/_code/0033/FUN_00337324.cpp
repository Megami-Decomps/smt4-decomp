#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00292f28(unsigned int);


unsigned int FUN_00337324(int param_1)

{
  unsigned int temp_v0;
  
  if ((*(unsigned int *)(param_1 + 0x44a0) & 0x40) != 0) {
    temp_v0 = 0;
  }
  else {
    if ((*(unsigned int *)(param_1 + 0x44a8) & 0x20000) == 0) {
      temp_v0 = FUN_00292f28(0x10);
      return temp_v0;
    }
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
