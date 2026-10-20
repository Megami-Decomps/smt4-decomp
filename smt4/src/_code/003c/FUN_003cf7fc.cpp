/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cf7fc` (_code @ 0x3cf7fc, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0027e928(void);


void FUN_003cf7fc(int *param_1)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  short temp_v1;
  int temp_v2;
  short *psVar5;
  int temp_v3;
  unsigned int *puVar7;
  int aiStack_1d0 [110];
  
  temp_v2 = 0;
  temp_v1 = 0;
  temp_v3 = 0x6d;
  puVar2 = *(unsigned int **)(*param_1 + 0x1fc0);
  puVar7 = puVar2 + 0x6d;
  psVar5 = (short *)((int)puVar2 + 0x6e);
  do {
    if (((*puVar2 & 0x400) != 0) && (temp_v0 = *puVar7, temp_v1 <= (short)temp_v0)) {
      aiStack_1d0[temp_v2 + 1] = (int)*psVar5;
      temp_v2 = temp_v2 + 1;
      temp_v1 = (short)temp_v0;
    }
    temp_v3 = temp_v3 - 1;
    puVar2 = puVar2 + 0xa2;
    puVar7 = puVar7 + 0xa2;
    psVar5 = psVar5 + 0x144;
  } while (temp_v3 != 0);
  temp_v3 = FUN_0027e928();
  *(unsigned char *)(aiStack_1d0[temp_v2] + temp_v3 + 0x38) = 1;
  return;
}

} /* extern "C" */
