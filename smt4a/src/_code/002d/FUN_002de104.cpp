/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002de104` (_code @ 0x2de104, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00587f0c; /* 0x587f0c */


void FUN_002de104(void)

{
  int temp_v0;
  
  temp_v0 = DAT_00587f0c;
  *(unsigned char *)(DAT_00587f0c + 0xc) = 1;
  *(unsigned char *)(temp_v0 + 0x6c) = 0;
  return;
}

} /* extern "C" */
