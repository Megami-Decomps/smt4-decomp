/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e1050` (_code @ 0x3e1050, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_003e1050(int param_1,int param_2,int param_3,unsigned int param_4)

{
  unsigned int temp_v0;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    temp_v0 = 0xd820ebf8;
  }
  else if (param_2 == 0 || param_3 == 0) {
    temp_v0 = 0xe0e0ebf6;
  }
  else if (param_4 < 0x11) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 0xe0e0ebec;
  }
  return temp_v0;
}
