/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00363d4c` (_code @ 0x363d4c, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0023780c(unsigned int, unsigned int);
extern unsigned int FUN_00237a5c(void);
extern unsigned int FUN_00363e78(unsigned int, unsigned int);


unsigned int FUN_00363d4c(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00237a5c();
  if (-1 < (int)temp_v0) {
    temp_v1 = FUN_00363e78(param_1,param_2);
    temp_v0 = temp_v1 | temp_v0;
    if (-1 < (int)temp_v0) {
      temp_v1 = FUN_0023780c(param_1,param_2);
      temp_v0 = temp_v1 | temp_v0;
    }
  }
  return temp_v0;
}
