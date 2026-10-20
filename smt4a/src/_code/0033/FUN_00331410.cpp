/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00331410` (_code @ 0x331410, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


void FUN_00331410(void)

{
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4));
  temp_v2 = 0;
  do {
    temp_v3 = temp_v1 + temp_v2 * 0x50;
    temp_v0 = *(unsigned char *)(temp_v3 + 0x5f72);
    if (temp_v0 >> 6 == 1) {
      *(unsigned char *)(temp_v3 + 0x5f72) = (temp_v0 & 0x3f) | 0x80;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x500);
  return;
}

} /* extern "C" */
