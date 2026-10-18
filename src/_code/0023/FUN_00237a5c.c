/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00237a5c` (_code @ 0x237a5c, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00366070(unsigned int, unsigned int);
extern unsigned int FUN_00375c70(void);


unsigned int FUN_00237a5c(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00375c70();
  if (-1 < (int)temp_v0) {
    temp_v1 = FUN_00366070(param_1,param_2);
    temp_v0 = temp_v1 | temp_v0;
  }
  return temp_v0;
}
