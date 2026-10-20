/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023e330` (_code @ 0x23e330, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00432fc8; /* 0x432fc8 */

extern int FUN_002a6c5c(unsigned int, unsigned int, unsigned int);
extern int FUN_002a6d08(unsigned int);


unsigned int FUN_0023e330(unsigned int param_1,unsigned int param_2,int param_3)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (((param_3 == 0) || (temp_v0 = FUN_002a6d08(DAT_00432fc8), temp_v1 = 0, temp_v0 != 0)) &&
     (temp_v0 = FUN_002a6c5c(param_1,0xc,param_2), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
