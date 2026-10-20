/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f2964` (_code @ 0x1f2964, 0x18c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_001f2964(unsigned short *param_1,int *param_2,int param_3)

{
  unsigned short *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int *puVar12;
  unsigned int *puVar13;
  unsigned int *puVar14;
  
  puVar2 = (unsigned int *)(param_1 + 0x101);
  temp_v1 = (*(unsigned int *)(param_1 + 1) >> 1) & 0x7f7f7f7f;
  temp_v2 = (*(unsigned int *)(param_1 + 3) >> 1) & 0x7f7f7f7f;
  temp_v3 = (*(unsigned int *)(param_1 + 5) >> 1) & 0x7f7f7f7f;
  temp_v0 = (((*param_1 >> 1 & 0x7f7f7f7f) + temp_v1 * 0x10100 + (unsigned int)(*param_1 >> 9)) >> 1) &
          0x7f7f7f7f;
  temp_v1 = (((temp_v1 >> 0x10) + temp_v2 * 0x10100 + (*(unsigned int *)(param_1 + 1) >> 0x19)) >> 1) & 0x7f7f7f7f
  ;
  temp_v2 = (((temp_v2 >> 0x10) + temp_v3 * 0x10100 + (*(unsigned int *)(param_1 + 3) >> 0x19)) >> 1) & 0x7f7f7f7f
  ;
  temp_v3 = (((temp_v3 >> 0x10) + ((*(unsigned int *)(param_1 + 7) >> 1) & 0x7f7f7f7f) * 0x10100 +
           (*(unsigned int *)(param_1 + 5) >> 0x19)) >> 1) & 0x7f7f7f7f;
  do {
    puVar3 = puVar2 + 0x80;
    temp_v5 = (*puVar2 >> 1) & 0x7f7f7f7f;
    temp_v6 = (puVar2[1] >> 1) & 0x7f7f7f7f;
    temp_v7 = (puVar2[2] >> 1) & 0x7f7f7f7f;
    temp_v4 = (((*(unsigned short *)((int)puVar2 - 2) >> 1 & 0x7f7f7f7f) + temp_v5 * 0x10100 +
             (unsigned int)(*(unsigned short *)((int)puVar2 - 2) >> 9)) >> 1) & 0x7f7f7f7f;
    temp_v5 = (((temp_v5 >> 0x10) + temp_v6 * 0x10100 + (*puVar2 >> 0x19)) >> 1) & 0x7f7f7f7f;
    temp_v6 = (((temp_v6 >> 0x10) + temp_v7 * 0x10100 + (puVar2[1] >> 0x19)) >> 1) & 0x7f7f7f7f;
    temp_v7 = (((temp_v7 >> 0x10) + ((puVar2[3] >> 1) & 0x7f7f7f7f) * 0x10100 + (puVar2[2] >> 0x19))
             >> 1) & 0x7f7f7f7f;
    *param_2 = temp_v0 + temp_v4;
    param_2[1] = temp_v1 + temp_v5;
    param_2[2] = temp_v2 + temp_v6;
    param_2[3] = temp_v3 + temp_v7;
    puVar1 = (unsigned short *)((int)puVar2 + 0x1fe);
    puVar12 = puVar2 + 0x81;
    puVar13 = puVar2 + 0x82;
    puVar14 = puVar2 + 0x83;
    puVar2 = puVar2 + 0x100;
    temp_v1 = (*puVar3 >> 1) & 0x7f7f7f7f;
    temp_v2 = (*puVar12 >> 1) & 0x7f7f7f7f;
    temp_v3 = (*puVar13 >> 1) & 0x7f7f7f7f;
    temp_v0 = (((*puVar1 >> 1 & 0x7f7f7f7f) + temp_v1 * 0x10100 + (unsigned int)(*puVar1 >> 9)) >> 1) &
            0x7f7f7f7f;
    temp_v1 = (((temp_v1 >> 0x10) + temp_v2 * 0x10100 + (*puVar3 >> 0x19)) >> 1) & 0x7f7f7f7f;
    temp_v2 = (((temp_v2 >> 0x10) + temp_v3 * 0x10100 + (*puVar12 >> 0x19)) >> 1) & 0x7f7f7f7f;
    temp_v3 = (((temp_v3 >> 0x10) + ((*puVar14 >> 1) & 0x7f7f7f7f) * 0x10100 + (*puVar13 >> 0x19)) >> 1)
            & 0x7f7f7f7f;
    param_2[0x80] = temp_v4 + temp_v0;
    param_2[0x81] = temp_v5 + temp_v1;
    param_2[0x82] = temp_v6 + temp_v2;
    param_2[0x83] = temp_v7 + temp_v3;
    param_2 = param_2 + 0x100;
    param_3 = param_3 - 2;
  } while (param_3 != 0);
  return;
}

} /* extern "C" */
