/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00237f34` (_code @ 0x237f34, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00238990(unsigned int, unsigned short, unsigned short);


unsigned int FUN_00237f34(unsigned int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  piVar3 = (int *)(param_2 * 8 + 0x4171f8);
  temp_v0 = *piVar3;
  temp_v1 = (*(int *)(param_2 * 8 + 0x4171fc) + temp_v0) - 1;
  if (temp_v0 <= temp_v1) {
    do {
      temp_v0 = FUN_00238990(param_1,*(unsigned short *)(temp_v1 * 4 + 0x4149c0),
                           *(unsigned short *)(temp_v1 * 4 + 0x4149c2));
      if (temp_v0 == 0) {
        return 0;
      }
      temp_v1 = temp_v1 - 1;
    } while (*piVar3 <= temp_v1);
  }
  return 1;
}
