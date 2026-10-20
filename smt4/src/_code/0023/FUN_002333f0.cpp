#include "romwright_types.h"

extern "C" {


int FUN_002333f0(int param_1)

{
  int temp_v0;
  
  if (*(char *)(param_1 + 0x12) != '\0') {
    temp_v0 = (int)*(short *)(param_1 + 0x14);
  }
  else {
    temp_v0 = -1;
  }
  return temp_v0;
}

} /* extern "C" */
