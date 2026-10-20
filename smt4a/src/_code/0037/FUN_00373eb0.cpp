/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00373eb0` (_code @ 0x373eb0, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int btlGetMainState(void);
extern unsigned int scrGetArg(void);


unsigned int FUN_00373eb0(void)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlGetMainState();
  temp_v0 = 1 << (temp_v0 & 0xff);
  *(unsigned int *)(temp_v1 + 0x4cd8) = temp_v0 | *(unsigned int *)(temp_v1 + 0x4cd8);
  *(unsigned int *)(temp_v1 + 0x4cdc) = *(unsigned int *)(temp_v1 + 0x4cdc) | ((int)temp_v0 >> 0x1f);
  return 1;
}

} /* extern "C" */
