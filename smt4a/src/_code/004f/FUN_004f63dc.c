/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f63dc` (_code @ 0x4f63dc, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0041aca8. */


void FUN_004f63dc(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 0x28;
    if (*(int *)(temp_v2 + 0x1ac) == param_2) {
      if (*(int *)(temp_v2 + 0x1b0) != 0) {
        return;
      }
      temp_v0 = *(unsigned int *)(param_1 + 0x1f50);
      FUN_0041aca8(temp_v0,*(unsigned int *)(temp_v2 + 400));
      *(unsigned int *)(temp_v2 + 0x1b0) = temp_v0;
      return;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x32);
  temp_v1 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 0x10;
    if (*(int *)(temp_v2 + 0x964) == param_2) {
      if (*(int *)(temp_v2 + 0x968) != 0) {
        return;
      }
      temp_v0 = *(unsigned int *)(param_1 + 0x1f50);
      FUN_0041aca8(temp_v0,*(unsigned int *)(temp_v2 + 0x960));
      *(unsigned int *)(temp_v2 + 0x968) = temp_v0;
      return;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x6d);
  return;
}
