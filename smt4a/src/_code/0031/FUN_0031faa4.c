/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031faa4` (_code @ 0x31faa4, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f2c4; /* 0x57f2c4 */


void FUN_0031faa4(unsigned short param_1,unsigned short param_2)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f2c4;
  *(unsigned short *)(DAT_0057f2c4 + (unsigned int)*(unsigned short *)(DAT_0057f2c4 + 0x1e) * 2 + 0xe) = param_1;
  *(unsigned short *)(temp_v0 + (unsigned int)*(unsigned short *)(temp_v0 + 0x1e) * 2 + 0x16) = param_2;
  *(short *)(temp_v0 + 0x1e) = *(short *)(temp_v0 + 0x1e) + 1;
  return;
}
