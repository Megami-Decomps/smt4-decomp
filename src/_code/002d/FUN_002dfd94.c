/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dfd94` (_code @ 0x2dfd94, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a78; /* 0x447a78 */


void FUN_002dfd94(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  while ((temp_v1 = DAT_00447a78 + temp_v0 * 0x194, *(char *)(temp_v1 + 0x1d0) == '\0' ||
         (*(int *)(temp_v1 + 0x1e8) != param_1))) {
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x80) {
      return;
    }
  }
  *(unsigned char *)(DAT_00447a78 + temp_v0 * 0x194 + 0x211) = 1;
  return;
}
