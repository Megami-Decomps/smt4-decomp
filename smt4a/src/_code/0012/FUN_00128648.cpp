/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128648` (_code @ 0x128648, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned int FUN_002fa01c(int);


unsigned int FUN_00128648(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  temp_v1 = *(int *)(param_1 + 0x1c);
  if (temp_v1 == 0) {
    return 0xfffffffe;
  }
  if ((int)param_2 < 0) {
    temp_v2 = 0;
    param_2 = -param_2;
    if (param_2 != 0) {
      if (param_2 - 8 >= 8) {
        return 0xfffffffe;
      }
    }
  }
  else {
    temp_v2 = ((int)param_2 >> 4) + 1;
    if ((int)param_2 < 0x30) {
      param_2 = param_2 & 0xf;
      if (param_2 != 0) {
        if (param_2 - 8 >= 8) {
          return 0xfffffffe;
        }
      }
    }
    else if (param_2 - 8 >= 8) {
      return 0xfffffffe;
    }
  }
  if ((*(int *)(temp_v1 + 0x34) != 0) && (*(unsigned int *)(temp_v1 + 0x24) != param_2)) {
    (**(romwright_code **)(param_1 + 0x24))(*(unsigned int *)(param_1 + 0x28));
    *(unsigned int *)(temp_v1 + 0x34) = 0;
  }
  *(int *)(temp_v1 + 8) = temp_v2;
  *(unsigned int *)(temp_v1 + 0x24) = param_2;
  temp_v0 = FUN_002fa01c(param_1);
  return temp_v0;
}

} /* extern "C" */
