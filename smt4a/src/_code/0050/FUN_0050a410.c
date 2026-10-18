/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050a410` (_code @ 0x50a410, 0x57c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0050a410_arg1 fn_0050a410_arg1;
struct fn_0050a410_arg1 {
    unsigned char pad_0x0[0x20];
    byte *field_0x20; /* +0x20 */
    byte field_0x24; /* +0x24 */
    byte field_0x25; /* +0x25 */
    char field_0x26; /* +0x26 */
    unsigned char pad_0x27[0x53];
    byte field_0x7a; /* +0x7a */
    unsigned char pad_0x7b[0x1];
    int field_0x7c; /* +0x7c */
    char field_0x80; /* +0x80 */
    unsigned char pad_0x81[0x73];
    char field_0xf4; /* +0xf4 */
    unsigned char pad_0xf5[0x37];
    undefined4 field_0x12c; /* +0x12c */
};

typedef int romwright_code();
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
/* Supplied declaration required: FUN_0050a98c. */


unsigned int FUN_0050a410(int *param_1,fn_0050a410_arg1 *param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  short temp_v4;
  unsigned short temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char *pbVar10;
  unsigned char *pbVar11;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  
  temp_v8 = param_2->field_0x12c;
  temp_v6 = 0;
  temp_v11 = 0;
  pbVar10 = param_2->field_0x20;
  temp_v2 = 0;
  temp_v12 = 1;
  param_2->field_0x20 = pbVar10 + 1;
  temp_v9 = (unsigned int)*pbVar10;
  if (temp_v9 == 0xa2) {
    param_2->field_0x20 = pbVar10 + 2;
    temp_v9 = (unsigned int)pbVar10[1];
    temp_v12 = param_2->field_0x24 != 0;
  }
  if (temp_v9 != 0xa3) {
    if (temp_v9 != 0xa4) {
      if (temp_v9 == 0xa5) {
        pbVar10 = param_2->field_0x20;
        temp_v11 = 5;
        param_2->field_0x20 = pbVar10 + 1;
        temp_v9 = (unsigned int)*pbVar10;
      }
    }
    else {
      pbVar10 = param_2->field_0x20;
      temp_v11 = 4;
      param_2->field_0x20 = pbVar10 + 1;
      temp_v9 = (unsigned int)*pbVar10;
    }
  }
  else {
    pbVar10 = param_2->field_0x20;
    temp_v11 = 2;
    param_2->field_0x20 = pbVar10 + 1;
    temp_v9 = (unsigned int)*pbVar10;
  }
  if (temp_v9 != 0xa0) {
    if (temp_v9 == 0xa1) {
      pbVar10 = param_2->field_0x20;
      param_2->field_0x20 = pbVar10 + 1;
      temp_v3 = *pbVar10;
      temp_v6 = 5;
      temp_v9 = (unsigned int)temp_v3;
      temp_v2 = 1;
    }
  }
  else {
    pbVar10 = param_2->field_0x20;
    param_2->field_0x20 = pbVar10 + 1;
    temp_v3 = *pbVar10;
    temp_v6 = 4;
    temp_v9 = (unsigned int)temp_v3;
    temp_v2 = 1;
  }
  if ((temp_v9 & 0x80) == 0) {
    pbVar10 = param_2->field_0x20;
    if (!temp_v2) {
      temp_v6 = 3;
    }
    param_2->field_0x20 = pbVar10 + 1;
    temp_v3 = *pbVar10;
    temp_v11 = FUN_0050a98c(param_1,&param_2->field_0x20,temp_v8,param_2,temp_v6);
    temp_v7 = (int)param_2->field_0xf4 + temp_v9;
    if (!temp_v12) {
      return 0;
    }
    temp_v6 = UnsignedSaturate(temp_v7,7);
    UnsignedDoesSaturate(temp_v7,7);
    if ((param_2->field_0x7a == 0) && (param_3 != 0)) {
      temp_v7 = temp_v11;
      if (temp_v11 < 1) {
        temp_v7 = -1;
      }
      (**(romwright_code **)(*param_1 + 0xc))(param_1,param_2,temp_v6,temp_v3,temp_v7,(int)param_2->field_0x26);
    }
    temp_v3 = param_2->field_0x25;
    if (temp_v3 == 0) {
      return 0;
    }
    if (temp_v11 == 0) {
      temp_v3 = 1;
    }
    param_2->field_0x7c = temp_v11;
    if (temp_v11 != 0) {
      return 0;
    }
    param_2->field_0x80 = temp_v3;
    return 0;
  }
  switch((int)(temp_v9 & 0xf0) >> 4) {
  case 8:
    if (temp_v9 == 0x88) {
      pbVar10 = param_2->field_0x20;
      param_2->field_0x20 = pbVar10 + 1;
      temp_v3 = *pbVar10;
      param_2->field_0x20 = pbVar10 + 2;
      temp_v0 = pbVar10[1];
      param_2->field_0x20 = pbVar10 + 3;
      temp_v1 = pbVar10[2];
      param_2->field_0x20 = pbVar10 + 4;
      if (!temp_v12) {
        return 0;
      }
      (**(romwright_code **)(*param_1 + 8))
                (param_1,param_2,0x88,temp_v3,(unsigned int)romwright_piece_2_1(romwright_piece_1_1(temp_v0,temp_v1),pbVar10[3]));
      return 0;
    }
    if (temp_v9 < 0x88) {
      if (temp_v9 == 0x80) {
        if (!temp_v2) {
          temp_v6 = 3;
        }
        temp_v11 = FUN_0050a98c(param_1,&param_2->field_0x20,temp_v8,param_2,temp_v6);
        if (!temp_v12) {
          return 0;
        }
        param_2->field_0x7c = temp_v11;
        return 0;
      }
      if (temp_v9 != 0x81) {
        return 0;
      }
      if (!temp_v2) {
        temp_v6 = 3;
      }
      FUN_0050a98c(param_1,&param_2->field_0x20,temp_v8,param_2,temp_v6);
    }
    else if (temp_v9 != 0x89) {
      if (temp_v9 != 0x8a) {
        return 0;
      }
      pbVar10 = param_2->field_0x20;
      param_2->field_0x20 = pbVar10 + 1;
      param_2->field_0x20 = pbVar10 + 2;
      param_2->field_0x20 = pbVar10 + 3;
    }
    else {
      pbVar10 = param_2->field_0x20;
      param_2->field_0x20 = pbVar10 + 1;
      param_2->field_0x20 = pbVar10 + 2;
      param_2->field_0x20 = pbVar10 + 3;
    }
    break;
  case 9:
    break;
  default:
    return 0;
  case 0xb:
  case 0xc:
  case 0xd:
    if (!temp_v2) {
      temp_v6 = 1;
    }
    FUN_0050a98c(param_1,&param_2->field_0x20,temp_v8,param_2,temp_v6);
    if (temp_v11 != 0) {
      FUN_0050a98c(param_1,&param_2->field_0x20,temp_v8,param_2,temp_v11);
    }
    if (!temp_v12) {
      return 0;
    }
    (**(romwright_code **)(*param_1 + 8))(param_1,param_2,temp_v9);
    return 0;
  case 0xe:
    if (!temp_v2) {
      temp_v6 = 2;
    }
    FUN_0050a98c(param_1,&param_2->field_0x20,temp_v8,param_2,temp_v6);
    break;
  case 0xf:
    if (temp_v9 == 0xf0) {
      pbVar11 = param_2->field_0x20;
      pbVar10 = pbVar11 + 1;
      param_2->field_0x20 = pbVar10;
      temp_v10 = (unsigned int)*pbVar11;
      temp_v9 = temp_v10 & 0xf0;
      if (temp_v9 != 0xa0) {
        if (temp_v9 < 0xa0) {
          if (temp_v9 != 0x80 && temp_v9 != 0x90) {
            return 0;
          }
          param_2->field_0x20 = pbVar11 + 2;
          temp_v3 = *pbVar10;
          if (!temp_v2) {
            temp_v6 = 2;
          }
          temp_v4 = FUN_0050a98c(param_1,&param_2->field_0x20,temp_v8,param_2,temp_v6);
          if (!temp_v12) {
            return 0;
          }
          (**(romwright_code **)(*param_1 + 8))(param_1,param_2,temp_v10 + 0xf000,temp_v3,(int)temp_v4);
          return 0;
        }
        if (temp_v9 != 0xb0) {
          if (temp_v9 != 0xe0) {
            return 0;
          }
          if (!temp_v2) {
            temp_v6 = 2;
          }
          temp_v5 = FUN_0050a98c(param_1,&param_2->field_0x20,temp_v8,param_2,temp_v6);
          if (!temp_v12) {
            return 0;
          }
          (**(romwright_code **)(*param_1 + 8))(param_1,param_2,temp_v10 + 0xf000,temp_v5,0);
          return 0;
        }
      }
      param_2->field_0x20 = pbVar11 + 2;
      temp_v5 = (unsigned short)*pbVar10;
      if (!temp_v12) {
        return 0;
      }
      (**(romwright_code **)(*param_1 + 8))(param_1,param_2,temp_v10 + 0xf000,temp_v5,0);
      return 0;
    }
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
  }
  if (temp_v12) {
    (**(romwright_code **)(*param_1 + 8))(param_1,param_2,temp_v9);
  }
  return 0;
}
