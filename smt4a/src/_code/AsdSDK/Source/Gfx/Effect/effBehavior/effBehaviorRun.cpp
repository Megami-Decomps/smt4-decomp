/* NON_MATCHING: romwright 0.5.0 decompilation of `effBehaviorRun` (_code @ 0x271b64, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int effGetFrameStep(void);


void effBehaviorRun(unsigned short *param_1)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  if (*(int *)(param_1 + 8) == 0) {
    temp_v1 = *(unsigned int *)(param_1 + 4);
    if (temp_v1 != 0) {
      puVar1 = (unsigned int *)(*(int *)(param_1 + 0xc) - 0x18);
      if ((temp_v1 & 1) != 0) {
        puVar1 = (unsigned int *)(*(int *)(param_1 + 0xc) + 0x10);
        *puVar1 = 0xffffffff;
      }
      for (temp_v1 = temp_v1 >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
        puVar1[10] = 0xffffffff;
        puVar1 = puVar1 + 0x14;
        *puVar1 = 0xffffffff;
      }
    }
  }
  (**(romwright_code **)((unsigned int)*param_1 * 0x14 + 0x5c1d60))(param_1);
  temp_v0 = effGetFrameStep();
  *(int *)(param_1 + 8) = temp_v0 + *(int *)(param_1 + 8);
  return;
}

} /* extern "C" */
