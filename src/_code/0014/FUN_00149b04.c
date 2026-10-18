/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00149b04` (_code @ 0x149b04, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e9dc8; /* 0x4e9dc8 */


void FUN_00149b04(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 * 4;
    temp_v1 = temp_v1 + 1;
    *(unsigned int *)(&DAT_004e9dc8 + temp_v0) = 0;
  } while (temp_v1 < 0x18);
  return;
}
