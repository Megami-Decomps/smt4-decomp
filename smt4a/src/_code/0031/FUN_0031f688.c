/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f688` (_code @ 0x31f688, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fe8; /* 0x588fe8 */


void FUN_0031f688(void)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = DAT_00588fe8;
  *(unsigned int *)(DAT_00588fe8 + 0x524) = 0;
  puVar2 = (unsigned int *)(temp_v0 + 0x518);
  temp_v1 = *puVar2;
  *puVar2 = 6;
  *(unsigned int *)(temp_v0 + 0x51c) = temp_v1;
  return;
}
