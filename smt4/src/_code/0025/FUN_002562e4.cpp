/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002562e4` (_code @ 0x2562e4, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00447a78; /* 0x447a78 */


void FUN_002562e4(int param_1,int param_2)

{
  int temp_v0;
  short temp_v1;
  int temp_v2;
  
  if (param_2 == 0) {
    *(unsigned char *)(DAT_00447a78 + 0xccc0) = 0;
  }
  else {
    *(unsigned char *)(DAT_00447a78 + 0xccc0) = 1;
    temp_v2 = DAT_00447a78;
    if (param_1 == 0) {
      param_1 = -1;
    }
    *(short *)(DAT_00447a78 + 0xccc2) = (short)param_1;
    temp_v1 = (short)param_2 * 10;
    *(short *)(temp_v2 + 0xccc6) = temp_v1;
    temp_v0 = (int)temp_v1 << 2;
    *(unsigned int *)(temp_v2 + 0xcccc) = 0;
    *(unsigned int *)(temp_v2 + 0xccd0) = 0;
    *(unsigned int *)(temp_v2 + 0xccd4) = 0;
    temp_v1 = ((short)(temp_v0 / 10) + (short)(temp_v0 >> 0x1f)) -
            (short)((long long)temp_v0 * 0x66666667 >> 0x3f);
    *(short *)(temp_v2 + 0xccc4) = temp_v1;
    *(short *)(temp_v2 + 0xccc8) = temp_v1;
  }
  return;
}

} /* extern "C" */
