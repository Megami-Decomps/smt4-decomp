#include "romwright_types.h"

extern "C" {

extern int FUN_0042337c(int);


unsigned char FUN_0042442c(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0042337c(param_1 + 0x158);
  if (temp_v0 == 0) {
    *(unsigned int *)(param_1 + 0xc) = 7;
  }
  return temp_v0 != 0;
}

} /* extern "C" */
