/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034227c` (_code @ 0x34227c, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0023d448(void);


unsigned char FUN_0034227c(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0023d448();
  return ((1 << (param_1 & 7)) & 0xffU & (unsigned int)*(unsigned char *)(temp_v0 + 0x12f0 + (param_1 >> 3))) != 0;
}
