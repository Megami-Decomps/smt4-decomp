/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f66e8` (_code @ 0x2f66e8, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */


void FUN_002f66e8(void)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = DAT_0044e190;
  *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
  puVar2 = (unsigned int *)(temp_v0 + 0x400);
  temp_v1 = *puVar2;
  *puVar2 = 3;
  *(unsigned int *)(temp_v0 + 0x404) = temp_v1;
  return;
}
