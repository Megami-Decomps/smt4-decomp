/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00362bd4` (_code @ 0x362bd4, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00237674(unsigned int, unsigned int);
extern unsigned int FUN_002378c4(void);
extern unsigned int FUN_00362c28(unsigned int, unsigned int);


unsigned int FUN_00362bd4(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002378c4();
  if (-1 < (int)temp_v0) {
    temp_v1 = FUN_00362c28(param_1,param_2);
    temp_v0 = temp_v1 | temp_v0;
    if (-1 < (int)temp_v0) {
      temp_v1 = FUN_00237674(param_1,param_2);
      temp_v0 = temp_v1 | temp_v0;
    }
  }
  return temp_v0;
}
