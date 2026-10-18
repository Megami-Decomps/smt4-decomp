/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd06c` (_code @ 0x2bd06c, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002bd06c_arg1 fn_002bd06c_arg1;
struct fn_002bd06c_arg1 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x20];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
};

extern int DAT_00433158; /* 0x433158 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: HintPreloadData (CALLOTHER). */


unsigned long long FUN_002bd06c(unsigned int param_1,fn_002bd06c_arg1 *param_2,unsigned int param_3,unsigned char param_4)

{
/* irregular: irregular input(s): in_r12; 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned char *pbVar5;
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int unaff_r7;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char in_r12;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  unsigned char temp_v12;
  
  puVar3 = *(unsigned int **)(DAT_00433158 + 0x368);
  if (puVar3 == (unsigned int *)0x0) {
    return romwright_piece_4_4(DAT_00433158 >> 0x20,DAT_00433158);
  }
  puVar1 = (unsigned int *)(DAT_00433158 << (unaff_r7 & 0xff));
  if (param_3 >= 4) {
    temp_v9 = (unsigned int)puVar1 & 3;
    puVar4 = puVar1;
    temp_v10 = temp_v9;
    if (temp_v9 != 0) {
      temp_v0 = (unsigned char)*puVar3;
      puVar4 = (unsigned int *)((int)puVar3 + 1);
      if (temp_v9 < 3) {
        puVar4 = (unsigned int *)((int)puVar3 + 2);
        temp_v10 = (unsigned int)*(unsigned char *)((int)puVar3 + 1);
      }
      *(unsigned char *)puVar1 = temp_v0;
      puVar3 = puVar4;
      if (temp_v9 < 2) {
        puVar3 = (unsigned int *)((int)puVar4 + 1);
        temp_v0 = (unsigned char)*puVar4;
      }
      puVar2 = (unsigned int *)((int)puVar1 + 1);
      if (temp_v9 < 3) {
        puVar2 = (unsigned int *)((int)puVar1 + 2);
        *(unsigned char *)((int)puVar1 + 1) = (unsigned char)temp_v10;
      }
      param_3 = (param_3 + temp_v9) - 4;
      puVar4 = puVar2;
      if (temp_v9 < 2) {
        puVar4 = (unsigned int *)((int)puVar2 + 1);
        *(unsigned char *)puVar2 = temp_v0;
      }
    }
    temp_v9 = (unsigned int)puVar3 & 3;
    if (temp_v9 == 0) {
      temp_v10 = param_3 - 0x20;
      temp_v9 = 0;
      if (param_3 >= 0x20) {
        temp_v9 = *puVar3;
        temp_v2 = puVar3[1];
        temp_v3 = puVar3[2];
        temp_v4 = puVar3[3];
        HintPreloadData(puVar3 + 0x14);
        temp_v5 = puVar3[4];
        temp_v6 = puVar3[5];
        temp_v7 = puVar3[6];
        temp_v8 = puVar3[7];
        puVar3 = puVar3 + 8;
        while( 1 ) {
          *puVar4 = temp_v9;
          puVar4[1] = temp_v2;
          puVar4[2] = temp_v3;
          puVar4[3] = temp_v4;
          temp_v11 = temp_v10 >= 0x20;
          temp_v10 = temp_v10 - 0x20;
          puVar4[4] = temp_v5;
          puVar4[5] = temp_v6;
          puVar4[6] = temp_v7;
          puVar4[7] = temp_v8;
          puVar4 = puVar4 + 8;
          if (temp_v11) {
            temp_v9 = *puVar3;
            temp_v2 = puVar3[1];
            temp_v3 = puVar3[2];
            temp_v4 = puVar3[3];
            puVar3 = puVar3 + 4;
          }
          HintPreloadData(puVar3 + 0x10);
          if (!temp_v11) break;
          temp_v5 = *puVar3;
          temp_v6 = puVar3[1];
          temp_v7 = puVar3[2];
          temp_v8 = puVar3[3];
          puVar3 = puVar3 + 4;
        }
      }
      if ((unsigned char)((unsigned char)(temp_v10 >> 4) & 1)) {
        temp_v9 = *puVar3;
        temp_v2 = puVar3[1];
        temp_v3 = puVar3[2];
        temp_v4 = puVar3[3];
        puVar3 = puVar3 + 4;
        *puVar4 = temp_v9;
        puVar4[1] = temp_v2;
        puVar4[2] = temp_v3;
        puVar4[3] = temp_v4;
        puVar4 = puVar4 + 4;
      }
      if ((int)(temp_v10 << 0x1c) < 0) {
        temp_v9 = *puVar3;
        temp_v2 = puVar3[1];
        puVar3 = puVar3 + 2;
        *puVar4 = temp_v9;
        puVar4[1] = temp_v2;
        puVar4 = puVar4 + 2;
      }
      puVar2 = puVar4;
      puVar1 = puVar3;
      if ((unsigned char)((unsigned char)(temp_v10 >> 2) & 1)) {
        puVar1 = puVar3 + 1;
        temp_v9 = *puVar3;
        puVar2 = puVar4 + 1;
        *puVar4 = temp_v9;
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
      puVar4 = puVar3;
      if (temp_v11) {
        puVar4 = (unsigned int *)((int)puVar3 + 1);
        *(unsigned char *)puVar3 = (unsigned char)temp_v10;
      }
      return romwright_piece_4_4(puVar1,puVar4);
    }
    while( 1 ) {
      in_r12 = (unsigned char)temp_v10;
      if (param_3 < 8) break;
      puVar1 = puVar3 + 1;
      temp_v9 = *puVar3;
      puVar3 = puVar3 + 2;
      temp_v10 = *puVar1;
      *puVar4 = temp_v9;
      puVar4[1] = temp_v10;
      puVar4 = puVar4 + 2;
      param_3 = param_3 - 8;
    }
    param_3 = param_3 - 4;
    puVar1 = puVar4;
    if (-1 < (int)param_3) {
      temp_v9 = *puVar3;
      puVar1 = puVar4 + 1;
      *puVar4 = temp_v9;
      puVar3 = puVar3 + 1;
    }
    param_4 = (unsigned char)temp_v9;
  }
  temp_v12 = (unsigned char)((unsigned char)(param_3 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  temp_v11 = (int)param_3 < 0;
  if (temp_v12) {
    pbVar5 = (unsigned char *)((int)puVar3 + 1);
    param_4 = (unsigned char)*puVar3;
    puVar3 = (unsigned int *)((int)puVar3 + 2);
    in_r12 = *pbVar5;
  }
  puVar4 = puVar3;
  if (temp_v11) {
    puVar4 = (unsigned int *)((int)puVar3 + 1);
    param_3 = (unsigned int)(unsigned char)*puVar3;
  }
  if (temp_v12) {
    pbVar5 = (unsigned char *)((int)puVar1 + 1);
    *(unsigned char *)puVar1 = param_4;
    puVar1 = (unsigned int *)((int)puVar1 + 2);
    *pbVar5 = in_r12;
  }
  puVar3 = puVar1;
  if (temp_v11) {
    puVar3 = (unsigned int *)((int)puVar1 + 1);
    *(unsigned char *)puVar1 = (unsigned char)param_3;
  }
  return romwright_piece_4_4(puVar4,puVar3);
}
