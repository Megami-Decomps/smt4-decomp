/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e59f8` (_code @ 0x2e59f8, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: HintPreloadData (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long FUN_002e59f8(unsigned char *param_1,unsigned char *param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_r12; 1 native warning(s); review required */
  unsigned char *pbVar1;
  unsigned char *pbVar2;
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
  unsigned int temp_v9;
  unsigned char in_r12;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  
  pbVar2 = param_2;
  pbVar4 = param_1;
  if (param_3 >= 4) {
    temp_v10 = (unsigned int)param_2 & 3;
    pbVar1 = param_2;
    temp_v11 = temp_v10;
    if (temp_v10 != 0) {
      temp_v0 = *param_1;
      pbVar2 = param_1 + 1;
      if (temp_v10 < 3) {
        pbVar2 = param_1 + 2;
        temp_v11 = (unsigned int)param_1[1];
      }
      *param_2 = temp_v0;
      param_1 = pbVar2;
      if (temp_v10 < 2) {
        param_1 = pbVar2 + 1;
        temp_v0 = *pbVar2;
      }
      pbVar2 = param_2 + 1;
      if (temp_v10 < 3) {
        pbVar2 = param_2 + 2;
        param_2[1] = (unsigned char)temp_v11;
      }
      param_3 = (param_3 + temp_v10) - 4;
      pbVar1 = pbVar2;
      if (temp_v10 < 2) {
        pbVar1 = pbVar2 + 1;
        *pbVar2 = temp_v0;
      }
    }
    param_2 = (unsigned char *)((unsigned int)param_1 & 3);
    if (param_2 == (unsigned char *)0x0) {
      temp_v11 = param_3 - 0x20;
      temp_v2 = 0;
      if (param_3 >= 0x20) {
        temp_v2 = *(unsigned int *)param_1;
        temp_v3 = *(unsigned int *)(param_1 + 4);
        temp_v4 = *(unsigned int *)(param_1 + 8);
        temp_v5 = *(unsigned int *)(param_1 + 0xc);
        HintPreloadData(param_1 + 0x50);
        temp_v6 = *(unsigned int *)(param_1 + 0x10);
        temp_v7 = *(unsigned int *)(param_1 + 0x14);
        temp_v8 = *(unsigned int *)(param_1 + 0x18);
        temp_v9 = *(unsigned int *)(param_1 + 0x1c);
        param_1 = param_1 + 0x20;
        while( 1 ) {
          *(unsigned int *)pbVar1 = temp_v2;
          *(unsigned int *)(pbVar1 + 4) = temp_v3;
          *(unsigned int *)(pbVar1 + 8) = temp_v4;
          *(unsigned int *)(pbVar1 + 0xc) = temp_v5;
          temp_v12 = temp_v11 >= 0x20;
          temp_v11 = temp_v11 - 0x20;
          *(unsigned int *)(pbVar1 + 0x10) = temp_v6;
          *(unsigned int *)(pbVar1 + 0x14) = temp_v7;
          *(unsigned int *)(pbVar1 + 0x18) = temp_v8;
          *(unsigned int *)(pbVar1 + 0x1c) = temp_v9;
          pbVar1 = pbVar1 + 0x20;
          if (temp_v12) {
            temp_v2 = *(unsigned int *)param_1;
            temp_v3 = *(unsigned int *)(param_1 + 4);
            temp_v4 = *(unsigned int *)(param_1 + 8);
            temp_v5 = *(unsigned int *)(param_1 + 0xc);
            param_1 = param_1 + 0x10;
          }
          HintPreloadData(param_1 + 0x40);
          if (!temp_v12) break;
          temp_v6 = *(unsigned int *)param_1;
          temp_v7 = *(unsigned int *)(param_1 + 4);
          temp_v8 = *(unsigned int *)(param_1 + 8);
          temp_v9 = *(unsigned int *)(param_1 + 0xc);
          param_1 = param_1 + 0x10;
        }
      }
      if ((unsigned char)((unsigned char)(temp_v11 >> 4) & 1)) {
        temp_v2 = *(unsigned int *)param_1;
        temp_v3 = *(unsigned int *)(param_1 + 4);
        temp_v4 = *(unsigned int *)(param_1 + 8);
        temp_v5 = *(unsigned int *)(param_1 + 0xc);
        param_1 = param_1 + 0x10;
        *(unsigned int *)pbVar1 = temp_v2;
        *(unsigned int *)(pbVar1 + 4) = temp_v3;
        *(unsigned int *)(pbVar1 + 8) = temp_v4;
        *(unsigned int *)(pbVar1 + 0xc) = temp_v5;
        pbVar1 = pbVar1 + 0x10;
      }
      if ((int)(temp_v11 << 0x1c) < 0) {
        temp_v2 = *(unsigned int *)param_1;
        temp_v3 = *(unsigned int *)(param_1 + 4);
        param_1 = param_1 + 8;
        *(unsigned int *)pbVar1 = temp_v2;
        *(unsigned int *)(pbVar1 + 4) = temp_v3;
        pbVar1 = pbVar1 + 8;
      }
      pbVar4 = pbVar1;
      pbVar2 = param_1;
      if ((unsigned char)((unsigned char)(temp_v11 >> 2) & 1)) {
        pbVar2 = param_1 + 4;
        temp_v2 = *(unsigned int *)param_1;
        pbVar4 = pbVar1 + 4;
        *(unsigned int *)pbVar1 = temp_v2;
      }
      temp_v1 = (unsigned short)temp_v2;
      if ((temp_v11 & 3) == 0) {
        return romwright_piece_4_4(pbVar2,pbVar4);
      }
      temp_v13 = (unsigned char)((unsigned char)(temp_v11 >> 1) & 1);
      temp_v11 = temp_v11 << 0x1f;
      temp_v12 = (int)temp_v11 < 0;
      pbVar1 = pbVar2;
      if (temp_v13) {
        pbVar1 = pbVar2 + 2;
        temp_v1 = *(unsigned short *)pbVar2;
      }
      pbVar2 = pbVar1;
      if (temp_v12) {
        pbVar2 = pbVar1 + 1;
        temp_v11 = (unsigned int)*pbVar1;
      }
      pbVar1 = pbVar4;
      if (temp_v13) {
        pbVar1 = pbVar4 + 2;
        *(unsigned short *)pbVar4 = temp_v1;
      }
      pbVar4 = pbVar1;
      if (temp_v12) {
        pbVar4 = pbVar1 + 1;
        *pbVar1 = (unsigned char)temp_v11;
      }
      return romwright_piece_4_4(pbVar2,pbVar4);
    }
    while( 1 ) {
      in_r12 = (unsigned char)temp_v11;
      if (param_3 < 8) break;
      puVar3 = (unsigned int *)(param_1 + 4);
      param_2 = *(unsigned char **)param_1;
      param_1 = param_1 + 8;
      temp_v11 = *puVar3;
      *(unsigned char **)pbVar1 = param_2;
      *(unsigned int *)(pbVar1 + 4) = temp_v11;
      pbVar1 = pbVar1 + 8;
      param_3 = param_3 - 8;
    }
    param_3 = param_3 - 4;
    pbVar2 = pbVar1;
    pbVar4 = param_1;
    if (-1 < (int)param_3) {
      pbVar4 = param_1 + 4;
      param_2 = *(unsigned char **)param_1;
      pbVar2 = pbVar1 + 4;
      *(unsigned char **)pbVar1 = param_2;
    }
  }
  temp_v0 = (unsigned char)param_2;
  temp_v13 = (unsigned char)((unsigned char)(param_3 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  temp_v12 = (int)param_3 < 0;
  if (temp_v13) {
    pbVar1 = pbVar4 + 1;
    temp_v0 = *pbVar4;
    pbVar4 = pbVar4 + 2;
    in_r12 = *pbVar1;
  }
  pbVar1 = pbVar4;
  if (temp_v12) {
    pbVar1 = pbVar4 + 1;
    param_3 = (unsigned int)*pbVar4;
  }
  if (temp_v13) {
    pbVar4 = pbVar2 + 1;
    *pbVar2 = temp_v0;
    pbVar2 = pbVar2 + 2;
    *pbVar4 = in_r12;
  }
  pbVar4 = pbVar2;
  if (temp_v12) {
    pbVar4 = pbVar2 + 1;
    *pbVar2 = (unsigned char)param_3;
  }
  return romwright_piece_4_4(pbVar1,pbVar4);
}
