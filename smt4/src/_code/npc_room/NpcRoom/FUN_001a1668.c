/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a1668` (_code @ 0x1a1668, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044d198; /* 0x44d198 */


unsigned char FUN_001a1668(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0044d198 != 0) {
    temp_v0 = *(int *)(DAT_0044d198 + 0xf0);
  }
  return DAT_0044d198 == 0 || temp_v0 == 7;
}
