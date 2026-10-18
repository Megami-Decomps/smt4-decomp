/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00263558` (_code @ 0x263558, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bbb5c(void);


unsigned char FUN_00263558(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002bbb5c();
  return ((1 << (param_1 & 7)) & 0xffU & (unsigned int)*(unsigned char *)(temp_v0 + 8 + (param_1 >> 3))) != 0;
}
