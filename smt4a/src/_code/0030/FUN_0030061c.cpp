/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030061c` (_code @ 0x30061c, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

int FUN_0030061c(int param_1)

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
      pcVar3 = *(romwright_code **)((unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x90) + 4) * 0x44 + 0x5b32b4);
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
  }
  return temp_v2;
}

} /* extern "C" */
