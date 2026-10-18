/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004185ec` (_code @ 0x4185ec, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ab940(void);


unsigned int FUN_004185ec(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001ab940();
  return (*(unsigned char *)(temp_v0 + param_1 * 4 + 0x2a0) & 2) >> 1;
}
