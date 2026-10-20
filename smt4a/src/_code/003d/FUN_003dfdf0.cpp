#include "romwright_types.h"

extern "C" {

extern int FUN_0014af84(void);


void FUN_003dfdf0(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0014af84();
  param_1 = *(short *)(temp_v0 + 0x2830c) + param_1;
  if (param_1 >= 1000) {
    param_1 = 999;
  }
  else if (param_1 < 0) {
    param_1 = 0;
  }
  *(short *)(temp_v0 + 0x2830c) = (short)param_1;
  return;
}

} /* extern "C" */
