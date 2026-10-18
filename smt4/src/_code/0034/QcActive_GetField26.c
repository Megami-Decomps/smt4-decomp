/* NON_MATCHING: romwright 0.5.0 decompilation of `QcActive_GetField26` (_code @ 0x343a54, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bbb5c(void);


unsigned short QcActive_GetField26(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002bbb5c();
  return *(unsigned short *)(temp_v0 + 0x1a);
}
