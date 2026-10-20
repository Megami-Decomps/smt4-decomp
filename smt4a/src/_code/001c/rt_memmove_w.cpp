/* NON_MATCHING: romwright 0.5.0 decompilation of `rt_memmove_w` (_code @ 0x1c5370, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int HintPreloadData(unsigned int *);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: HintPreloadData (CALLOTHER). */


unsigned long long rt_memmove_w(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *pbVar1;
  unsigned int *puVar2;
  unsigned char *pbVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char *pbVar21;
  
  temp_v2 = (int)param_1 - (int)param_2;
  temp_v13 = temp_v2 == 0;
  if (param_2 <= param_1) {
    temp_v13 = param_3 == temp_v2;
  }
  if ((param_2 <= param_1 && temp_v2 <= param_3) && !temp_v13) {
    pbVar1 = (unsigned char *)((int)param_1 + param_3);
    temp_v13 = ((unsigned int)pbVar1 & 3) == 0;
    pbVar3 = (unsigned char *)((int)param_2 + param_3);
    do {
      if (!temp_v13) {
        param_3 = param_3 - 1;
        pbVar3 = pbVar3 + -1;
        pbVar1 = pbVar1 + -1;
        *pbVar1 = *pbVar3;
      }
      temp_v13 = ((unsigned int)pbVar1 & 3) == 0;
    } while (!temp_v13);
    while (temp_v2 = param_3 - 0x10, param_3 >= 0x10) {
      pbVar21 = pbVar3 + -4;
      temp_v12 = *(int *)(pbVar3 + -8);
      temp_v4 = *(int *)(pbVar3 + -0xc);
      pbVar3 = pbVar3 + -0x10;
      temp_v3 = *(int *)pbVar3;
      *(int *)(pbVar1 + -4) = *(int *)pbVar21;
      *(int *)(pbVar1 + -8) = temp_v12;
      *(int *)(pbVar1 + -0xc) = temp_v4;
      pbVar1 = pbVar1 + -0x10;
      *(int *)pbVar1 = temp_v3;
      param_3 = temp_v2;
    }
    temp_v3 = param_3 << 0x1d;
    temp_v13 = temp_v3 < 0;
    if ((unsigned char)((unsigned char)(temp_v2 >> 3) & 1)) {
      pbVar21 = pbVar3 + -4;
      pbVar3 = pbVar3 + -8;
      temp_v3 = *(int *)pbVar3;
      *(int *)(pbVar1 + -4) = *(int *)pbVar21;
      pbVar1 = pbVar1 + -8;
      *(int *)pbVar1 = temp_v3;
    }
    if (temp_v13) {
      pbVar3 = pbVar3 + -4;
      temp_v3 = *(int *)pbVar3;
      pbVar1 = pbVar1 + -4;
      *(int *)pbVar1 = temp_v3;
    }
    temp_v1 = (unsigned short)temp_v3;
    if ((temp_v2 & 3) == 0) {
      return romwright_piece_4_4(pbVar3,pbVar1);
    }
    temp_v14 = (unsigned char)((unsigned char)(temp_v2 >> 1) & 1);
    param_3 = param_3 << 0x1f;
    temp_v13 = (int)param_3 < 0;
    if (temp_v14) {
      pbVar3 = pbVar3 + -2;
      temp_v1 = *(unsigned short *)pbVar3;
    }
    if (temp_v13) {
      param_3 = (unsigned int)pbVar3[-1];
    }
    if (temp_v14) {
      pbVar1 = pbVar1 + -2;
      *(unsigned short *)pbVar1 = temp_v1;
    }
    if (temp_v13) {
      pbVar1[-1] = (unsigned char)param_3;
    }
    return romwright_piece_4_4(pbVar3,pbVar1);
  }
  temp_v0 = param_3 - 0x20;
  if (param_3 >= 0x20) {
    temp_v2 = *param_2;
    temp_v5 = param_2[1];
    temp_v6 = param_2[2];
    temp_v7 = param_2[3];
    HintPreloadData(param_2 + 0x14);
    temp_v8 = param_2[4];
    temp_v9 = param_2[5];
    temp_v10 = param_2[6];
    temp_v11 = param_2[7];
    param_2 = param_2 + 8;
    while( 1 ) {
      *param_1 = temp_v2;
      param_1[1] = temp_v5;
      param_1[2] = temp_v6;
      param_1[3] = temp_v7;
      temp_v13 = temp_v0 >= 0x20;
      temp_v0 = temp_v0 - 0x20;
      param_1[4] = temp_v8;
      param_1[5] = temp_v9;
      param_1[6] = temp_v10;
      param_1[7] = temp_v11;
      param_1 = param_1 + 8;
      if (temp_v13) {
        temp_v2 = *param_2;
        temp_v5 = param_2[1];
        temp_v6 = param_2[2];
        temp_v7 = param_2[3];
        param_2 = param_2 + 4;
      }
      HintPreloadData(param_2 + 0x10);
      if (!temp_v13) break;
      temp_v8 = *param_2;
      temp_v9 = param_2[1];
      temp_v10 = param_2[2];
      temp_v11 = param_2[3];
      param_2 = param_2 + 4;
    }
  }
  if ((unsigned char)((unsigned char)(temp_v0 >> 4) & 1)) {
    temp_v2 = *param_2;
    temp_v5 = param_2[1];
    temp_v6 = param_2[2];
    temp_v7 = param_2[3];
    param_2 = param_2 + 4;
    *param_1 = temp_v2;
    param_1[1] = temp_v5;
    param_1[2] = temp_v6;
    param_1[3] = temp_v7;
    param_1 = param_1 + 4;
  }
  if ((int)(temp_v0 << 0x1c) < 0) {
    temp_v2 = *param_2;
    temp_v5 = param_2[1];
    param_2 = param_2 + 2;
    *param_1 = temp_v2;
    param_1[1] = temp_v5;
    param_1 = param_1 + 2;
  }
  puVar2 = param_1;
  puVar5 = param_2;
  if ((unsigned char)((unsigned char)(temp_v0 >> 2) & 1)) {
    puVar5 = param_2 + 1;
    temp_v2 = *param_2;
    puVar2 = param_1 + 1;
    *param_1 = temp_v2;
  }
  temp_v1 = (unsigned short)temp_v2;
  if ((temp_v0 & 3) == 0) {
    return romwright_piece_4_4(puVar5,puVar2);
  }
  temp_v14 = (unsigned char)((unsigned char)(temp_v0 >> 1) & 1);
  temp_v0 = temp_v0 << 0x1f;
  temp_v13 = (int)temp_v0 < 0;
  puVar4 = puVar5;
  if (temp_v14) {
    puVar4 = (unsigned int *)((int)puVar5 + 2);
    temp_v1 = (unsigned short)*puVar5;
  }
  puVar5 = puVar4;
  if (temp_v13) {
    puVar5 = (unsigned int *)((int)puVar4 + 1);
    temp_v0 = (unsigned int)(unsigned char)*puVar4;
  }
  puVar4 = puVar2;
  if (temp_v14) {
    puVar4 = (unsigned int *)((int)puVar2 + 2);
    *(unsigned short *)puVar2 = temp_v1;
  }
  puVar2 = puVar4;
  if (temp_v13) {
    puVar2 = (unsigned int *)((int)puVar4 + 1);
    *(unsigned char *)puVar4 = (unsigned char)temp_v0;
  }
  return romwright_piece_4_4(puVar5,puVar2);
}

} /* extern "C" */
