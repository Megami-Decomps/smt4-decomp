/* NON_MATCHING: retail unit merges two functions; the navi-state wrapper ends at +0x20, followed by an unsymbolized script-result function at +0x20..+0x48. */
#include "romwright_types.h"

extern "C" {

extern int g_naviMain; /* 0x587f28 */


void FUN_00398464(void)

{
  int temp_v0;
  
  temp_v0 = g_naviMain;
  if (g_naviMain != 0) {
    *(unsigned int *)(g_naviMain + 0x6c) = 6;
    *(unsigned int *)(temp_v0 + 0x70) = 0;
    return;
  }
  return;
}

} /* extern "C" */
