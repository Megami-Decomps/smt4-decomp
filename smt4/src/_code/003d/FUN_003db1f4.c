/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003db1f4` (_code @ 0x3db1f4, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002adee0(unsigned int);


unsigned int FUN_003db1f4(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (param_2 != 0 && param_2 != 0x16) {
    temp_v2 = 0;
    do {
      temp_v0 = param_1 + temp_v2 * 0x28;
      if ((*(unsigned int *)(temp_v0 + 0x1b4) & 2) != 0) {
        temp_v1 = FUN_002adee0(*(unsigned int *)(temp_v0 + 400));
        if (temp_v1 == 0) {
          return 0;
        }
        *(unsigned int *)(temp_v0 + 0x1b4) = *(unsigned int *)(temp_v0 + 0x1b4) | 4;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x32);
  }
  return 1;
}
