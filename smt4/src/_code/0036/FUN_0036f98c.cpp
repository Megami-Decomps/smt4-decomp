/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036f98c` (_code @ 0x36f98c, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_0044e334; /* 0x44e334 */


void FUN_0036f98c(unsigned int *param_1)

{
  int temp_v0;
  
  if ((param_1 == (unsigned int *)0x0) || ((~*param_1 & 0x20000021) != 0)) {
    param_1 = (unsigned int *)0x0;
  }
  if (param_1[0xb] != 0) {
    if (param_1[0xe] == 0) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = (int)param_1 + param_1[0xe] + 0x38;
    }
    if (*(int *)(temp_v0 + 0x1c) != 0) {
      (*DAT_0044e334)(*(int *)(temp_v0 + 0x1c),0x101,param_1[0xb],*(unsigned int *)(temp_v0 + 0x18));
      *(unsigned int *)(temp_v0 + 0x18) = 0;
    }
    param_1[0xb] = 0;
  }
  return;
}

} /* extern "C" */
