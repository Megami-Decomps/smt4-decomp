/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00325998` (_code @ 0x325998, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0058103c; /* 0x58103c */


void FUN_00325998(int param_1,int param_2)

{
  int temp_v0;
  short temp_v1;
  int temp_v2;
  
  if (param_2 == 0) {
    *(unsigned char *)(DAT_0058103c + 0xccf0) = 0;
  }
  else {
    *(unsigned char *)(DAT_0058103c + 0xccf0) = 1;
    temp_v2 = DAT_0058103c;
    if (param_1 == 0) {
      param_1 = -1;
    }
    *(short *)(DAT_0058103c + 0xccf2) = (short)param_1;
    temp_v1 = (short)param_2 * 10;
    *(short *)(temp_v2 + 0xccf6) = temp_v1;
    temp_v0 = (int)temp_v1 << 2;
    *(unsigned int *)(temp_v2 + 0xccfc) = 0;
    *(unsigned int *)(temp_v2 + 0xcd00) = 0;
    *(unsigned int *)(temp_v2 + 0xcd04) = 0;
    temp_v1 = ((short)(temp_v0 / 10) + (short)(temp_v0 >> 0x1f)) -
            (short)((long long)temp_v0 * 0x66666667 >> 0x3f);
    *(short *)(temp_v2 + 0xccf4) = temp_v1;
    *(short *)(temp_v2 + 0xccf8) = temp_v1;
  }
  return;
}
