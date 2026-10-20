#include "romwright_types.h"

extern "C" {

extern int FUN_002b63ac(void);
extern int FUN_002c09d0(unsigned int);


void FUN_00333e30(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002c09d0(0x1fd);
  if (((temp_v0 == 0) && (temp_v0 = FUN_002c09d0(0x1fe), temp_v0 == 0)) &&
     (temp_v0 = FUN_002c09d0(0x1ff), temp_v0 == 0)) {
    temp_v0 = FUN_002b63ac();
    param_1 = *(short *)(temp_v0 + 0x74) + param_1;
    if (param_1 < -999) {
      param_1 = -999;
    }
    else if (param_1 >= 1000) {
      param_1 = 999;
    }
    *(short *)(temp_v0 + 0x74) = (short)param_1;
  }
  return;
}

} /* extern "C" */
