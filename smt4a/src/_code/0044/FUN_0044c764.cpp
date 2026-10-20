/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0044c764` (_code @ 0x44c764, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_0044c764(int *param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = param_1[0x19];
  temp_v3 = temp_v0 != param_1[0x1a];
  if (temp_v3) {
    temp_v0 = (unsigned int)*(unsigned char *)(param_1 + 0x16);
  }
  if (temp_v3 && temp_v0 != 0) {
    if (param_1[0x15] != 0) {
      for (temp_v2 = 0; temp_v2 < *(int *)(*(int *)(param_1[2] + 8) + 0x10); temp_v2 = temp_v2 + 1) {
        temp_v1 = *(int *)(param_1[5] + temp_v2 * 4);
        if (temp_v1 != -1) {
          (**(romwright_code **)(*param_1 + 0x18))(param_1,param_1[0x19] + temp_v1 * 0x40,temp_v2);
        }
      }
    }
    *(unsigned char *)(param_1 + 0x16) = 0;
  }
  return;
}

} /* extern "C" */
