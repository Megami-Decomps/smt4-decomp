/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002757c8` (_code @ 0x2757c8, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00447600; /* 0x447600 */


unsigned int FUN_002757c8(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  while ((temp_v1 = DAT_00447600 + temp_v0 * 0x180, *(char *)(temp_v1 + 0x34) == '\0' ||
         ((temp_v1 = *(int *)(temp_v1 + 0x1a8), temp_v1 != 0 && (temp_v1 < 0xb))))) {
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x20) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
