/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d173c` (_code @ 0x2d173c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_mapDepartWork; /* 0x58069c */
extern int DAT_005f18c0; /* 0x5f18c0 */


void FUN_002d173c(void)

{
  int temp_v0;
  
  temp_v0 = g_mapDepartWork;
  if (DAT_005f18c0 != 1) {
    *(unsigned short *)(g_mapDepartWork + 0x18) = 0;
  }
  else {
    *(unsigned short *)(g_mapDepartWork + 0x18) = 1;
    *(unsigned int *)(temp_v0 + 0x24) = 0;
    *(unsigned int *)(temp_v0 + 0x28) = 0;
    *(unsigned int *)(temp_v0 + 0x2c) = 0;
    *(unsigned int *)(temp_v0 + 0x30) = 0;
  }
  return;
}

} /* extern "C" */
