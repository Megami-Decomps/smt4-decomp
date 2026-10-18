/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a26fc` (_code @ 0x3a26fc, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005806d4; /* 0x5806d4 */


void FUN_003a26fc(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  while ((temp_v1 = DAT_005806d4 + temp_v0 * 0x188, *(char *)(temp_v1 + 0x34) == '\0' ||
         (temp_v1 = *(int *)(temp_v1 + 0xb8), temp_v1 != 0x1f && temp_v1 != 0x1e))) {
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x28) {
      return;
    }
  }
  return;
}
