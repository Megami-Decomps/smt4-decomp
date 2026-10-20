/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032ef0c` (_code @ 0x32ef0c, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0014af84(void);


void FUN_0032ef0c(int param_1,int param_2)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned char temp_v2;
  
  temp_v1 = FUN_0014af84();
  temp_v2 = (unsigned char)(1 << ((param_1 % 8) & 0xffU));
  pbVar3 = (unsigned char *)(temp_v1 + ((int)(param_1 + ((unsigned int)(param_1 >> 0x1f) >> 0x1d)) >> 3) + 0x282fc);
  temp_v0 = *pbVar3;
  if (param_2 != 0) {
    temp_v2 = temp_v2 | temp_v0;
  }
  else {
    temp_v2 = temp_v0 & ~temp_v2;
  }
  *pbVar3 = temp_v2;
  return;
}

} /* extern "C" */
