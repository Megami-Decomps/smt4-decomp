/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004386c4` (_code @ 0x4386c4, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00437cac(unsigned int, unsigned short, unsigned short);


unsigned int FUN_004386c4(unsigned int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  piVar3 = (int *)(param_2 * 8 + 0x54e714);
  temp_v0 = *piVar3;
  temp_v1 = (*(int *)(param_2 * 8 + 0x54e718) + temp_v0) - 1;
  if (temp_v0 <= temp_v1) {
    do {
      temp_v0 = FUN_00437cac(param_1,*(unsigned short *)(temp_v1 * 4 + 0x54bedc),
                           *(unsigned short *)(temp_v1 * 4 + 0x54bede));
      if (temp_v0 == 0) {
        return 0;
      }
      temp_v1 = temp_v1 - 1;
    } while (*piVar3 <= temp_v1);
  }
  return 1;
}
