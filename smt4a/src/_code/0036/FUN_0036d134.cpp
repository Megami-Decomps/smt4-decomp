/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036d134` (_code @ 0x36d134, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameDataBlocksGetSaveData(void);


unsigned int FUN_0036d134(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = gameDataBlocksGetSaveData();
    if (((unsigned int)*(unsigned char *)(temp_v0 + ((int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1d)) >> 3) + 0x282fc) &
        (1 << ((temp_v1 % 8) & 0xffU))) != 0) {
      return 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x80);
  return 0;
}

} /* extern "C" */
