/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8a48` (_code @ 0x2d8a48, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0058103c; /* 0x58103c */


void FUN_002d8a48(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0058103c;
  temp_v1 = 0;
  do {
    temp_v2 = temp_v0 + temp_v1 * 0x194;
    if ((*(char *)(temp_v2 + 0x1dc) != '\0') &&
       (*(int *)(temp_v2 + 0x1f0) == 0x25 || *(int *)(temp_v2 + 0x1f0) == 0x28)) {
      *(unsigned int *)(temp_v2 + 0x1e0) = 6;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x80);
  return;
}

} /* extern "C" */
