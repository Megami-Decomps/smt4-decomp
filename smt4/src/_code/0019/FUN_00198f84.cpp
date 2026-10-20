#include "romwright_types.h"

extern "C" {

extern int FUN_002c09d0(void);


unsigned int FUN_00198f84(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if ((((((*(short *)(param_1 + 0x5a) != 0) && (temp_v0 = FUN_002c09d0(), temp_v0 != 0)) ||
        ((*(short *)(param_1 + 0x5c) != 0 && (temp_v0 = FUN_002c09d0(), temp_v0 != 0)))) ||
       ((*(short *)(param_1 + 0x5e) != 0 && (temp_v0 = FUN_002c09d0(), temp_v0 != 0)))) ||
      ((*(short *)(param_1 + 0x60) != 0 && (temp_v0 = FUN_002c09d0(), temp_v0 != 0)))) ||
     ((*(short *)(param_1 + 0x62) != 0 && (temp_v0 = FUN_002c09d0(), temp_v0 != 0)))) {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
