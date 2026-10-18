/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00131288` (_code @ 0x131288, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004ea494; /* 0x4ea494 */


void FUN_00131288(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 * 2;
    temp_v1 = temp_v1 + 2;
    *(unsigned short *)(&DAT_004ea494 + temp_v0) = 0xffff;
    *(unsigned short *)(temp_v0 + 0x4ea496) = 0xffff;
  } while (temp_v1 < 0x10);
  return;
}
