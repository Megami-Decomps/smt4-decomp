/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebbdc` (_code @ 0x2ebbdc, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e2f68; /* 0x4e2f68 */


unsigned int FUN_002ebbdc(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0xffffffff;
  if ((param_1 < 0x10) && (*(int *)(&DAT_004e2f68 + param_1 * 4) != 0)) {
    temp_v0 = *(unsigned int *)(*(int *)(&DAT_004e2f68 + param_1 * 4) + 0x9c);
  }
  return temp_v0;
}
