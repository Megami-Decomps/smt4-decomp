/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2040` (_code @ 0x2e2040, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bf41c(void);
extern int FUN_002c0ac8(int);
extern int FUN_00322cc4(void);


void FUN_002e2040(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00322cc4();
  if ((temp_v0 != -1) && (temp_v1 = FUN_002bf41c(), temp_v1 != 0)) {
    temp_v0 = FUN_002c0ac8(temp_v0);
    *(unsigned char *)(temp_v0 + 0x94) = 0;
  }
  return;
}
