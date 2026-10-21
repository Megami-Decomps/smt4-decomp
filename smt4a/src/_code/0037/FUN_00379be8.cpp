/* NON_MATCHING: unit merges a 0x20-byte navi wrapper, a second wrapper at +0x20, and a stub at +0x44; split boundaries before matching. */
#include "romwright_types.h"

extern "C" {

extern int g_naviMain; /* 0x587f28 */


void FUN_00379be8(void)

{
  int temp_v0;
  
  temp_v0 = g_naviMain;
  if (g_naviMain != 0) {
    *(unsigned int *)(g_naviMain + 0x6c) = 4;
    *(unsigned int *)(temp_v0 + 0x70) = 0;
    return;
  }
  return;
}

} /* extern "C" */
