/* NON_MATCHING: romwright 0.5.0 decompilation of `rt_memcpy` (_code @ 0x2e5a08, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int HintPreloadData(unsigned int *);

/* Unsupported intrinsic, declaration required: HintPreloadData (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long rt_memcpy(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned char param_4)

{
/* irregular: irregular input(s): in_r12; 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char *pbVar4;
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char in_r12;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  unsigned char temp_v12;
  
  if (param_3 >= 4) {
    temp_v9 = (unsigned int)param_1 & 3;
    puVar3 = param_1;
    temp_v10 = temp_v9;
    if (temp_v9 != 0) {
      temp_v0 = (unsigned char)*param_2;
      puVar3 = (unsigned int *)((int)param_2 + 1);
      if (temp_v9 < 3) {
        puVar3 = (unsigned int *)((int)param_2 + 2);
        temp_v10 = (unsigned int)*(unsigned char *)((int)param_2 + 1);
      }
      *(unsigned char *)param_1 = temp_v0;
      param_2 = puVar3;
      if (temp_v9 < 2) {
        param_2 = (unsigned int *)((int)puVar3 + 1);
        temp_v0 = (unsigned char)*puVar3;
      }
      puVar1 = (unsigned int *)((int)param_1 + 1);
      if (temp_v9 < 3) {
        puVar1 = (unsigned int *)((int)param_1 + 2);
        *(unsigned char *)((int)param_1 + 1) = (unsigned char)temp_v10;
      }
      param_3 = (param_3 + temp_v9) - 4;
      puVar3 = puVar1;
      if (temp_v9 < 2) {
        puVar3 = (unsigned int *)((int)puVar1 + 1);
        *(unsigned char *)puVar1 = temp_v0;
      }
    }
    temp_v9 = (unsigned int)param_2 & 3;
    if (temp_v9 == 0) {
      temp_v10 = param_3 - 0x20;
      temp_v9 = 0;
      if (param_3 >= 0x20) {
        temp_v9 = *param_2;
        temp_v2 = param_2[1];
        temp_v3 = param_2[2];
        temp_v4 = param_2[3];
        HintPreloadData(param_2 + 0x14);
        temp_v5 = param_2[4];
        temp_v6 = param_2[5];
        temp_v7 = param_2[6];
        temp_v8 = param_2[7];
        param_2 = param_2 + 8;
        while( 1 ) {
          *puVar3 = temp_v9;
          puVar3[1] = temp_v2;
          puVar3[2] = temp_v3;
          puVar3[3] = temp_v4;
          temp_v11 = temp_v10 >= 0x20;
          temp_v10 = temp_v10 - 0x20;
          puVar3[4] = temp_v5;
          puVar3[5] = temp_v6;
          puVar3[6] = temp_v7;
          puVar3[7] = temp_v8;
          puVar3 = puVar3 + 8;
          if (temp_v11) {
            temp_v9 = *param_2;
            temp_v2 = param_2[1];
            temp_v3 = param_2[2];
            temp_v4 = param_2[3];
            param_2 = param_2 + 4;
          }
          HintPreloadData(param_2 + 0x10);
          if (!temp_v11) break;
          temp_v5 = *param_2;
          temp_v6 = param_2[1];
          temp_v7 = param_2[2];
          temp_v8 = param_2[3];
          param_2 = param_2 + 4;
        }
      }
      if ((unsigned char)((unsigned char)(temp_v10 >> 4) & 1)) {
        temp_v9 = *param_2;
        temp_v2 = param_2[1];
        temp_v3 = param_2[2];
        temp_v4 = param_2[3];
        param_2 = param_2 + 4;
        *puVar3 = temp_v9;
        puVar3[1] = temp_v2;
        puVar3[2] = temp_v3;
        puVar3[3] = temp_v4;
        puVar3 = puVar3 + 4;
      }
      if ((int)(temp_v10 << 0x1c) < 0) {
        temp_v9 = *param_2;
        temp_v2 = param_2[1];
        param_2 = param_2 + 2;
        *puVar3 = temp_v9;
        puVar3[1] = temp_v2;
        puVar3 = puVar3 + 2;
      }
      puVar2 = puVar3;
      puVar1 = param_2;
      if ((unsigned char)((unsigned char)(temp_v10 >> 2) & 1)) {
        puVar1 = param_2 + 1;
        temp_v9 = *param_2;
        puVar2 = puVar3 + 1;
        *puVar3 = temp_v9;
      }
      temp_v1 = (unsigned short)temp_v9;
      if ((temp_v10 & 3) == 0) {
        return romwright_piece_4_4(puVar1,puVar2);
      }
      temp_v12 = (unsigned char)((unsigned char)(temp_v10 >> 1) & 1);
      temp_v10 = temp_v10 << 0x1f;
      temp_v11 = (int)temp_v10 < 0;
      puVar3 = puVar1;
      if (temp_v12) {
        puVar3 = (unsigned int *)((int)puVar1 + 2);
        temp_v1 = (unsigned short)*puVar1;
      }
      puVar1 = puVar3;
      if (temp_v11) {
        puVar1 = (unsigned int *)((int)puVar3 + 1);
        temp_v10 = (unsigned int)(unsigned char)*puVar3;
      }
      puVar3 = puVar2;
      if (temp_v12) {
        puVar3 = (unsigned int *)((int)puVar2 + 2);
        *(unsigned short *)puVar2 = temp_v1;
      }
      puVar2 = puVar3;
      if (temp_v11) {
        puVar2 = (unsigned int *)((int)puVar3 + 1);
        *(unsigned char *)puVar3 = (unsigned char)temp_v10;
      }
      return romwright_piece_4_4(puVar1,puVar2);
    }
    while( 1 ) {
      in_r12 = (unsigned char)temp_v10;
      if (param_3 < 8) break;
      puVar1 = param_2 + 1;
      temp_v9 = *param_2;
      param_2 = param_2 + 2;
      temp_v10 = *puVar1;
      *puVar3 = temp_v9;
      puVar3[1] = temp_v10;
      puVar3 = puVar3 + 2;
      param_3 = param_3 - 8;
    }
    param_3 = param_3 - 4;
    param_1 = puVar3;
    if (-1 < (int)param_3) {
      temp_v9 = *param_2;
      param_1 = puVar3 + 1;
      *puVar3 = temp_v9;
      param_2 = param_2 + 1;
    }
    param_4 = (unsigned char)temp_v9;
  }
  temp_v12 = (unsigned char)((unsigned char)(param_3 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  temp_v11 = (int)param_3 < 0;
  if (temp_v12) {
    pbVar4 = (unsigned char *)((int)param_2 + 1);
    param_4 = (unsigned char)*param_2;
    param_2 = (unsigned int *)((int)param_2 + 2);
    in_r12 = *pbVar4;
  }
  puVar3 = param_2;
  if (temp_v11) {
    puVar3 = (unsigned int *)((int)param_2 + 1);
    param_3 = (unsigned int)(unsigned char)*param_2;
  }
  if (temp_v12) {
    pbVar4 = (unsigned char *)((int)param_1 + 1);
    *(unsigned char *)param_1 = param_4;
    param_1 = (unsigned int *)((int)param_1 + 2);
    *pbVar4 = in_r12;
  }
  puVar1 = param_1;
  if (temp_v11) {
    puVar1 = (unsigned int *)((int)param_1 + 1);
    *(unsigned char *)param_1 = (unsigned char)param_3;
  }
  return romwright_piece_4_4(puVar3,puVar1);
}

} /* extern "C" */
