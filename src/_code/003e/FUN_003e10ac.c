/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e10ac` (_code @ 0x3e10ac, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

unsigned int FUN_003e10ac(int param_1,unsigned int param_2)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 0x14);
  temp_v1 = 0;
  if (temp_v1 < (*(int *)(param_1 + 0x18) - temp_v0) >> 2) {
    do {
      piVar1 = *(int **)(temp_v0 + temp_v1 * 4);
      if ((piVar1 != (int *)0x0) &&
         (temp_v0 = (**(romwright_code **)(*piVar1 + 0x1c))(piVar1,param_2), temp_v0 != 0)) {
        return 1;
      }
      temp_v0 = *(int *)(param_1 + 0x14);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < (*(int *)(param_1 + 0x18) - temp_v0) >> 2);
  }
  return 0;
}
