/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00331368` (_code @ 0x331368, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_partyPanel; /* 0x57f268 */


unsigned int FUN_00331368(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (g_partyPanel != 0) {
    temp_v0 = *(unsigned int *)(g_partyPanel + 0xfc8);
  }
  return temp_v0;
}

} /* extern "C" */
