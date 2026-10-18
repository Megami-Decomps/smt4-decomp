/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d6560` (_code @ 0x2d6560, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bf41c(void);
extern int FUN_002c0ac8(int);
extern int FUN_002e1558(int);


void FUN_002d6560(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 1;
  do {
    temp_v0 = FUN_002e1558(temp_v2);
    if ((temp_v0 != -1) && (temp_v1 = FUN_002bf41c(), temp_v1 != 0)) {
      temp_v0 = FUN_002c0ac8(temp_v0);
      *(unsigned char *)(temp_v0 + 0x8c) = 0;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  return;
}
