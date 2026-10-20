/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_GroupFileReader_ReadGroupItemLocationInfo` (_code @ 0x1948a0, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int
nw_snd_internal_GroupFileReader_ReadGroupItemLocationInfo
          (unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_r12 */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int in_r12;
  
  puVar3 = (unsigned int *)*param_1;
  if (puVar3 != (unsigned int *)0x0) {
    in_r12 = *puVar3;
  }
  if ((puVar3 != (unsigned int *)0x0 && param_3 < in_r12) &&
     (puVar2 = (unsigned int *)(puVar3[param_3 * 2 + 2] + (int)puVar3), puVar2 != (unsigned int *)0x0))
  {
    *param_2 = *puVar2;
    if (puVar2[2] == -1) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = param_1[1] + puVar2[2];
    }
    param_2[1] = temp_v0;
    return 1;
  }
  return 0;
}

} /* extern "C" */
