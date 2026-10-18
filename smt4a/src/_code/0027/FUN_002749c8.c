/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002749c8` (_code @ 0x2749c8, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0058103c; /* 0x58103c */


void FUN_002749c8(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  while( 1 ) {
    temp_v0 = DAT_0058103c + temp_v1 * 0x194;
    if (((*(char *)(temp_v0 + 0x1dc) != '\0') &&
        (*(int *)(temp_v0 + 0x1f0) == 0x25 || *(int *)(temp_v0 + 0x1f0) == 0x28)) &&
       (*(int *)(temp_v0 + 500) == param_1)) break;
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x80) {
      return;
    }
  }
  *(char *)(temp_v0 + 0x1dc) = '\0';
  *(unsigned int *)(temp_v0 + 0x1e0) = 0x14;
  return;
}
