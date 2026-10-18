/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014143c` (_code @ 0x14143c, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00432fc8; /* 0x432fc8 */

extern int FUN_002a6c5c(unsigned int, unsigned int, unsigned int);
extern int FUN_002a6d08(unsigned int);


unsigned int FUN_0014143c(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002a6d08(DAT_00432fc8);
  temp_v1 = 0;
  if ((temp_v0 != 0) && (temp_v0 = FUN_002a6c5c(param_1,0x19,param_2), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}
