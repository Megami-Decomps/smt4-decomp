/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00125a34` (_code @ 0x125a34, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int zlibBiWindup(void);

/* Supplied declaration required: zlibBiWindup. */


void FUN_00125a34(int param_1,unsigned char *param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  zlibBiWindup();
  *(unsigned int *)(param_1 + 0x16b4) = 8;
  if (param_4 != 0) {
    temp_v1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = temp_v1 + 1;
    *(char *)(*(int *)(param_1 + 8) + temp_v1) = (char)param_3;
    temp_v1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = temp_v1 + 1;
    *(char *)(*(int *)(param_1 + 8) + temp_v1) = (char)(param_3 >> 8);
    temp_v1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = temp_v1 + 1;
    *(char *)(*(int *)(param_1 + 8) + temp_v1) = (char)~param_3;
    temp_v1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = temp_v1 + 1;
    *(char *)(*(int *)(param_1 + 8) + temp_v1) = (char)(~param_3 >> 8);
  }
  while (temp_v2 = param_3 != 0, param_3 = param_3 - 1, temp_v2) {
    temp_v1 = *(int *)(param_1 + 0x14);
    temp_v0 = *param_2;
    param_2 = param_2 + 1;
    *(int *)(param_1 + 0x14) = temp_v1 + 1;
    *(unsigned char *)(*(int *)(param_1 + 8) + temp_v1) = temp_v0;
  }
  return;
}

} /* extern "C" */
