/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034c86c` (_code @ 0x34c86c, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int nw_anim_PlayPolicy_Loop(...); /* 0x151500 */


/* WARNING: Removing unreachable block (ram,0x0023ab98) */
/* WARNING: Removing unreachable block (ram,0x0023abec) */

void FUN_0034c86c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  *(unsigned int *)(param_1 + 0x2c) = 4;
  if (*(int *)(param_1 + 8) != 0) {
    *(unsigned char *)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x24) + 0x1f6) = 0;
    *(unsigned char *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x24) + 4) + 0x1f6) = 1;
    *(unsigned char *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x24) + 8) + 0x1f6) = 0;
  }
  temp_v0 = *(int *)(param_1 + 0x10);
  temp_v2 = 0x3f800000;
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(temp_v0 + 0x44);
    (**(romwright_code **)(temp_v0 + 0x4c))(*(unsigned int *)(temp_v0 + 0x50));
    *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(temp_v0 + 0x38);
    *(unsigned int *)(temp_v0 + 0x38) = temp_v1;
    *(unsigned char *)(temp_v0 + 0x58) = 1;
    *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x40) = temp_v2;
    temp_v0 = *(int *)(param_1 + 0x10);
    *(romwright_code **)(temp_v0 + 0x4c) = nw_anim_PlayPolicy_Loop;
    *(unsigned char *)(temp_v0 + 0x58) = 1;
  }
  temp_v0 = *(int *)(param_1 + 0x1c);
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(temp_v0 + 0x44);
    (**(romwright_code **)(temp_v0 + 0x4c))(*(unsigned int *)(temp_v0 + 0x50));
    *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(temp_v0 + 0x38);
    *(unsigned int *)(temp_v0 + 0x38) = temp_v1;
    *(unsigned char *)(temp_v0 + 0x58) = 1;
    *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x40) = temp_v2;
    temp_v0 = *(int *)(param_1 + 0x1c);
    *(romwright_code **)(temp_v0 + 0x4c) = nw_anim_PlayPolicy_Loop;
    *(unsigned char *)(temp_v0 + 0x58) = 1;
  }
  return;
}

} /* extern "C" */
