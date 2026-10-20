/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e078` (_code @ 0x37e078, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_statusDown; /* 0x588fe8 */


void FUN_0037e078(void)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = g_statusDown;
  *(unsigned int *)(g_statusDown + 0x524) = 0;
  puVar2 = (unsigned int *)(temp_v0 + 0x518);
  temp_v1 = *puVar2;
  *puVar2 = 3;
  *(unsigned int *)(temp_v0 + 0x51c) = temp_v1;
  return;
}

} /* extern "C" */
