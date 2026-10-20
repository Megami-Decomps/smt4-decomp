/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023b45c` (_code @ 0x23b45c, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fd4; /* 0x588fd4 */


void FUN_0023b45c(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_00588fd4;
  *(char *)(DAT_00588fd4 + 0x2011) = (char)param_1;
  if (((param_1 == 0) && (*(char *)(temp_v0 + 0x2018) != '\n')) &&
     (temp_v1 = *(int *)(temp_v0 + 0x1368), (temp_v1 == 5 || temp_v1 == 6) || temp_v1 == 7)) {
    *(unsigned int *)(temp_v0 + 0x136c) = 0;
  }
  return;
}

} /* extern "C" */
