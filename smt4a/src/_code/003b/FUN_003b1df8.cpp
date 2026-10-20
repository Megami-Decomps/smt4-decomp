/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b1df8` (_code @ 0x3b1df8, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameDataBlocksGetSaveData(void);
extern unsigned char scrGetArg(unsigned int);


unsigned int FUN_003b1df8(void)

{
  unsigned char temp_v0;
  int temp_v1;
  
  temp_v1 = gameDataBlocksGetSaveData();
  temp_v0 = scrGetArg(0);
  *(unsigned char *)(temp_v1 + 0x27e3f) = temp_v0;
  return 1;
}

} /* extern "C" */
