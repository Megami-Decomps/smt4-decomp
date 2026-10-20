#include "romwright_types.h"

extern "C" {

extern int FUN_001801a4(void);


void FUN_003dfdb4(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001801a4();
  param_1 = *(short *)(temp_v0 + 0x60) + param_1;
  if (param_1 < -999) {
    param_1 = -999;
  }
  else if (param_1 >= 1000) {
    param_1 = 999;
  }
  *(short *)(temp_v0 + 0x60) = (short)param_1;
  return;
}

} /* extern "C" */
