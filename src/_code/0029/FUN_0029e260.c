/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e260` (_code @ 0x29e260, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */


void FUN_0029e260(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0044e144;
  *(char *)(DAT_0044e144 + 0x1e60) = (char)param_1;
  if (((param_1 == 0) && (*(char *)(temp_v0 + 0x1e67) != '\t')) &&
     (temp_v1 = *(int *)(temp_v0 + 0x12dc), (temp_v1 == 4 || temp_v1 == 5) || temp_v1 == 6)) {
    *(unsigned int *)(temp_v0 + 0x12e0) = 0;
  }
  return;
}
