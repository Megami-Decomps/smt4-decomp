/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_GroupFileReader_ReadGroupItemInfoEx` (_code @ 0x141b08, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int
nw_snd_internal_GroupFileReader_ReadGroupItemInfoEx(int param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  
  puVar1 = *(unsigned int **)(param_1 + 8);
  temp_v0 = 0;
  if (puVar1 != (unsigned int *)0x0) {
    if ((*puVar1 <= param_3) ||
       (puVar2 = (unsigned int *)((int)puVar1 + puVar1[param_3 * 2 + 2]), puVar2 == (unsigned int *)0x0)
       ) {
      return 0;
    }
    temp_v0 = puVar2[1];
    *param_2 = *puVar2;
    param_2[1] = temp_v0;
    temp_v0 = 1;
  }
  return temp_v0;
}
