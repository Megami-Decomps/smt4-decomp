/* NON_MATCHING: romwright 0.5.0 decompilation of `eventEffectIsState2` (_code @ 0x2cd9e4, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_eventEffect; /* 0x43dee8 */


unsigned int eventEffectIsState2(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if ((g_eventEffect != 0) && (*(int *)(g_eventEffect + 8) == 2)) {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
