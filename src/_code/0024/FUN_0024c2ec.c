/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024c2ec` (_code @ 0x24c2ec, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0023d2ec(void);


unsigned char FUN_0024c2ec(int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_0023d2ec();
  return ((1 << (param_2 & 7)) & 0xffU &
         (unsigned int)*(unsigned char *)(temp_v0 + param_1 * 8 + 0xcf0 + (param_2 >> 3))) != 0;
}
