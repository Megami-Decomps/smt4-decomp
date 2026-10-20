#include "romwright_types.h"

extern "C" {

extern int FUN_002a8740(void);
extern int FUN_002a8764(void);
extern int FUN_002b63ac(void);


unsigned int FUN_00288ddc(int param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if ((int)param_2 < 0) {
    temp_v0 = FUN_002b63ac();
    if (*(short *)(temp_v0 + 0x1c) < param_1) {
      return 1;
    }
  }
  else {
    temp_v0 = FUN_002a8764();
    temp_v2 = 0;
    do {
      if ((((*(signed char *)(temp_v0 + temp_v2 + 0x90f0) >= 0) && (temp_v1 = FUN_002a8740(), temp_v1 != 0)) &&
          (*(unsigned short *)(temp_v1 + 0x46) == param_2)) && (*(short *)(temp_v1 + 0xe) < param_1)) {
        return 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x18);
  }
  return 0;
}

} /* extern "C" */
