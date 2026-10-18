/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f302c` (_code @ 0x2f302c, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

unsigned int FUN_002f302c(int param_1)

{
  int *piVar1;
  int temp_v0;
  romwright_code *pcVar3;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = -1;
  temp_v1 = *(int *)(param_1 + 0x8c);
  if (temp_v1 != 0) {
    do {
      pcVar3 = *(romwright_code **)((unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x90) + 4) * 0x44 + 0x464150);
      temp_v0 = -1;
      if ((pcVar3 != (romwright_code *)0x0) &&
         (temp_v0 = (*pcVar3)(*(unsigned int *)(*(int *)(temp_v1 + 0x90) + 8)), temp_v0 == 0)) {
        return 0;
      }
      piVar1 = (int *)(temp_v1 + 0x80);
      temp_v1 = *(int *)(temp_v1 + 0xac);
      temp_v0 = temp_v0 + *piVar1;
      if (temp_v2 < temp_v0) {
        temp_v2 = temp_v0;
      }
    } while (temp_v1 != 0);
    if (temp_v2 == 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x84) < temp_v2 + 2) {
    return 0;
  }
  return 1;
}
