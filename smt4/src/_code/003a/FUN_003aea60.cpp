#include "romwright_types.h"

extern "C" {

extern int FUN_00225220(int);


int FUN_003aea60(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 + 0x20);
  temp_v0 = FUN_00225220(temp_v1 + 8);
  if (temp_v0 != 0) {
    *(unsigned int *)(temp_v1 + 0x7e38) = 0;
  }
  return temp_v0;
}

} /* extern "C" */
