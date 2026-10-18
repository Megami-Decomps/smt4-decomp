/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003539b4` (_code @ 0x3539b4, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0058103c; /* 0x58103c */


void FUN_003539b4(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  while ((temp_v1 = DAT_0058103c + temp_v0 * 0x194, *(char *)(temp_v1 + 0x1dc) == '\0' ||
         (*(int *)(temp_v1 + 500) != param_1))) {
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x80) {
      return;
    }
  }
  *(unsigned char *)(DAT_0058103c + temp_v0 * 0x194 + 0x21d) = 1;
  return;
}
