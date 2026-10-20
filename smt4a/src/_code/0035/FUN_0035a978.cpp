#include "romwright_types.h"

extern "C" {

extern int wstrlen(short *);


unsigned int FUN_0035a978(short *param_1)

{
  short temp_v0;
  int temp_v1;
  
  if (param_1 != (short *)0x0) {
    temp_v1 = wstrlen(param_1 + 7);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = *param_1;
    }
    if (temp_v1 != 0 && temp_v0 != 0) {
      temp_v0 = 0;
      if (param_1[1] != 0) {
        temp_v0 = param_1[2];
      }
      if (param_1[1] != 0 && temp_v0 != 0) {
        temp_v0 = 0;
        if (param_1[3] != 0) {
          temp_v0 = param_1[4];
        }
        if (param_1[3] != 0 && temp_v0 != 0) {
          temp_v0 = 0;
          if (param_1[5] != 0) {
            temp_v0 = param_1[6];
          }
          if (param_1[5] != 0 && temp_v0 != 0) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

} /* extern "C" */
