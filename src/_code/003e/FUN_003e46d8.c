/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e46d8` (_code @ 0x3e46d8, 0x5ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003e46d8_arg0 fn_003e46d8_arg0;
struct fn_003e46d8_arg0 {
    unsigned char pad_0x0[0x3c];
    undefined4 field_0x3c; /* +0x3c */
    unsigned char pad_0x40[0x1b];
    char field_0x5b; /* +0x5b */
    byte field_0x5c; /* +0x5c */
    byte field_0x5d; /* +0x5d */
};

/* stack frame of param_5: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_5_stack;

/* Supplied declaration required: FUN_002355fc. */
/* Supplied declaration required: FUN_00236288. */
/* Supplied declaration required: FUN_00236350. */
/* Supplied declaration required: FUN_0024bfb8. */


void FUN_003e46d8(fn_003e46d8_arg0 *param_1,int param_2,unsigned int *param_3,unsigned int *param_4,int param_5)

{
/* irregular: irregular input(s): in_s0; 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int in_s0;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  
  temp_v2 = *param_3;
  temp_v3 = 0;
  if (param_5 != 0) {
    if (param_1->field_0x5b != '\0') {
      temp_v5 = *param_4;
      temp_v6 = param_4[1];
      temp_v7 = param_4[2];
    }
    else {
      temp_v6 = in_s0;
      if ((temp_v2 & 0x10000) != 0) {
        temp_v5 = *param_4;
      }
      else if ((temp_v2 & 0x40) != 0) {
        temp_v5 = param_3[3];
      }
      else {
        if (param_3[3] != 0) {
          temp_v0 = (int)param_3 + param_3[3] + 0xc;
        }
        else {
          temp_v0 = 0;
        }
        FUN_002355fc(temp_v0);
        temp_v5 = in_s0;
      }
      temp_v7 = temp_v6;
      if ((temp_v2 & 0x20000) != 0) {
        temp_v6 = param_4[1];
      }
      else if ((*param_3 & 0x80) != 0) {
        temp_v6 = param_3[4];
      }
      else {
        if (param_3[4] != 0) {
          temp_v0 = (int)param_3 + param_3[4] + 0x10;
        }
        else {
          temp_v0 = 0;
        }
        FUN_002355fc(temp_v0);
      }
      in_s0 = temp_v7;
      if ((temp_v2 & 0x40000) != 0) {
        temp_v7 = param_4[2];
      }
      else if ((*param_3 & 0x100) != 0) {
        temp_v7 = param_3[5];
      }
      else {
        if (param_3[5] != 0) {
          temp_v0 = (int)param_3 + param_3[5] + 0x14;
        }
        else {
          temp_v0 = 0;
        }
        FUN_002355fc(temp_v0);
      }
    }
    if (param_1->field_0x5c != 0) {
      temp_v8 = param_4[3];
      temp_v9 = param_4[4];
      temp_v10 = param_4[5];
    }
    else {
      temp_v1 = in_s0;
      if ((temp_v2 & 0x80000) != 0) {
        temp_v8 = param_4[3];
      }
      else if ((*param_3 & 0x200) != 0) {
        temp_v8 = param_3[6];
      }
      else {
        if (param_3[6] != 0) {
          temp_v0 = (int)param_3 + param_3[6] + 0x18;
        }
        else {
          temp_v0 = 0;
        }
        FUN_002355fc(temp_v0);
        temp_v8 = in_s0;
      }
      temp_v4 = temp_v1;
      if ((temp_v2 & 0x100000) != 0) {
        temp_v9 = param_4[4];
      }
      else if ((*param_3 & 0x400) != 0) {
        temp_v9 = param_3[7];
      }
      else {
        if (param_3[7] != 0) {
          temp_v0 = (int)param_3 + param_3[7] + 0x1c;
        }
        else {
          temp_v0 = 0;
        }
        FUN_002355fc(temp_v0);
        temp_v9 = temp_v1;
      }
      in_s0 = temp_v4;
      if ((temp_v2 & 0x200000) != 0) {
        temp_v10 = param_4[5];
      }
      else if ((*param_3 & 0x800) != 0) {
        temp_v10 = param_3[8];
      }
      else {
        if (param_3[8] != 0) {
          temp_v0 = (int)param_3 + param_3[8] + 0x20;
        }
        else {
          temp_v0 = 0;
        }
        FUN_002355fc(temp_v0);
        temp_v10 = temp_v4;
      }
    }
    if (param_1->field_0x5d != 0) {
      temp_v11 = param_4[6];
      temp_v12 = param_4[7];
      temp_v13 = param_4[8];
    }
    else {
      temp_v1 = in_s0;
      if ((temp_v2 & 0x800000) != 0) {
        temp_v11 = param_4[6];
      }
      else if ((*param_3 & 0x2000) != 0) {
        temp_v11 = param_3[10];
      }
      else {
        if (param_3[10] != 0) {
          temp_v0 = (int)param_3 + param_3[10] + 0x28;
        }
        else {
          temp_v0 = 0;
        }
        FUN_002355fc(temp_v0);
        temp_v11 = in_s0;
      }
      temp_v4 = temp_v1;
      if ((temp_v2 & 0x1000000) != 0) {
        temp_v12 = param_4[7];
      }
      else if ((*param_3 & 0x4000) != 0) {
        temp_v12 = param_3[0xb];
      }
      else {
        if (param_3[0xb] != 0) {
          temp_v0 = (int)param_3 + param_3[0xb] + 0x2c;
        }
        else {
          temp_v0 = 0;
        }
        FUN_002355fc(temp_v0);
        temp_v12 = temp_v1;
      }
      if ((temp_v2 & 0x2000000) != 0) {
        temp_v13 = param_4[8];
      }
      else if ((*param_3 & 0x8000) != 0) {
        temp_v13 = param_3[0xc];
      }
      else {
        temp_v1 = param_3[0xc];
        if (temp_v1 != 0) {
          temp_v3 = temp_v1 + (int)(param_3 + 0xc);
        }
        FUN_002355fc(temp_v3);
        temp_v13 = temp_v4;
      }
    }
    *(unsigned int *)(param_2 + 0x30) = temp_v5;
    *(unsigned int *)(param_2 + 0x34) = temp_v6;
    *(unsigned int *)(param_2 + 0x38) = temp_v7;
    FUN_00236350(param_2,&temp_v8,&temp_v11);
    temp_v1 = *(unsigned int *)(param_2 + 0x3c);
  }
  else {
    if (param_1->field_0x5b == '\0') {
      if ((temp_v2 & 0x10000) == 0) {
        if ((temp_v2 & 0x40) != 0) {
          temp_v1 = param_3[3];
        }
        else {
          if (param_3[3] != 0) {
            temp_v0 = (int)param_3 + param_3[3] + 0xc;
          }
          else {
            temp_v0 = 0;
          }
          temp_v4 = in_s0;
          FUN_002355fc(temp_v0);
          temp_v1 = in_s0;
          in_s0 = temp_v4;
        }
        *(unsigned int *)(param_2 + 0x30) = temp_v1;
      }
      if ((temp_v2 & 0x20000) == 0) {
        if ((*param_3 & 0x80) != 0) {
          temp_v1 = param_3[4];
        }
        else {
          if (param_3[4] != 0) {
            temp_v0 = (int)param_3 + param_3[4] + 0x10;
          }
          else {
            temp_v0 = 0;
          }
          temp_v4 = in_s0;
          FUN_002355fc(temp_v0);
          temp_v1 = in_s0;
          in_s0 = temp_v4;
        }
        *(unsigned int *)(param_2 + 0x34) = temp_v1;
      }
      if ((temp_v2 & 0x40000) == 0) {
        if ((*param_3 & 0x100) != 0) {
          temp_v1 = param_3[5];
        }
        else {
          if (param_3[5] != 0) {
            temp_v0 = (int)param_3 + param_3[5] + 0x14;
          }
          else {
            temp_v0 = 0;
          }
          temp_v4 = in_s0;
          FUN_002355fc(temp_v0);
          temp_v1 = in_s0;
          in_s0 = temp_v4;
        }
        *(unsigned int *)(param_2 + 0x38) = temp_v1;
      }
    }
    if ((param_1->field_0x5c == 0) && ((~temp_v2 & 0x380000) != 0)) {
      if (((temp_v2 & 0x80000) == 0) && ((*param_3 & 0x200) == 0)) {
        if (param_3[6] != 0) {
          temp_v0 = (int)param_3 + param_3[6] + 0x18;
        }
        else {
          temp_v0 = 0;
        }
        FUN_002355fc(temp_v0);
      }
      if (((temp_v2 & 0x100000) == 0) && ((*param_3 & 0x400) == 0)) {
        if (param_3[7] != 0) {
          temp_v0 = (int)param_3 + param_3[7] + 0x1c;
        }
        else {
          temp_v0 = 0;
        }
        FUN_002355fc(temp_v0);
      }
      if (((temp_v2 & 0x200000) == 0) && ((*param_3 & 0x800) == 0)) {
        if (param_3[8] != 0) {
          temp_v0 = (int)param_3 + param_3[8] + 0x20;
        }
        else {
          temp_v0 = 0;
        }
        FUN_002355fc(temp_v0);
      }
      FUN_0024bfb8(param_2);
    }
    if (param_1->field_0x5d == 0) {
      if ((temp_v2 & 0x800000) == 0) {
        if ((*param_3 & 0x2000) != 0) {
          temp_v1 = param_3[10];
        }
        else {
          if (param_3[10] != 0) {
            temp_v0 = (int)param_3 + param_3[10] + 0x28;
          }
          else {
            temp_v0 = 0;
          }
          temp_v4 = in_s0;
          FUN_002355fc(temp_v0);
          temp_v1 = in_s0;
          in_s0 = temp_v4;
        }
        *(unsigned int *)(param_2 + 0xc) = temp_v1;
      }
      if ((temp_v2 & 0x1000000) == 0) {
        if ((*param_3 & 0x4000) != 0) {
          temp_v1 = param_3[0xb];
        }
        else {
          if (param_3[0xb] != 0) {
            temp_v0 = (int)param_3 + param_3[0xb] + 0x2c;
          }
          else {
            temp_v0 = 0;
          }
          temp_v4 = in_s0;
          FUN_002355fc(temp_v0);
          temp_v1 = in_s0;
          in_s0 = temp_v4;
        }
        *(unsigned int *)(param_2 + 0x1c) = temp_v1;
      }
      if ((temp_v2 & 0x2000000) == 0) {
        if ((*param_3 & 0x8000) != 0) {
          in_s0 = param_3[0xc];
        }
        else {
          temp_v1 = param_3[0xc];
          if (temp_v1 != 0) {
            temp_v3 = temp_v1 + (int)(param_3 + 0xc);
          }
          FUN_002355fc(temp_v3);
        }
        *(unsigned int *)(param_2 + 0x2c) = in_s0;
      }
    }
    temp_v1 = *(unsigned int *)(param_2 + 0x3c) | 0x800;
    *(unsigned int *)(param_2 + 0x3c) = temp_v1;
  }
  *(unsigned int *)(param_2 + 0x3c) = temp_v1 & 0xbfffffff;
  if (param_1->field_0x5b != '\0') {
    temp_v1 = (temp_v1 & 0xbfffffff) | 8;
  }
  else {
    temp_v1 = temp_v1 & 0xbffffff7;
  }
  *(unsigned int *)(param_2 + 0x3c) = temp_v1;
  if (param_1->field_0x5c != 0) {
    temp_v1 = *(unsigned int *)(param_2 + 0x3c) | 0x10;
  }
  else {
    temp_v1 = *(unsigned int *)(param_2 + 0x3c) & 0xffffffef;
  }
  *(unsigned int *)(param_2 + 0x3c) = temp_v1;
  if (param_1->field_0x5d != 0) {
    temp_v1 = *(unsigned int *)(param_2 + 0x3c) | 4;
  }
  else {
    temp_v1 = *(unsigned int *)(param_2 + 0x3c) & 0xfffffffb;
  }
  *(unsigned int *)(param_2 + 0x3c) = temp_v1;
  if ((~temp_v2 & 0x380000) != 0) {
    *(unsigned int *)(param_2 + 0x3c) = *(unsigned int *)(param_2 + 0x3c) & 0xffffff7f;
  }
  if ((~temp_v2 & 0x3800000) != 0) {
    *(unsigned int *)(param_2 + 0x3c) = *(unsigned int *)(param_2 + 0x3c) & 0xfffffeff;
  }
  if ((~temp_v2 & 0x70000) != 0) {
    *(unsigned int *)(param_2 + 0x3c) = *(unsigned int *)(param_2 + 0x3c) & 0xfffffdff;
  }
  FUN_00236288(param_2);
  return;
}
