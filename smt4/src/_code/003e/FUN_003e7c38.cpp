/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e7c38` (_code @ 0x3e7c38, 0x55c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00225cc0(...);
int UnsignedDoesSaturate(int, int);
int UnsignedSaturate(int, int);

typedef struct fn_003e7c38_arg1 fn_003e7c38_arg1;
struct fn_003e7c38_arg1 {
    unsigned char pad_0x0[0x20];
    byte *field_0x20; /* +0x20 */
    byte field_0x24; /* +0x24 */
    byte field_0x25; /* +0x25 */
    char field_0x26; /* +0x26 */
    unsigned char pad_0x27[0x1d];
    int field_0x44; /* +0x44 */
    byte field_0x48; /* +0x48 */
    unsigned char pad_0x49[0x1];
    char field_0x4a; /* +0x4a */
    unsigned char pad_0x4b[0x3d];
    char field_0x88; /* +0x88 */
    unsigned char pad_0x89[0x37];
    undefined4 field_0xc0; /* +0xc0 */
};

typedef int romwright_code(...);
/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_1_1_DEFINED
#define ROMWRIGHT_PIECE_1_1_DEFINED
#define romwright_piece_1_1(upper, lower) ((unsigned short)(((unsigned short)(unsigned char)(upper) << 8) | (unsigned char)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_2_1_DEFINED
#define ROMWRIGHT_PIECE_2_1_DEFINED
#define romwright_piece_2_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_00225cc0. */


unsigned int FUN_003e7c38(int *param_1,fn_003e7c38_arg1 *param_2,int param_3)

{
/* irregular: 2 goto(s); 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned short temp_v4;
  short temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char *pbVar9;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  
  temp_v7 = param_2->field_0xc0;
  temp_v6 = 0;
  temp_v11 = 0;
  pbVar9 = param_2->field_0x20;
  temp_v2 = 0;
  temp_v12 = 1;
  param_2->field_0x20 = pbVar9 + 1;
  temp_v9 = (unsigned int)*pbVar9;
  if (temp_v9 == 0xa2) {
    param_2->field_0x20 = pbVar9 + 2;
    temp_v9 = (unsigned int)pbVar9[1];
    temp_v12 = param_2->field_0x24 != 0;
  }
  if (temp_v9 != 0xa3) {
    if (temp_v9 != 0xa4) {
      if (temp_v9 == 0xa5) {
        pbVar9 = param_2->field_0x20;
        temp_v11 = 5;
        param_2->field_0x20 = pbVar9 + 1;
        temp_v9 = (unsigned int)*pbVar9;
      }
    }
    else {
      pbVar9 = param_2->field_0x20;
      temp_v11 = 4;
      param_2->field_0x20 = pbVar9 + 1;
      temp_v9 = (unsigned int)*pbVar9;
    }
  }
  else {
    pbVar9 = param_2->field_0x20;
    temp_v11 = 2;
    param_2->field_0x20 = pbVar9 + 1;
    temp_v9 = (unsigned int)*pbVar9;
  }
  if (temp_v9 != 0xa0) {
    if (temp_v9 == 0xa1) {
      pbVar9 = param_2->field_0x20;
      param_2->field_0x20 = pbVar9 + 1;
      temp_v3 = *pbVar9;
      temp_v6 = 5;
      temp_v9 = (unsigned int)temp_v3;
      temp_v2 = 1;
    }
  }
  else {
    pbVar9 = param_2->field_0x20;
    param_2->field_0x20 = pbVar9 + 1;
    temp_v3 = *pbVar9;
    temp_v6 = 4;
    temp_v9 = (unsigned int)temp_v3;
    temp_v2 = 1;
  }
  if ((temp_v9 & 0x80) == 0) {
    pbVar9 = param_2->field_0x20;
    if (!temp_v2) {
      temp_v6 = 3;
    }
    param_2->field_0x20 = pbVar9 + 1;
    temp_v3 = *pbVar9;
    temp_v11 = FUN_00225cc0(param_1,&param_2->field_0x20,temp_v7,param_2,temp_v6);
    temp_v10 = (int)param_2->field_0x88 + temp_v9;
    if (!temp_v12) {
      return 0;
    }
    temp_v6 = UnsignedSaturate(temp_v10,7);
    UnsignedDoesSaturate(temp_v10,7);
    if ((param_2->field_0x48 == 0) && (param_3 != 0)) {
      temp_v10 = temp_v11;
      if (temp_v11 < 1) {
        temp_v10 = -1;
      }
      (**(romwright_code **)(*param_1 + 0xc))(param_1,param_2,temp_v6,temp_v3,temp_v10,(int)param_2->field_0x26);
    }
    temp_v3 = param_2->field_0x25;
    if (temp_v3 == 0) {
      return 0;
    }
    if (temp_v11 == 0) {
      temp_v3 = 1;
    }
    param_2->field_0x44 = temp_v11;
    if (temp_v11 != 0) {
      return 0;
    }
    param_2->field_0x4a = temp_v3;
    return 0;
  }
  temp_v4 = 0;
  temp_v10 = 0;
  switch((int)(temp_v9 & 0xf0) >> 4) {
  case 8:
    if (temp_v9 == 0x88) {
      pbVar9 = param_2->field_0x20;
      param_2->field_0x20 = pbVar9 + 1;
      temp_v3 = *pbVar9;
      param_2->field_0x20 = pbVar9 + 2;
      temp_v0 = pbVar9[1];
      param_2->field_0x20 = pbVar9 + 3;
      temp_v1 = pbVar9[2];
      param_2->field_0x20 = pbVar9 + 4;
      if (!temp_v12) {
        return 0;
      }
      (**(romwright_code **)(*param_1 + 8))
                (param_1,param_2,0x88,temp_v3,(unsigned int)romwright_piece_2_1(romwright_piece_1_1(temp_v0,temp_v1),pbVar9[3]));
      return 0;
    }
    if (temp_v9 < 0x88) {
      if (temp_v9 == 0x80) {
        if (!temp_v2) {
          temp_v6 = 3;
        }
        temp_v11 = FUN_00225cc0(param_1,&param_2->field_0x20,temp_v7,param_2,temp_v6);
        if (!temp_v12) {
          return 0;
        }
        param_2->field_0x44 = temp_v11;
        return 0;
      }
      if (temp_v9 != 0x81) {
        return 0;
      }
      if (!temp_v2) {
        temp_v6 = 3;
      }
      FUN_00225cc0(param_1,&param_2->field_0x20,temp_v7,param_2,temp_v6);
    }
    else if (temp_v9 != 0x89) {
      if (temp_v9 != 0x8a) {
        return 0;
      }
      pbVar9 = param_2->field_0x20;
      param_2->field_0x20 = pbVar9 + 1;
      param_2->field_0x20 = pbVar9 + 2;
      param_2->field_0x20 = pbVar9 + 3;
    }
    else {
      pbVar9 = param_2->field_0x20;
      param_2->field_0x20 = pbVar9 + 1;
      param_2->field_0x20 = pbVar9 + 2;
      param_2->field_0x20 = pbVar9 + 3;
    }
    break;
  case 9:
joined_r0x003e80f8:
    if (!temp_v12) {
      return 0;
    }
    (**(romwright_code **)(*param_1 + 8))(param_1,param_2,temp_v9,temp_v4,temp_v10);
  default:
    return 0;
  case 0xb:
  case 0xc:
  case 0xd:
    if (!temp_v2) {
      temp_v6 = 1;
    }
    FUN_00225cc0(param_1,&param_2->field_0x20,temp_v7,param_2,temp_v6);
    if (temp_v11 != 0) {
      FUN_00225cc0(param_1,&param_2->field_0x20,temp_v7,param_2,temp_v11);
    }
    break;
  case 0xe:
    if (!temp_v2) {
      temp_v6 = 2;
    }
    FUN_00225cc0(param_1,&param_2->field_0x20,temp_v7,param_2,temp_v6);
    break;
  case 0xf:
    if (temp_v9 != 0xf0) {
      if (temp_v9 == 0xfe) {
        param_2->field_0x20 = param_2->field_0x20 + 2;
        return 0;
      }
      if (temp_v9 == 0xff) {
        if (!temp_v12) {
          return 0;
        }
        return 1;
      }
      goto joined_r0x003e80f8;
    }
    pbVar9 = param_2->field_0x20;
    param_2->field_0x20 = pbVar9 + 1;
    temp_v3 = *pbVar9;
    temp_v8 = temp_v3 & 0xf0;
    if ((temp_v8 != 0x80) && (temp_v8 != 0x90)) {
      if (temp_v8 != 0xe0) goto joined_r0x003e80f8;
      if (!temp_v2) {
        temp_v6 = 2;
      }
      temp_v4 = FUN_00225cc0(param_1,&param_2->field_0x20,temp_v7,param_2,temp_v6);
    }
    else {
      param_2->field_0x20 = pbVar9 + 2;
      temp_v4 = (unsigned short)pbVar9[1];
      if (!temp_v2) {
        temp_v6 = 2;
      }
      temp_v5 = FUN_00225cc0(param_1,&param_2->field_0x20,temp_v7,param_2,temp_v6);
      temp_v10 = (int)temp_v5;
    }
    if (!temp_v12) {
      return 0;
    }
    (**(romwright_code **)(*param_1 + 8))(param_1,param_2,temp_v3 + 0xf000,temp_v4,temp_v10);
    (**(romwright_code **)(*param_1 + 8))(param_1,param_2,temp_v9,temp_v4,temp_v10);
    return 0;
  }
  if (temp_v12) {
    (**(romwright_code **)(*param_1 + 8))(param_1,param_2,temp_v9);
  }
  return 0;
}

} /* extern "C" */
