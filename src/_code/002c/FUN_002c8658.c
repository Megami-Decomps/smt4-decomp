/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c8658` (_code @ 0x2c8658, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447060; /* 0x447060 */


void FUN_002c8658(int param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_00447060;
  if (*(int *)(DAT_00447060 + 0xcc) != param_1) {
    *(int *)(DAT_00447060 + 0xcc) = param_1;
    *(unsigned int *)(temp_v0 + 0xd0) = 0;
    *(unsigned int *)(temp_v0 + 0xd4) = 0;
  }
  return;
}
