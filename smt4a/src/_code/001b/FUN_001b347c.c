/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b347c` (_code @ 0x1b347c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ab888(void);


int FUN_001b347c(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_001ab888();
  temp_v1 = 0;
  temp_v2 = 0;
  do {
    if (*(char *)(temp_v0 + temp_v2 + 0x1c88) < '\0') {
      return temp_v1;
    }
    temp_v2 = temp_v2 + 1;
    temp_v1 = temp_v1 + 1;
  } while (temp_v2 < 0x18);
  return temp_v1;
}
