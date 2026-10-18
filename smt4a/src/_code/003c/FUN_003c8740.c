/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8740` (_code @ 0x3c8740, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0018206c(unsigned int, unsigned int);
extern unsigned int FUN_002adba8(int);


unsigned int FUN_003c8740(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  do {
    if (*(int *)(param_1 + temp_v2 * 4 + 0x94) == 2) {
      temp_v0 = FUN_002adba8(temp_v2);
      temp_v1 = FUN_0018206c(0x2e,temp_v0);
      if (temp_v1 == 0) {
        return 0;
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 9);
  return 1;
}
