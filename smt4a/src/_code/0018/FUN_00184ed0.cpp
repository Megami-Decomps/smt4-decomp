/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00184ed0` (_code @ 0x184ed0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f25c; /* 0x57f25c */


int FUN_00184ed0(void)

{
  int temp_v0;
  int *piVar1;
  
  piVar1 = (*(int **)((unsigned char *)&DAT_0057f25c + 0x4));
  if (piVar1 == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = piVar1[0xcb];
    if (temp_v0 != piVar1[0xca]) {
      temp_v0 = piVar1[0xbd];
    }
  }
  return temp_v0;
}

} /* extern "C" */
