/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00349348` (_code @ 0x349348, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002adf14(void);


void FUN_00349348(int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned char *pbVar2;
  
  temp_v0 = FUN_002adf14();
  temp_v0 = temp_v0 + param_1 * 4;
  pbVar2 = (unsigned char *)(temp_v0 + 0x200);
  if (*(unsigned char *)(temp_v0 + 0x201) != param_2 && param_2 != 0) {
    *pbVar2 = *pbVar2 | 0x40;
  }
  *(char *)(temp_v0 + 0x201) = (char)param_2;
  if ((param_2 & 0xff) < 2) {
    *(unsigned char *)(temp_v0 + 0x201) = 0;
    *pbVar2 = *pbVar2 & 0xbf;
  }
  return;
}
