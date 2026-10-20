/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00288154` (_code @ 0x288154, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e2ac; /* 0x43e2ac */


unsigned char FUN_00288154(unsigned int param_1,unsigned int *param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  if (param_1 < 0x501) {
    temp_v0 = DAT_0043e2ac + param_1 * 0x34;
    temp_v1 = *(unsigned int *)(temp_v0 + 0xc1fc);
    temp_v2 = *(unsigned int *)(temp_v0 + 0xc200);
    temp_v3 = *(unsigned int *)(temp_v0 + 0xc204);
    temp_v4 = *(unsigned int *)(temp_v0 + 0xc208);
    temp_v5 = *(unsigned int *)(temp_v0 + 0xc20c);
    temp_v6 = *(unsigned int *)(temp_v0 + 0xc210);
    temp_v7 = *(unsigned int *)(temp_v0 + 0xc214);
    *param_2 = *(unsigned int *)(temp_v0 + 0xc1f8);
    param_2[1] = temp_v1;
    param_2[2] = temp_v2;
    param_2[3] = temp_v3;
    param_2[4] = temp_v4;
    param_2[5] = temp_v5;
    param_2[6] = temp_v6;
    param_2[7] = temp_v7;
    temp_v1 = *(unsigned int *)(temp_v0 + 0xc21c);
    temp_v2 = *(unsigned int *)(temp_v0 + 0xc220);
    temp_v3 = *(unsigned int *)(temp_v0 + 0xc224);
    temp_v4 = *(unsigned int *)(temp_v0 + 0xc228);
    param_2[8] = *(unsigned int *)(temp_v0 + 0xc218);
    param_2[9] = temp_v1;
    param_2[10] = temp_v2;
    param_2[0xb] = temp_v3;
    param_2[0xc] = temp_v4;
  }
  return param_1 < 0x501;
}

} /* extern "C" */
