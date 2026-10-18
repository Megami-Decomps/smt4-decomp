/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4d14` (_code @ 0x2a4d14, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044ea5c; /* 0x44ea5c */


void FUN_002a4d14(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0044ea5c;
  temp_v1 = DAT_0044ea5c + 0x590;
  *(int *)(DAT_0044ea5c + 0x80) = DAT_0044ea5c + 0x88;
  *(int *)(temp_v0 + 0x84) = temp_v1;
  return;
}
