/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4db4` (_code @ 0x2a4db4, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e460; /* 0x44e460 */

extern unsigned int FUN_00155ce4(int, unsigned int, unsigned int, unsigned int);


unsigned int FUN_002a4db4(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  if (DAT_0044e460 != 0) {
    temp_v0 = FUN_00155ce4(DAT_0044e460,0xffff8001,param_1,param_2);
    return temp_v0;
  }
  return 0xc8a0a7f8;
}
