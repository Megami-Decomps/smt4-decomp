/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036f420` (_code @ 0x36f420, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_0044e334; /* 0x44e334 */


void FUN_0036f420(int *param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = *param_1;
  if ((*(unsigned int *)(temp_v2 + 8) & 1) == 0) {
    temp_v1 = *(int *)(temp_v2 + 0xc);
    if ((*(unsigned int *)(temp_v2 + 8) & 2) != 0) {
      if (temp_v1 == 0) {
        return;
      }
      temp_v0 = *(int *)(temp_v2 + 0x20);
    }
    else {
      if (temp_v1 == 0) {
        return;
      }
      temp_v0 = *(int *)(temp_v2 + 0x20);
    }
    if (temp_v0 != 0) {
      (*DAT_0044e334)(temp_v0,0x102,temp_v1,*(unsigned int *)(temp_v2 + 0x1c));
      *(unsigned int *)(temp_v2 + 0x1c) = 0;
    }
    *(unsigned int *)(temp_v2 + 0xc) = 0;
  }
  return;
}
