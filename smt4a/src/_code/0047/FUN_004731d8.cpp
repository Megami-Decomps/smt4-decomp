/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004731d8` (_code @ 0x4731d8, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameDataBlocksGetSaveData(void);


void FUN_004731d8(void)

{
/* irregular: irregular input(s): in_s16, in_s17 */
  int temp_v0;
  unsigned int in_s16;
  unsigned int in_s17;
  
  temp_v0 = gameDataBlocksGetSaveData();
  *(unsigned int *)(temp_v0 + 0x27ea8) = in_s17;
  *(unsigned int *)(temp_v0 + 0x27e98) = 0;
  *(unsigned int *)(temp_v0 + 0x27eac) = in_s16;
  *(unsigned int *)(temp_v0 + 0x27e9c) = 0;
  *(unsigned int *)(temp_v0 + 0x27ea0) = 0;
  *(unsigned int *)(temp_v0 + 0x27ea4) = 0;
  return;
}

} /* extern "C" */
