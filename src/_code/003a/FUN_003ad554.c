/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ad554` (_code @ 0x3ad554, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a63f8(unsigned int, int);


unsigned int FUN_003ad554(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = FUN_002a63f8(0x22,temp_v1);
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  return 1;
}
