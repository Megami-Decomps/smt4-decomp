/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3bc0` (_code @ 0x2f3bc0, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00447a78; /* 0x447a78 */


void FUN_002f3bc0(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_00447a78;
  temp_v2 = 0;
  do {
    temp_v1 = temp_v0 + temp_v2 * 0x194;
    if ((*(char *)(temp_v1 + 0x1d0) != '\0') &&
       (((temp_v3 = *(int *)(temp_v1 + 0x1e4), temp_v3 == 0x1d || temp_v3 == 0x26 ||
         ((temp_v3 == 0x1e || temp_v3 == 0x1f) || temp_v3 == 0x25)) && (*(int *)(temp_v1 + 0x1d4) == 8)))) {
      *(unsigned int *)(temp_v1 + 0x1d4) = 6;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x80);
  return;
}

} /* extern "C" */
