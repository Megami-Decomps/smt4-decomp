/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fd540` (_code @ 0x3fd540, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameDataBlocksGetSaveData(void);


void FUN_003fd540(void)

{
  int temp_v0;
  
  temp_v0 = gameDataBlocksGetSaveData();
  *(unsigned int *)(temp_v0 + 0x221aa) = 0;
  *(unsigned int *)(temp_v0 + 0x221ae) = 0;
  *(unsigned int *)(temp_v0 + 0x221b2) = 0;
  *(unsigned int *)(temp_v0 + 0x221b6) = 0;
  *(unsigned short *)(temp_v0 + 0x221ba) = 0;
  return;
}

} /* extern "C" */
