/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e4510` (_code @ 0x3e4510, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00348d64(void);


unsigned char FUN_003e4510(unsigned int param_1)

{
  int temp_v0;
  unsigned char *pbVar2;
  unsigned char temp_v1;
  
  if (param_1 == 0x81 || param_1 == 0x80) {
    temp_v0 = FUN_00348d64();
    temp_v1 = ((unsigned int)*(unsigned char *)(temp_v0 + (param_1 >> 3)) & (1 << (param_1 & 7))) != 0;
    if (temp_v1) {
      temp_v0 = FUN_00348d64();
      pbVar2 = (unsigned char *)(temp_v0 + ((int)(param_1 + ((unsigned int)((int)param_1 >> 0x1f) >> 0x1d)) >> 3));
      *pbVar2 = *pbVar2 & ~(unsigned char)(1 << (((int)param_1 % 8) & 0xffU));
    }
    return temp_v1;
  }
  return 0;
}
