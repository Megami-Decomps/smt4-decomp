/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017df14` (_code @ 0x17df14, 0x198 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0017df14(int param_1,int *param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v0 = (*(unsigned int *)(param_1 - 1) >> 1) & 0x7f7f7f7f;
  temp_v1 = (*(unsigned int *)(param_1 + 3) >> 1) & 0x7f7f7f7f;
  temp_v2 = (*(unsigned int *)(param_1 + 7) >> 1) & 0x7f7f7f7f;
  temp_v3 = (*(unsigned int *)(param_1 + 0xb) >> 1) & 0x7f7f7f7f;
  temp_v0 = (((temp_v0 >> 0x10) + temp_v1 * 0x1010000 + (temp_v0 >> 8)) >> 1) & 0x7f7f7f7f;
  temp_v1 = (((temp_v1 >> 0x10) + temp_v2 * 0x1010000 + (temp_v1 >> 8)) >> 1) & 0x7f7f7f7f;
  temp_v2 = (((temp_v2 >> 0x10) + temp_v3 * 0x1010000 + (temp_v2 >> 8)) >> 1) & 0x7f7f7f7f;
  temp_v3 = (((temp_v3 >> 0x10) + (*(unsigned short *)(param_1 + 0xf) >> 1 & 0x7f7f7f7f) * 0x1010000 +
           (temp_v3 >> 8)) >> 1) & 0x7f7f7f7f;
  puVar1 = (unsigned int *)(param_1 - 1);
  do {
    temp_v4 = (puVar1[0x80] >> 1) & 0x7f7f7f7f;
    temp_v5 = (puVar1[0x81] >> 1) & 0x7f7f7f7f;
    temp_v6 = (puVar1[0x82] >> 1) & 0x7f7f7f7f;
    temp_v7 = (puVar1[0x83] >> 1) & 0x7f7f7f7f;
    temp_v4 = (((temp_v4 >> 0x10) + temp_v5 * 0x1010000 + (temp_v4 >> 8)) >> 1) & 0x7f7f7f7f;
    temp_v5 = (((temp_v5 >> 0x10) + temp_v6 * 0x1010000 + (temp_v5 >> 8)) >> 1) & 0x7f7f7f7f;
    temp_v6 = (((temp_v6 >> 0x10) + temp_v7 * 0x1010000 + (temp_v6 >> 8)) >> 1) & 0x7f7f7f7f;
    temp_v7 = (((temp_v7 >> 0x10) + ((unsigned short)((unsigned short)puVar1[0x84] >> 1) & 0x7f7f7f7f) * 0x1010000 +
             (temp_v7 >> 8)) >> 1) & 0x7f7f7f7f;
    *param_2 = temp_v0 + temp_v4;
    param_2[1] = temp_v1 + temp_v5;
    param_2[2] = temp_v2 + temp_v6;
    param_2[3] = temp_v3 + temp_v7;
    temp_v0 = (puVar1[0x100] >> 1) & 0x7f7f7f7f;
    temp_v1 = (puVar1[0x101] >> 1) & 0x7f7f7f7f;
    temp_v2 = (puVar1[0x102] >> 1) & 0x7f7f7f7f;
    temp_v3 = (puVar1[0x103] >> 1) & 0x7f7f7f7f;
    temp_v0 = (((temp_v0 >> 0x10) + temp_v1 * 0x1010000 + (temp_v0 >> 8)) >> 1) & 0x7f7f7f7f;
    temp_v1 = (((temp_v1 >> 0x10) + temp_v2 * 0x1010000 + (temp_v1 >> 8)) >> 1) & 0x7f7f7f7f;
    temp_v2 = (((temp_v2 >> 0x10) + temp_v3 * 0x1010000 + (temp_v2 >> 8)) >> 1) & 0x7f7f7f7f;
    temp_v3 = (((temp_v3 >> 0x10) + ((unsigned short)((unsigned short)puVar1[0x104] >> 1) & 0x7f7f7f7f) * 0x1010000 +
             (temp_v3 >> 8)) >> 1) & 0x7f7f7f7f;
    param_2[0x80] = temp_v4 + temp_v0;
    param_2[0x81] = temp_v5 + temp_v1;
    param_2[0x82] = temp_v6 + temp_v2;
    param_2[0x83] = temp_v7 + temp_v3;
    param_2 = param_2 + 0x100;
    param_3 = param_3 - 2;
    puVar1 = puVar1 + 0x100;
  } while (param_3 != 0);
  return;
}
