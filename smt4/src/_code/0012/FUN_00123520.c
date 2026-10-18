/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123520` (_code @ 0x123520, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004c632c; /* 0x4c632c */


void FUN_00123520(int param_1,int param_2)

{
  if (DAT_004c632c != 0) {
    if (param_1 == 0x200) {
      *(int *)(DAT_004c632c + 0x2c) = param_2;
    }
    else if (param_1 == 0x20f) {
      *(unsigned char *)(DAT_004c632c + 0x3d) = param_2 != 0;
    }
  }
  return;
}
