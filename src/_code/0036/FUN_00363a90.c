/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00363a90` (_code @ 0x363a90, 0x144 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_00363a90(int *param_1)

{
  int temp_v0;
  int temp_v1;
  
  if ((char)param_1[0x16] != '\0') {
    if (param_1[0x17] != 0) {
      temp_v0 = 0;
      temp_v1 = *(int *)(param_1[0x15] + 0x18);
      if (0 < temp_v1) {
        do {
          *(unsigned int *)(*(int *)(param_1[0x1a] + temp_v0 * 4) + 4) = 0;
          if (*(int *)(param_1[9] + temp_v0 * 4) != -1) {
            (**(romwright_code **)(*param_1 + 0x18))(param_1);
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < temp_v1);
      }
    }
    else if (((*(char *)((int)param_1 + 0x5a) != '\0') && (temp_v0 = param_1[0x18], temp_v0 != 0)) &&
            ((*(char *)(temp_v0 + 0x18) != '\0' ||
             (((float)param_1[0xe] != *(float *)(temp_v0 + 0x10) ||
              ((float)param_1[0x10] != *(float *)(temp_v0 + 0x14))))))) {
      temp_v0 = 0;
      temp_v1 = *(int *)(param_1[0x15] + 0x18);
      if (0 < temp_v1) {
        do {
          *(unsigned int *)(*(int *)(param_1[0x1a] + temp_v0 * 4) + 4) = 0;
          if (*(int *)(param_1[9] + temp_v0 * 4) != -1) {
            (**(romwright_code **)(*param_1 + 0x18))(param_1);
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < temp_v1);
      }
      *(int *)(param_1[0x18] + 0x10) = param_1[0xe];
      *(int *)(param_1[0x18] + 0x14) = param_1[0x10];
      *(unsigned char *)(param_1[0x18] + 0x18) = 0;
    }
  }
  *(unsigned char *)(param_1 + 0x16) = 0;
  return;
}
