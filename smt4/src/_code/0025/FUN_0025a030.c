/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025a030` (_code @ 0x25a030, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0025a030(int param_1)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = *(unsigned int **)(*(int *)(param_1 + 8) + 8);
  if (((0 < (int)puVar1[0xd]) && (temp_v0 = puVar1[0x13], temp_v0 != 0)) &&
     (((*puVar1 & 1) != 0 || (*(float *)(temp_v0 + 0x38) < *(float *)(temp_v0 + 0x48))))) {
    return 0;
  }
  return 1;
}
