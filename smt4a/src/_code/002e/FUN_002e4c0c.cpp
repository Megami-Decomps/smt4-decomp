/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4c0c` (_code @ 0x2e4c0c, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_002e4c0c(unsigned short *param_1,int param_2,int param_3,unsigned int param_4)

{
  unsigned short temp_v0;
  unsigned char temp_v1;
  
  do {
    temp_v1 = param_2 == 0;
    param_2 = param_2 - 1;
    if (temp_v1) {
      return param_3;
    }
    temp_v0 = *param_1;
    param_1 = param_1 + 1;
  } while (temp_v0 != param_4);
  if (param_3 != 0) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
