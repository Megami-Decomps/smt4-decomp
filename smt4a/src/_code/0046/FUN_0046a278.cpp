/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046a278` (_code @ 0x46a278, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0046a278(int param_1,int param_2)

{
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  
  if (param_2 != -1) {
    temp_v0 = param_1 + param_2 * 4;
    piVar2 = (int *)(temp_v0 + 0xac0);
    *(unsigned int *)(param_1 + 0xce0) = *(unsigned int *)(param_1 + *piVar2 * 8 + 0xa74);
    if (*(int *)(param_1 + *piVar2 * 8 + 0xa74) == 8) {
      *(unsigned int *)(param_1 + 0xce0) = 5;
    }
    if (*(int *)(param_1 + *(int *)(temp_v0 + 0xac0) * 8 + 0xa74) == 9) {
      *(unsigned int *)(param_1 + 0xce0) = 4;
    }
    temp_v0 = 0;
    if (temp_v0 < *(int *)(param_1 + 0xad0)) {
      do {
        temp_v1 = *(int *)(*(int *)(param_1 + *(int *)(param_1 + *(int *)(param_1 + temp_v0 * 4 + 0xac0)
                                                               * 8 + 0xa74) * 4 + 0xa30) + 4);
        temp_v2 = *(unsigned int *)(temp_v1 + 4);
        if (*(int *)(param_1 + 0xad4) == temp_v0) {
          if ((temp_v2 & 1) != 0) {
            temp_v2 = temp_v2 & 0xfffffffe;
            *(unsigned int *)(temp_v1 + 4) = temp_v2;
          }
        }
        else if ((temp_v2 & 1) == 0) {
          temp_v2 = temp_v2 | 1;
          *(unsigned int *)(temp_v1 + 4) = temp_v2;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(int *)(param_1 + 0xad0));
    }
  }
  return;
}

} /* extern "C" */
