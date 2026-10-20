/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dfe08` (_code @ 0x2dfe08, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_mapIf; /* 0x447a78 */


void FUN_002dfe08(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  while ((temp_v1 = g_mapIf + temp_v0 * 0x194, *(char *)(temp_v1 + 0x1d0) == '\0' ||
         (*(int *)(temp_v1 + 0x1e8) != param_1))) {
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x80) {
      return;
    }
  }
  *(unsigned char *)(g_mapIf + temp_v0 * 0x194 + 0x211) = 1;
  return;
}

} /* extern "C" */
