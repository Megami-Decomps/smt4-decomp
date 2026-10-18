/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041815c` (_code @ 0x41815c, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ab940(void);


unsigned int FUN_0041815c(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001ab940();
  return (*(unsigned char *)(temp_v0 + param_1 * 4 + 0x2a2) & 0x20) >> 5;
}
