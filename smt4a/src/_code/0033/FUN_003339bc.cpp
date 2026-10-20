/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003339bc` (_code @ 0x3339bc, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f27c; /* 0x57f27c */


void FUN_003339bc(void)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f27c + 0x4));
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f27c + 0x4)) + 0x74c) = 0;
  *(unsigned int *)(temp_v0 + 0x744) = 2;
  *(unsigned char *)(temp_v0 + 0x74d) = *(char *)(temp_v0 + 0x74d) == '\0';
  return;
}

} /* extern "C" */
