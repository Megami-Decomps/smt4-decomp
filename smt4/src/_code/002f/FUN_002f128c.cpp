/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f128c` (_code @ 0x2f128c, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int btlGetMainState(void);
extern unsigned int scrGetArg(void);


unsigned int FUN_002f128c(void)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlGetMainState();
  temp_v0 = 1 << (temp_v0 & 0xff);
  *(unsigned int *)(temp_v1 + 0x49d0) = temp_v0 | *(unsigned int *)(temp_v1 + 0x49d0);
  *(unsigned int *)(temp_v1 + 0x49d4) = *(unsigned int *)(temp_v1 + 0x49d4) | ((int)temp_v0 >> 0x1f);
  return 1;
}

} /* extern "C" */
