/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036edd0` (_code @ 0x36edd0, 0xcc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_0036edd0(int *param_1,int *param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_1 + 8))(param_1,0x20,4);
  if (puVar1 != (unsigned int *)0x0) {
    temp_v0 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *puVar1 = 0x20000004;
    temp_v1 = *param_2;
    if (temp_v1 != 0x20000002) {
      if (temp_v1 == 0x20000004) {
        temp_v1 = param_2[7];
        if (temp_v1 != 0) {
          temp_v0 = temp_v1 + (int)(param_2 + 7);
        }
        if (temp_v0 != 0) {
          puVar1[7] = temp_v0 - (int)(puVar1 + 7);
        }
        return;
      }
      if ((temp_v1 != 0x20000009) && (temp_v1 != 0x20000011)) {
        return;
      }
      if (param_2 == (int *)0x0) {
        return;
      }
    }
    else if (param_2 == (int *)0x0) {
      return;
    }
    puVar1[7] = (int)param_2 - (int)(puVar1 + 7);
  }
  return;
}
