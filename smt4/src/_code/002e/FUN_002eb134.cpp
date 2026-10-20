/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb134` (_code @ 0x2eb134, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0044cd88; /* 0x44cd88 */


unsigned int FUN_002eb134(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  while ((temp_v1 = DAT_0044cd88 + temp_v0 * 0x4c, *(char *)(temp_v1 + 0x58) == '\0' ||
         (*(int *)(temp_v1 + 0x5c) != 2))) {
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x20) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
