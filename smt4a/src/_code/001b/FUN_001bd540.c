/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bd540` (_code @ 0x1bd540, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0058928c; /* 0x58928c */

extern unsigned int FUN_001bd57c(int, unsigned int, unsigned int, unsigned int);


unsigned int FUN_001bd540(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  if (DAT_0058928c != 0) {
    temp_v0 = FUN_001bd57c(DAT_0058928c,0xffff8001,param_1,param_2);
    return temp_v0;
  }
  return 0xc8a0a7f8;
}
