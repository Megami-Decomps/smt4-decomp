/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00263784` (_code @ 0x263784, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bbd40(void);


unsigned char FUN_00263784(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002bbd40();
  return ((1 << (param_1 & 7)) & 0xffU & (unsigned int)*(unsigned char *)(temp_v0 + 8 + (param_1 >> 3))) != 0;
}
