/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f7628` (_code @ 0x4f7628, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_003fe86c. */


void FUN_004f7628(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned long long temp_v6;
  
  temp_v3 = 0;
  temp_v6 = 0x3f800000;
  do {
    temp_v0 = param_1 + temp_v3 * 0x28;
    if (((*(unsigned int *)(temp_v0 + 0x1b4) & 8) == 0) && (*(int *)(temp_v0 + 400) != 0)) {
      temp_v1 = *(int *)(temp_v0 + 0x194);
      temp_v5 = temp_v1 == param_2;
      if (temp_v5) {
        temp_v1 = *(int *)(temp_v0 + 0x198);
      }
      if (temp_v5 && temp_v1 == param_3) {
        temp_v4 = *(int *)(*(int *)(temp_v0 + 400) + 4);
        FUN_003fe86c(temp_v4,0,2);
        *(int *)(temp_v4 + 0x1fc) = (int)temp_v6;
        *(unsigned int *)(temp_v4 + 4) = *(unsigned int *)(temp_v4 + 4) & 0xfffffffc;
        *(unsigned int *)(temp_v0 + 0x1b4) = *(unsigned int *)(temp_v0 + 0x1b4) | 8;
        temp_v1 = FUN_0014aa78();
        temp_v0 = *(int *)(temp_v1 + 0x1ed4) + *(int *)(temp_v0 + 0x1ac) * 0x1d0;
        temp_v2 = *(unsigned int *)(temp_v0 + 0x50);
        if ((temp_v2 & 0x10) != 0) {
          temp_v2 = *(unsigned int *)(temp_v0 + 0x10c) & 2;
        }
        else {
          temp_v2 = temp_v2 & 0x80000;
        }
        if (temp_v2 == 0) {
          *(unsigned int *)(temp_v4 + 4) = *(unsigned int *)(temp_v4 + 4) | 1;
        }
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x32);
  return;
}
