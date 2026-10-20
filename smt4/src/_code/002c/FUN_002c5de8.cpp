/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5de8` (_code @ 0x2c5de8, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int HintPreloadData(unsigned int *);

typedef struct fn_002c5de8_arg0 fn_002c5de8_arg0;
struct fn_002c5de8_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    unsigned char pad_0x3c[0x34bc];
    unsigned char field_0x34f8; /* +0x34f8 */
    unsigned char field_0x34f9; /* +0x34f9 */
    unsigned char field_0x34fa; /* +0x34fa */
    unsigned char pad_0x34fb[0x39];
    undefined1 field_0x3534; /* +0x3534 */
    undefined1 field_0x3535; /* +0x3535 */
    undefined1 field_0x3536; /* +0x3536 */
    unsigned char pad_0x3537[0xc];
    undefined1 field_0x3543; /* +0x3543 */
    undefined1 field_0x3544; /* +0x3544 */
    undefined1 field_0x3545; /* +0x3545 */
};

/* Unsupported intrinsic, declaration required: HintPreloadData (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long FUN_002c5de8(fn_002c5de8_arg0 *param_1,unsigned int *param_2,int param_3,unsigned char param_4)

{
/* irregular: irregular input(s): in_r12; 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char *pbVar4;
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
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
  
  temp_v0 = param_3 * 2;
  puVar1 = (unsigned int *)&param_1->field_0x34f8;
  if (temp_v0 >= 4) {
    temp_v9 = (unsigned int)puVar1 & 3;
    puVar3 = puVar1;
    temp_v10 = temp_v9;
    if (temp_v9 != 0) {
      temp_v1 = (unsigned char)*param_2;
      puVar3 = (unsigned int *)((int)param_2 + 1);
      if (temp_v9 < 3) {
        puVar3 = (unsigned int *)((int)param_2 + 2);
        temp_v10 = (unsigned int)*(unsigned char *)((int)param_2 + 1);
      }
      *(unsigned char *)puVar1 = temp_v1;
      param_2 = puVar3;
      if (temp_v9 < 2) {
        param_2 = (unsigned int *)((int)puVar3 + 1);
        temp_v1 = (unsigned char)*puVar3;
      }
      puVar1 = (unsigned int *)&param_1->field_0x34f9;
      if (temp_v9 < 3) {
        puVar1 = (unsigned int *)&param_1->field_0x34fa;
        param_1->field_0x34f9 = (char)temp_v10;
      }
      temp_v0 = (temp_v0 + temp_v9) - 4;
      puVar3 = puVar1;
      if (temp_v9 < 2) {
        puVar3 = (unsigned int *)((int)puVar1 + 1);
        *(unsigned char *)puVar1 = temp_v1;
      }
    }
    temp_v9 = (unsigned int)param_2 & 3;
    if (temp_v9 == 0) {
      temp_v10 = temp_v0 - 0x20;
      temp_v9 = 0;
      if (temp_v0 >= 0x20) {
        temp_v9 = *param_2;
        temp_v0 = param_2[1];
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
          puVar3[1] = temp_v0;
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
            temp_v0 = param_2[1];
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
        temp_v0 = param_2[1];
        temp_v3 = param_2[2];
        temp_v4 = param_2[3];
        param_2 = param_2 + 4;
        *puVar3 = temp_v9;
        puVar3[1] = temp_v0;
        puVar3[2] = temp_v3;
        puVar3[3] = temp_v4;
        puVar3 = puVar3 + 4;
      }
      if ((int)(temp_v10 << 0x1c) < 0) {
        temp_v9 = *param_2;
        temp_v0 = param_2[1];
        param_2 = param_2 + 2;
        *puVar3 = temp_v9;
        puVar3[1] = temp_v0;
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
      temp_v2 = (unsigned short)temp_v9;
      if ((temp_v10 & 3) == 0) {
        return romwright_piece_4_4(puVar1,puVar2);
      }
      temp_v12 = (unsigned char)((unsigned char)(temp_v10 >> 1) & 1);
      temp_v10 = temp_v10 << 0x1f;
      temp_v11 = (int)temp_v10 < 0;
      puVar3 = puVar1;
      if (temp_v12) {
        puVar3 = (unsigned int *)((int)puVar1 + 2);
        temp_v2 = (unsigned short)*puVar1;
      }
      puVar1 = puVar3;
      if (temp_v11) {
        puVar1 = (unsigned int *)((int)puVar3 + 1);
        temp_v10 = (unsigned int)(unsigned char)*puVar3;
      }
      puVar3 = puVar2;
      if (temp_v12) {
        puVar3 = (unsigned int *)((int)puVar2 + 2);
        *(unsigned short *)puVar2 = temp_v2;
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
      if (temp_v0 < 8) break;
      puVar1 = param_2 + 1;
      temp_v9 = *param_2;
      param_2 = param_2 + 2;
      temp_v10 = *puVar1;
      *puVar3 = temp_v9;
      puVar3[1] = temp_v10;
      puVar3 = puVar3 + 2;
      temp_v0 = temp_v0 - 8;
    }
    temp_v0 = temp_v0 - 4;
    puVar1 = puVar3;
    if (-1 < (int)temp_v0) {
      temp_v9 = *param_2;
      puVar1 = puVar3 + 1;
      *puVar3 = temp_v9;
      param_2 = param_2 + 1;
    }
    param_4 = (unsigned char)temp_v9;
  }
  temp_v12 = (unsigned char)((unsigned char)(temp_v0 >> 1) & 1);
  temp_v0 = temp_v0 << 0x1f;
  temp_v11 = (int)temp_v0 < 0;
  if (temp_v12) {
    pbVar4 = (unsigned char *)((int)param_2 + 1);
    param_4 = (unsigned char)*param_2;
    param_2 = (unsigned int *)((int)param_2 + 2);
    in_r12 = *pbVar4;
  }
  puVar3 = param_2;
  if (temp_v11) {
    puVar3 = (unsigned int *)((int)param_2 + 1);
    temp_v0 = (unsigned int)(unsigned char)*param_2;
  }
  if (temp_v12) {
    pbVar4 = (unsigned char *)((int)puVar1 + 1);
    *(unsigned char *)puVar1 = param_4;
    puVar1 = (unsigned int *)((int)puVar1 + 2);
    *pbVar4 = in_r12;
  }
  puVar2 = puVar1;
  if (temp_v11) {
    puVar2 = (unsigned int *)((int)puVar1 + 1);
    *(unsigned char *)puVar1 = (unsigned char)temp_v0;
  }
  return romwright_piece_4_4(puVar3,puVar2);
}

} /* extern "C" */
