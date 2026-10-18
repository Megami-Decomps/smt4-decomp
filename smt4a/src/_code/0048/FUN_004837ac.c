/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004837ac` (_code @ 0x4837ac, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_004837ac(unsigned int *param_1)

{
  int *piVar1;
  int temp_v0;
  int unaff_r7;
  unsigned char temp_v1;
  
  if ((*param_1 & 1) == 0) {
    temp_v0 = 0;
    do {
      piVar1 = (int *)param_1[temp_v0 + 6];
      if (piVar1 != (int *)0x0) {
        temp_v1 = (*(unsigned char *)(piVar1 + 3) & 1) == 0;
        if (temp_v1) {
          unaff_r7 = piVar1[2];
        }
        if (!temp_v1) {
          (**(romwright_code **)(*piVar1 + 0x10))();
        }
        else {
          (**(romwright_code **)(*piVar1 + 4))();
          param_1[temp_v0 + 6] = 0;
          if (unaff_r7 == 0) {
            param_1[5] = param_1[5] - 1;
          }
          param_1[4] = param_1[4] - 1;
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x20);
  }
  return;
}
