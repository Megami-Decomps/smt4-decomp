/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bd098` (_code @ 0x4bd098, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_004bd098(int param_1,unsigned int param_2)

{
  int temp_v0;
  
  if (param_1 != 0) {
    temp_v0 = 0;
    do {
      if (*(unsigned short *)(param_1 + temp_v0 * 2 + 0x34) == param_2) {
        return (int)*(char *)(param_1 + temp_v0 + 0x44);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 8);
  }
  return 0;
}
