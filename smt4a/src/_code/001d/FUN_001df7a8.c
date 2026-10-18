/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001df7a8` (_code @ 0x1df7a8, 0x284 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: func_0x001dfa2c. */
/* Supplied declaration required: func_0x001dffd8. */


void FUN_001df7a8(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  short *temp_v0;
  short *psVar1;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  piVar2 = (int *)(param_1 + 2);
  temp_v4 = param_1[0x73];
  func_0x001dfa2c(*param_1,param_1[1]);
  func_0x001dffd8();
  func_0x001dffd8();
  func_0x001dffd8();
  func_0x001dffd8();
  temp_v3 = piVar2[0x6d];
  temp_v5 = 0x100;
  psVar1 = temp_v0;
  do {
    temp_v1 = (int)*psVar1 - ((piVar2[7] * piVar2[0x6b] + 0x4000) >> 0xf);
    piVar2[0x6c] = piVar2[0x6b] + ((piVar2[7] * temp_v1 + 0x4000) >> 0xf);
    temp_v1 = temp_v1 - ((piVar2[6] * piVar2[0x6a] + 0x4000) >> 0xf);
    piVar2[0x6b] = piVar2[0x6a] + ((piVar2[6] * temp_v1 + 0x4000) >> 0xf);
    temp_v1 = temp_v1 - ((piVar2[5] * piVar2[0x69] + 0x4000) >> 0xf);
    piVar2[0x6a] = piVar2[0x69] + ((piVar2[5] * temp_v1 + 0x4000) >> 0xf);
    temp_v1 = temp_v1 - ((piVar2[4] * piVar2[0x68] + 0x4000) >> 0xf);
    piVar2[0x69] = piVar2[0x68] + ((piVar2[4] * temp_v1 + 0x4000) >> 0xf);
    temp_v1 = temp_v1 - ((piVar2[3] * piVar2[0x67] + 0x4000) >> 0xf);
    piVar2[0x68] = piVar2[0x67] + ((piVar2[3] * temp_v1 + 0x4000) >> 0xf);
    temp_v1 = temp_v1 - ((piVar2[2] * piVar2[0x66] + 0x4000) >> 0xf);
    piVar2[0x67] = piVar2[0x66] + ((piVar2[2] * temp_v1 + 0x4000) >> 0xf);
    temp_v1 = temp_v1 - ((piVar2[1] * piVar2[0x65] + 0x4000) >> 0xf);
    piVar2[0x66] = piVar2[0x65] + ((piVar2[1] * temp_v1 + 0x4000) >> 0xf);
    temp_v2 = piVar2[100];
    temp_v1 = temp_v1 - ((*piVar2 * temp_v2 + 0x4000) >> 0xf);
    piVar2[0x65] = temp_v2 + ((*piVar2 * temp_v1 + 0x4000) >> 0xf);
    piVar2[100] = temp_v1;
    temp_v3 = temp_v1 + ((temp_v3 * 0x6e14 + 0x4000) >> 0xf);
    temp_v1 = temp_v3 * 2;
    if (temp_v3 * 2 < -0x8000) {
      temp_v1 = -0x8000;
    }
    if (temp_v1 >= 0x8000) {
      temp_v1 = 0x7fff;
    }
    *psVar1 = (short)temp_v1;
    temp_v5 = temp_v5 - 1;
    psVar1 = (short *)((int)psVar1 + temp_v4);
  } while (temp_v5 != 0);
  piVar2[0x6d] = temp_v3;
  return;
}
