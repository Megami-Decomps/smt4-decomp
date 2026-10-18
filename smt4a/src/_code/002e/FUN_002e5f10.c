/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e5f10` (_code @ 0x2e5f10, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: HintPreloadData (CALLOTHER). */


unsigned long long FUN_002e5f10(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_r12; 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char *pbVar4;
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int in_r12;
  unsigned char temp_v12;
  unsigned char temp_v13;
  
  temp_v0 = (unsigned char)in_r12;
  temp_v4 = (int)param_1 - (int)param_2;
  temp_v12 = temp_v4 == 0;
  if (param_2 <= param_1) {
    temp_v12 = param_3 == temp_v4;
  }
  if ((param_2 <= param_1 && temp_v4 <= param_3) && !temp_v12) {
    param_1 = (unsigned int *)((int)param_1 + param_3);
    param_2 = (unsigned int *)((int)param_2 + param_3);
    if (param_3 >= 4) {
      temp_v12 = ((unsigned int)param_1 & 3) == 0;
      do {
        if (!temp_v12) {
          param_2 = (unsigned int *)((int)param_2 - 1);
          param_3 = param_3 - 1;
          param_1 = (unsigned int *)((int)param_1 - 1);
          *(unsigned char *)param_1 = *(unsigned char *)param_2;
        }
        temp_v12 = ((unsigned int)param_1 & 3) == 0;
      } while (!temp_v12);
      temp_v4 = (unsigned int)param_2 & 3;
      if (temp_v4 == 0) {
        while (temp_v4 = param_3 - 0x10, param_3 >= 0x10) {
          puVar3 = param_2 + -1;
          temp_v11 = param_2[-2];
          temp_v5 = param_2[-3];
          param_2 = param_2 + -4;
          temp_v3 = *param_2;
          param_1[-1] = *puVar3;
          param_1[-2] = temp_v11;
          param_1[-3] = temp_v5;
          param_1 = param_1 + -4;
          *param_1 = temp_v3;
          param_3 = temp_v4;
        }
        temp_v3 = param_3 << 0x1d;
        temp_v12 = (int)temp_v3 < 0;
        if ((unsigned char)((unsigned char)(temp_v4 >> 3) & 1)) {
          puVar3 = param_2 + -1;
          param_2 = param_2 + -2;
          temp_v3 = *param_2;
          param_1[-1] = *puVar3;
          param_1 = param_1 + -2;
          *param_1 = temp_v3;
        }
        if (temp_v12) {
          param_2 = param_2 + -1;
          temp_v3 = *param_2;
          param_1 = param_1 + -1;
          *param_1 = temp_v3;
        }
        temp_v2 = (unsigned short)temp_v3;
        if ((temp_v4 & 3) == 0) {
          return romwright_piece_4_4(param_2,param_1);
        }
        temp_v13 = (unsigned char)((unsigned char)(temp_v4 >> 1) & 1);
        param_3 = param_3 << 0x1f;
        temp_v12 = (int)param_3 < 0;
        if (temp_v13) {
          param_2 = (unsigned int *)((int)param_2 - 2);
          temp_v2 = *(unsigned short *)param_2;
        }
        if (temp_v12) {
          param_3 = (unsigned int)*(unsigned char *)((int)param_2 - 1);
        }
        if (temp_v13) {
          param_1 = (unsigned int *)((int)param_1 - 2);
          *(unsigned short *)param_1 = temp_v2;
        }
        if (temp_v12) {
          *(unsigned char *)((int)param_1 - 1) = (unsigned char)param_3;
        }
        return romwright_piece_4_4(param_2,param_1);
      }
      while( 1 ) {
        temp_v0 = (unsigned char)in_r12;
        if (param_3 < 8) break;
        temp_v4 = param_2[-1];
        param_2 = param_2 + -2;
        in_r12 = *param_2;
        param_1[-1] = temp_v4;
        param_1 = param_1 + -2;
        *param_1 = in_r12;
        param_3 = param_3 - 8;
      }
      param_3 = param_3 - 4;
      if (-1 < (int)param_3) {
        param_2 = param_2 + -1;
        temp_v4 = *param_2;
        param_1 = param_1 + -1;
        *param_1 = temp_v4;
      }
    }
    temp_v1 = (unsigned char)temp_v4;
    temp_v13 = (unsigned char)((unsigned char)(param_3 >> 1) & 1);
    param_3 = param_3 << 0x1f;
    temp_v12 = (int)param_3 < 0;
    if (temp_v13) {
      temp_v1 = *(unsigned char *)((int)param_2 - 1);
      param_2 = (unsigned int *)((int)param_2 - 2);
      temp_v0 = *(unsigned char *)param_2;
    }
    if (temp_v12) {
      param_3 = (unsigned int)*(unsigned char *)((int)param_2 - 1);
    }
    if (temp_v13) {
      *(unsigned char *)((int)param_1 - 1) = temp_v1;
      param_1 = (unsigned int *)((int)param_1 - 2);
      *(unsigned char *)param_1 = temp_v0;
    }
    if (temp_v12) {
      *(unsigned char *)((int)param_1 - 1) = (unsigned char)param_3;
    }
    return romwright_piece_4_4(param_2,param_1);
  }
  puVar3 = param_2;
  if (param_3 >= 4) {
    temp_v4 = (unsigned int)param_1 & 3;
    puVar1 = param_1;
    temp_v3 = temp_v4;
    if (temp_v4 != 0) {
      temp_v0 = (unsigned char)*param_2;
      puVar3 = (unsigned int *)((int)param_2 + 1);
      if (temp_v4 < 3) {
        puVar3 = (unsigned int *)((int)param_2 + 2);
        temp_v3 = (unsigned int)*(unsigned char *)((int)param_2 + 1);
      }
      *(unsigned char *)param_1 = temp_v0;
      param_2 = puVar3;
      if (temp_v4 < 2) {
        param_2 = (unsigned int *)((int)puVar3 + 1);
        temp_v0 = (unsigned char)*puVar3;
      }
      puVar3 = (unsigned int *)((int)param_1 + 1);
      if (temp_v4 < 3) {
        puVar3 = (unsigned int *)((int)param_1 + 2);
        *(unsigned char *)((int)param_1 + 1) = (unsigned char)temp_v3;
      }
      param_3 = (param_3 + temp_v4) - 4;
      puVar1 = puVar3;
      if (temp_v4 < 2) {
        puVar1 = (unsigned int *)((int)puVar3 + 1);
        *(unsigned char *)puVar3 = temp_v0;
      }
    }
    temp_v4 = (unsigned int)param_2 & 3;
    if (temp_v4 == 0) {
      temp_v4 = param_3 - 0x20;
      temp_v3 = 0;
      if (param_3 >= 0x20) {
        temp_v3 = *param_2;
        temp_v5 = param_2[1];
        temp_v11 = param_2[2];
        temp_v6 = param_2[3];
        HintPreloadData(param_2 + 0x14);
        temp_v7 = param_2[4];
        temp_v8 = param_2[5];
        temp_v9 = param_2[6];
        temp_v10 = param_2[7];
        param_2 = param_2 + 8;
        while( 1 ) {
          *puVar1 = temp_v3;
          puVar1[1] = temp_v5;
          puVar1[2] = temp_v11;
          puVar1[3] = temp_v6;
          temp_v12 = temp_v4 >= 0x20;
          temp_v4 = temp_v4 - 0x20;
          puVar1[4] = temp_v7;
          puVar1[5] = temp_v8;
          puVar1[6] = temp_v9;
          puVar1[7] = temp_v10;
          puVar1 = puVar1 + 8;
          if (temp_v12) {
            temp_v3 = *param_2;
            temp_v5 = param_2[1];
            temp_v11 = param_2[2];
            temp_v6 = param_2[3];
            param_2 = param_2 + 4;
          }
          HintPreloadData(param_2 + 0x10);
          if (!temp_v12) break;
          temp_v7 = *param_2;
          temp_v8 = param_2[1];
          temp_v9 = param_2[2];
          temp_v10 = param_2[3];
          param_2 = param_2 + 4;
        }
      }
      if ((unsigned char)((unsigned char)(temp_v4 >> 4) & 1)) {
        temp_v3 = *param_2;
        temp_v5 = param_2[1];
        temp_v11 = param_2[2];
        temp_v6 = param_2[3];
        param_2 = param_2 + 4;
        *puVar1 = temp_v3;
        puVar1[1] = temp_v5;
        puVar1[2] = temp_v11;
        puVar1[3] = temp_v6;
        puVar1 = puVar1 + 4;
      }
      if ((int)(temp_v4 << 0x1c) < 0) {
        temp_v3 = *param_2;
        temp_v5 = param_2[1];
        param_2 = param_2 + 2;
        *puVar1 = temp_v3;
        puVar1[1] = temp_v5;
        puVar1 = puVar1 + 2;
      }
      puVar2 = puVar1;
      puVar3 = param_2;
      if ((unsigned char)((unsigned char)(temp_v4 >> 2) & 1)) {
        puVar3 = param_2 + 1;
        temp_v3 = *param_2;
        puVar2 = puVar1 + 1;
        *puVar1 = temp_v3;
      }
      temp_v2 = (unsigned short)temp_v3;
      if ((temp_v4 & 3) == 0) {
        return romwright_piece_4_4(puVar3,puVar2);
      }
      temp_v13 = (unsigned char)((unsigned char)(temp_v4 >> 1) & 1);
      temp_v4 = temp_v4 << 0x1f;
      temp_v12 = (int)temp_v4 < 0;
      puVar1 = puVar3;
      if (temp_v13) {
        puVar1 = (unsigned int *)((int)puVar3 + 2);
        temp_v2 = (unsigned short)*puVar3;
      }
      puVar3 = puVar1;
      if (temp_v12) {
        puVar3 = (unsigned int *)((int)puVar1 + 1);
        temp_v4 = (unsigned int)(unsigned char)*puVar1;
      }
      puVar1 = puVar2;
      if (temp_v13) {
        puVar1 = (unsigned int *)((int)puVar2 + 2);
        *(unsigned short *)puVar2 = temp_v2;
      }
      puVar2 = puVar1;
      if (temp_v12) {
        puVar2 = (unsigned int *)((int)puVar1 + 1);
        *(unsigned char *)puVar1 = (unsigned char)temp_v4;
      }
      return romwright_piece_4_4(puVar3,puVar2);
    }
    while( 1 ) {
      temp_v0 = (unsigned char)temp_v3;
      if (param_3 < 8) break;
      puVar3 = param_2 + 1;
      temp_v4 = *param_2;
      param_2 = param_2 + 2;
      temp_v3 = *puVar3;
      *puVar1 = temp_v4;
      puVar1[1] = temp_v3;
      puVar1 = puVar1 + 2;
      param_3 = param_3 - 8;
    }
    param_3 = param_3 - 4;
    param_1 = puVar1;
    puVar3 = param_2;
    if (-1 < (int)param_3) {
      puVar3 = param_2 + 1;
      temp_v4 = *param_2;
      param_1 = puVar1 + 1;
      *puVar1 = temp_v4;
    }
  }
  temp_v1 = (unsigned char)temp_v4;
  temp_v13 = (unsigned char)((unsigned char)(param_3 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  temp_v12 = (int)param_3 < 0;
  if (temp_v13) {
    pbVar4 = (unsigned char *)((int)puVar3 + 1);
    temp_v1 = (unsigned char)*puVar3;
    puVar3 = (unsigned int *)((int)puVar3 + 2);
    temp_v0 = *pbVar4;
  }
  puVar1 = puVar3;
  if (temp_v12) {
    puVar1 = (unsigned int *)((int)puVar3 + 1);
    param_3 = (unsigned int)(unsigned char)*puVar3;
  }
  if (temp_v13) {
    pbVar4 = (unsigned char *)((int)param_1 + 1);
    *(unsigned char *)param_1 = temp_v1;
    param_1 = (unsigned int *)((int)param_1 + 2);
    *pbVar4 = temp_v0;
  }
  puVar3 = param_1;
  if (temp_v12) {
    puVar3 = (unsigned int *)((int)param_1 + 1);
    *(unsigned char *)param_1 = (unsigned char)param_3;
  }
  return romwright_piece_4_4(puVar1,puVar3);
}
