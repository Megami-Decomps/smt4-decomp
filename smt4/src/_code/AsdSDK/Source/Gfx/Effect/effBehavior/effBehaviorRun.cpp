/* NON_MATCHING: romwright 0.5.0 decompilation of `effBehaviorRun` (_code @ 0x26933c, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void effBehaviorRun(unsigned short *param_1)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  if (*(int *)(param_1 + 8) == 0) {
    temp_v0 = *(unsigned int *)(param_1 + 4);
    if (temp_v0 != 0) {
      puVar1 = (unsigned int *)(*(int *)(param_1 + 0xc) - 0x18);
      if ((temp_v0 & 1) != 0) {
        puVar1 = (unsigned int *)(*(int *)(param_1 + 0xc) + 0x10);
        *puVar1 = 0xffffffff;
      }
      for (temp_v0 = temp_v0 >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
        puVar1[10] = 0xffffffff;
        puVar1 = puVar1 + 0x14;
        *puVar1 = 0xffffffff;
      }
    }
  }
  (**(romwright_code **)((unsigned int)*param_1 * 0x14 + 0x473590))(param_1);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

} /* extern "C" */
