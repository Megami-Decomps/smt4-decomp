/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a3a5c` (_code @ 0x1a3a5c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00646598; /* 0x646598 */


void FUN_001a3a5c(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 * 4;
    temp_v1 = temp_v1 + 1;
    *(unsigned int *)(&DAT_00646598 + temp_v0) = 0;
  } while (temp_v1 < 0x18);
  return;
}

} /* extern "C" */
