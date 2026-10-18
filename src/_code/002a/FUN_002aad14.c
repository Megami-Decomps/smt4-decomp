/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aad14` (_code @ 0x2aad14, 0xd90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002aad14_arg0 fn_002aad14_arg0;
struct fn_002aad14_arg0 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    int field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    int field_0x20; /* +0x20 */
    byte field_0x24; /* +0x24 */
};

typedef int romwright_code();
/* stack frame of param_9: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_9_stack;

#ifndef ROMWRIGHT_PIECE_1_1_DEFINED
#define ROMWRIGHT_PIECE_1_1_DEFINED
#define romwright_piece_1_1(upper, lower) ((unsigned short)(((unsigned short)(unsigned char)(upper) << 8) | (unsigned char)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: FUN_0012abe4. */
extern int *FUN_0012acdc(int *, unsigned int *, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_0012b0b4. */
extern int *FUN_0012b1ac(int *, unsigned int *, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_0012b478. */
extern int *FUN_0012b570(int *, unsigned int *, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_0012b638. */
/* Supplied declaration required: FUN_0012b728. */
/* Supplied declaration required: FUN_0012b7c4. */
extern int *FUN_0012becc(int *, unsigned int *, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_0012c090. */
extern int *FUN_0012c348(int *, unsigned int *, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_0012c69c. */
/* Supplied declaration required: FUN_0012c97c. */
/* Supplied declaration required: FUN_0012d314. */
extern int *FUN_0012d444(unsigned int *, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_0012d99c. */
extern int *FUN_0012daac(int *, unsigned int *, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_0012e3a0. */
extern int *FUN_0012e6a4(int *, unsigned int *, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_0012ea84. */
/* Supplied declaration required: FUN_0012ecdc. */
extern int *FUN_0012f0ec(int *, unsigned int *, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_00132904. */
extern int *FUN_002b3cb0(unsigned int *, int *, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_002b43b0. */
/* Supplied declaration required: FUN_002b4454. */


int * FUN_002aad14(fn_002aad14_arg0 *param_1,unsigned int *param_2,int param_3,int *param_4,unsigned int *param_5,
                  unsigned int param_6,int param_7,int param_8,int param_9)

{
/* irregular: 24 goto(s); 19 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned int temp_v7;
  unsigned int *temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  int temp_v19;
  unsigned int temp_v20;
  unsigned int *temp_v21;
  
  if (param_5 == (unsigned int *)0x0) {
    return (int *)0x0;
  }
  temp_v0 = *param_5;
  temp_v2 = temp_v0 + 0xbfffffbe;
  if (temp_v0 != 0x40000042) {
    if ((int)temp_v0 < 0x40000042) {
      if (temp_v0 == 0x40000006) {
        temp_v10 = 1;
        temp_v8 = (unsigned int *)param_1->field_0xc;
        temp_v9 = param_1->field_0x8;
        (*(unsigned short *)((unsigned char *)&temp_v7 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
        if (param_9 == 0) {
          FUN_0012c97c(param_4,param_5,&temp_v7,param_6);
          goto LAB_002aba28;
        }
        if (param_2 != (unsigned int *)0x0) {
          FUN_0012c69c(param_2,param_5,&temp_v7);
        }
        goto LAB_002ab4b8;
      }
      if ((int)temp_v0 < 0x40000006) {
        if (temp_v0 == 0x800000) {
          if (param_9 != 0) {
            if (param_2 != (unsigned int *)0x0) {
              FUN_0012d314(param_2,param_5);
            }
            goto LAB_002ab4b8;
          }
          param_4 = (int *)FUN_0012d444(param_5,&temp_v7,param_6);
          goto LAB_002aba28;
        }
        if (temp_v0 == 0x40000000) {
          temp_v8 = (unsigned int *)param_1->field_0xc;
          temp_v9 = param_1->field_0x8;
          temp_v10 = param_1->field_0x1c;
          (*(unsigned short *)((unsigned char *)&temp_v7 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
          if (param_9 == 0) {
            param_4 = (int *)FUN_0012f0ec(param_4,param_5,&temp_v7,param_6);
            goto LAB_002aba28;
          }
          if (param_2 != (unsigned int *)0x0) {
            *param_2 = (((*param_2 + param_2[1]) - 1) & ~(param_2[1] - 1)) + 0x4c;
            temp_v0 = param_2[1];
            param_2[1] = 0x20;
            temp_v4 = 0x20;
            if (param_2[2] >= 0x20) {
              temp_v4 = param_2[2];
            }
            param_2[2] = temp_v4;
            param_2[1] = temp_v0;
            *param_2 = ((*param_2 + 0x1f) & 0xffffffe0) + temp_v9 * 4;
            if (temp_v0 <= param_2[2]) {
              temp_v0 = param_2[2];
            }
            param_2[2] = temp_v0;
            if (temp_v8 != (unsigned int *)0x0) {
              temp_v0 = param_2[1] - 1;
              temp_v4 = (((*param_2 + param_2[1]) - 1) & ~temp_v0) + 0x14;
              *param_2 = temp_v4;
              temp_v0 = (((param_2[1] + temp_v4) - 1) & ~temp_v0) + (int)temp_v8 * 4;
            }
            else {
              temp_v0 = (((*param_2 + param_2[1]) - 1) & ~(param_2[1] - 1)) + 0x14;
            }
            *param_2 = temp_v0;
            temp_v6 = ((int)temp_v7 << 0x10) >> 0x18 != 0;
            if (temp_v6) {
              temp_v0 = param_5[10];
            }
            if (temp_v6 && temp_v0 != 0) {
              temp_v4 = (((*param_2 + param_2[1]) - 1) & ~(param_2[1] - 1)) + 0x2c;
              *param_2 = temp_v4;
              temp_v4 = (((temp_v4 + param_2[1]) - 1) & ~(param_2[1] - 1)) + temp_v0 * 4;
              *param_2 = temp_v4;
              *param_2 = (((temp_v4 + param_2[1]) - 1) & ~(param_2[1] - 1)) + temp_v0 * temp_v10 * 4;
            }
          }
          goto LAB_002ab4b8;
        }
        if (temp_v0 == 0x40000002) {
          temp_v10 = param_1->field_0xc;
          temp_v11 = param_1->field_0x8;
          temp_v12 = (unsigned int)param_1->field_0x1c;
          (*(unsigned short *)((unsigned char *)&temp_v9 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
          if (param_9 == 0) {
            param_4 = (int *)FUN_0012becc(param_4,param_5,(unsigned int *)&temp_v9,param_6);
            goto LAB_002aba28;
          }
          if (param_2 != (unsigned int *)0x0) {
            *param_2 = (((*param_2 + param_2[1]) - 1) & ~(param_2[1] - 1)) + 0x148;
            temp_v7 = (unsigned int)temp_v11;
            temp_v8 = (unsigned int *)temp_v12;
            FUN_002b4454(param_2,param_5,temp_v9,temp_v10);
          }
          goto LAB_002ab4b8;
        }
      }
      else {
        if (temp_v0 == 0x4000000a) {
          temp_v10 = param_1->field_0xc;
          temp_v11 = param_1->field_0x8;
          temp_v12 = (unsigned int)param_1->field_0x1c;
          (*(unsigned short *)((unsigned char *)&temp_v9 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
          if (param_9 == 0) {
            FUN_0012ecdc(param_4,param_5,&temp_v9,param_6);
            goto LAB_002aba28;
          }
          if (param_2 != (unsigned int *)0x0) {
            temp_v7 = (unsigned int)temp_v11;
            temp_v8 = (unsigned int *)temp_v12;
            FUN_0012ea84(param_2,param_5,temp_v9,temp_v10);
          }
          goto LAB_002ab4b8;
        }
        if (temp_v0 == 0x40000012) {
          temp_v0 = (unsigned int)temp_v12 >> 0x10;
          temp_v13 = param_1->field_0xc;
          temp_v14 = param_1->field_0x8;
          temp_v16 = param_1->field_0x10;
          temp_v17 = param_1->field_0x14;
          temp_v18 = param_1->field_0x18;
          (*(unsigned short *)((unsigned char *)&temp_v12 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
          temp_v12 = (unsigned int)romwright_piece_2_2((short)temp_v0,(unsigned short)temp_v12);
          temp_v15 = param_1->field_0x1c;
          if (param_9 == 0) {
            param_4 = (int *)FUN_0012e6a4(param_4,param_5,&temp_v12,param_6);
            goto LAB_002aba28;
          }
          if (param_2 != (unsigned int *)0x0) {
            *param_2 = (((param_2[1] + *param_2) - 1) & ~(param_2[1] - 1)) + 0x220;
            temp_v7 = (unsigned int)temp_v14;
            temp_v8 = (unsigned int *)temp_v15;
            temp_v9 = temp_v16;
            temp_v10 = temp_v17;
            temp_v11 = temp_v18;
            FUN_0012e3a0(param_2,param_5,temp_v12,temp_v13);
          }
          goto LAB_002ab4b8;
        }
      }
    }
    else {
      if (temp_v2 == 0xe0) {
        temp_v10 = param_1->field_0xc;
        temp_v11 = param_1->field_0x8;
        temp_v12 = (unsigned int)param_1->field_0x1c;
        (*(unsigned short *)((unsigned char *)&temp_v9 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
        if (param_9 == 0) {
          param_4 = (int *)FUN_0012c348(param_4,param_5,(unsigned int *)&temp_v9,param_6);
          goto LAB_002aba28;
        }
        if (param_2 != (unsigned int *)0x0) {
          temp_v7 = (unsigned int)temp_v11;
          temp_v8 = (unsigned int *)temp_v12;
          FUN_0012c090(param_2,param_5,temp_v9,temp_v10);
        }
        goto LAB_002ab4b8;
      }
      if (temp_v2 < 0xe0) {
        if (temp_v2 != 0x50) {
          if (temp_v2 == 0x60) {
            temp_v10 = param_1->field_0xc;
            temp_v11 = param_1->field_0x8;
            temp_v12 = (unsigned int)param_1->field_0x1c;
            (*(unsigned short *)((unsigned char *)&temp_v9 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
            if (param_9 == 0) {
              param_4 = (int *)FUN_0012b570(param_4,param_5,(unsigned int *)&temp_v9,param_6);
              goto LAB_002aba28;
            }
            if (param_2 != (unsigned int *)0x0) {
              temp_v7 = (unsigned int)temp_v11;
              temp_v8 = (unsigned int *)temp_v12;
              FUN_0012b478(param_2,param_5,temp_v9,temp_v10);
            }
            goto LAB_002ab4b8;
          }
          if (temp_v2 == 0xd0) {
            temp_v12 = (unsigned int)0x1;
            puVar2 = param_5;
            if ((~*param_5 & 0x40000112) != 0) {
              puVar2 = (unsigned int *)0x0;
            }
            temp_v10 = param_1->field_0xc;
            temp_v13 = param_1->field_0x10;
            temp_v14 = param_1->field_0x14;
            temp_v15 = param_1->field_0x18;
            temp_v11 = puVar2[8] + puVar2[0x38] + param_1->field_0x20;
            temp_v16 = puVar2[0x38] + param_1->field_0x20;
            (*(unsigned short *)((unsigned char *)&temp_v9 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
            if (param_9 == 0) {
              temp_v7 = (unsigned int)param_7;
              FUN_0012b7c4(param_4,param_5,&temp_v9,param_6);
              goto LAB_002aba28;
            }
            if (param_2 != (unsigned int *)0x0) {
              FUN_0012b638(param_2,puVar2,&temp_v9);
            }
            if (param_3 != 0) {
              FUN_0012b728(param_3,puVar2,&temp_v9);
            }
            goto LAB_002ab4b8;
          }
        }
        else {
          temp_v0 = (unsigned int)temp_v13 >> 0x10;
          temp_v20 = 0;
          temp_v14 = param_1->field_0xc;
          temp_v15 = param_1->field_0x8;
          temp_v17 = param_1->field_0x10;
          temp_v18 = param_1->field_0x14;
          temp_v19 = param_1->field_0x18;
          temp_v16 = param_1->field_0x1c;
          (*(unsigned short *)((unsigned char *)&temp_v13 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
          temp_v2 = romwright_piece_2_2((short)temp_v0,(unsigned short)temp_v13);
          temp_v13 = temp_v2;
          if (param_9 == 0) {
            param_4 = (int *)FUN_002b3cb0((unsigned int *)&temp_v13,param_4,param_5,param_6);
            goto LAB_002aba28;
          }
          if (param_2 != (unsigned int *)0x0) {
            if (param_5[0x38] != 0) {
              temp_v3 = (int)param_5 + param_5[0x38] + 0xe0;
            }
            else {
              temp_v3 = 0;
            }
            temp_v0 = param_2[1];
            temp_v1 = *(int *)(temp_v3 + 0x18);
            param_2[1] = 0x20;
            temp_v4 = 0x20;
            if (param_2[2] >= 0x20) {
              temp_v4 = param_2[2];
            }
            param_2[2] = temp_v4;
            param_2[1] = temp_v0;
            *param_2 = temp_v1 * 0x40 + ((*param_2 + 0x1f) & 0xffffffe0);
            if (temp_v0 <= param_2[2]) {
              temp_v0 = param_2[2];
            }
            param_2[2] = temp_v0;
            temp_v4 = param_2[1] - 1;
            *param_2 = (((*param_2 + param_2[1]) - 1) & ~temp_v4) + 0x60;
            temp_v1 = *(int *)(temp_v3 + 0x18);
            temp_v0 = param_2[1];
            param_2[1] = 0x20;
            temp_v5 = param_2[2];
            if (temp_v5 < 0x20) {
              temp_v5 = 0x20;
            }
            param_2[2] = temp_v5;
            param_2[1] = temp_v0;
            *param_2 = temp_v1 * 0x40 + ((*param_2 + 0x1f) & 0xffffffe0);
            if (temp_v0 <= param_2[2]) {
              temp_v0 = param_2[2];
            }
            param_2[2] = temp_v0;
            temp_v1 = *(int *)(temp_v3 + 0x18);
            temp_v0 = param_2[1];
            param_2[1] = 0x20;
            temp_v5 = param_2[2];
            if (temp_v5 < 0x20) {
              temp_v5 = 0x20;
            }
            param_2[2] = temp_v5;
            param_2[1] = temp_v0;
            *param_2 = temp_v1 * 0x30 + ((*param_2 + 0x1f) & 0xffffffe0);
            if (temp_v0 <= param_2[2]) {
              temp_v0 = param_2[2];
            }
            param_2[2] = temp_v0;
            temp_v3 = *(int *)(temp_v3 + 0x18);
            temp_v0 = param_2[1];
            param_2[1] = 0x20;
            temp_v5 = 0x20;
            if (param_2[2] >= 0x20) {
              temp_v5 = param_2[2];
            }
            param_2[2] = temp_v5;
            param_2[1] = temp_v0;
            *param_2 = temp_v3 * 0x30 + ((*param_2 + 0x1f) & 0xffffffe0);
            if (temp_v0 <= param_2[2]) {
              temp_v0 = param_2[2];
            }
            param_2[2] = temp_v0;
            if (temp_v14 != 0) {
              temp_v5 = param_2[1];
              temp_v0 = ((((((((*param_2 + param_2[1]) - 1) & ~temp_v4) + temp_v5 + 0x13) & ~temp_v4) +
                         temp_v14 * 4 + temp_v5) - 1) & ~temp_v4) + 0x14;
              *param_2 = temp_v0;
              temp_v0 = temp_v14 * 4 + (((temp_v0 + temp_v5) - 1) & ~temp_v4);
            }
            else {
              temp_v0 = (((*param_2 + param_2[1]) - 1) & ~temp_v4) + 0x14;
              *param_2 = temp_v0;
              temp_v0 = (((temp_v0 + param_2[1]) - 1) & ~temp_v4) + 0x14;
            }
            *param_2 = temp_v0;
            *param_2 = (((*param_2 + param_2[1]) - 1) & ~temp_v4) + 0x234;
            temp_v21 = param_5;
            temp_v7 = (unsigned int)temp_v15;
            temp_v8 = (unsigned int *)temp_v16;
            temp_v9 = temp_v17;
            temp_v10 = temp_v18;
            temp_v11 = temp_v19;
            temp_v12 = (unsigned int)param_2;
            FUN_0012e3a0(param_2,param_5,temp_v2);
            if ((temp_v2 << 0x10) >> 0x18 != 0) {
              temp_v2 = 0;
              if (0 < (int)temp_v21[10]) {
                do {
                  if (temp_v21[0xb] != 0) {
                    temp_v3 = (int)temp_v21 + temp_v21[0xb] + 0x2c;
                  }
                  else {
                    temp_v3 = 0;
                  }
                  temp_v1 = 0;
                  if (temp_v3 != 0) {
                    piVar3 = (int *)(temp_v3 + temp_v2 * 0x10 + 0x28);
                    temp_v1 = *piVar3;
                    if (temp_v1 == 0) {
                      temp_v1 = 0;
                    }
                    else {
                      temp_v1 = (int)piVar3 + temp_v1;
                    }
                  }
                  if (((*(unsigned int *)(temp_v1 + 4) & 1) != 0) && (*(int *)(temp_v1 + 0xc) == 1)) {
                    *temp_v12 = (((*temp_v12 + temp_v12[1]) - 1) & ~(temp_v12[1] - 1)) + 0x68;
                    FUN_002b43b0(temp_v12,temp_v1,1);
                    break;
                  }
                  temp_v2 = temp_v2 + 1;
                } while (temp_v2 < (int)temp_v21[10]);
              }
            }
          }
        }
      }
      else {
        if (temp_v2 == 0x1e0) {
          temp_v10 = param_1->field_0xc;
          temp_v11 = param_1->field_0x8;
          temp_v12 = (unsigned int)param_1->field_0x1c;
          (*(unsigned short *)((unsigned char *)&temp_v9 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
          if (param_9 == 0) {
            param_4 = (int *)FUN_0012acdc(param_4,param_5,(unsigned int *)&temp_v9,param_6);
            goto LAB_002aba28;
          }
          if (param_2 != (unsigned int *)0x0) {
            temp_v7 = (unsigned int)temp_v11;
            temp_v8 = (unsigned int *)temp_v12;
            FUN_0012abe4(param_2,param_5,temp_v9,temp_v10);
          }
          goto LAB_002ab4b8;
        }
        if (temp_v2 == 0x3e0) {
          temp_v10 = param_1->field_0xc;
          temp_v11 = param_1->field_0x8;
          temp_v12 = (unsigned int)param_1->field_0x1c;
          (*(unsigned short *)((unsigned char *)&temp_v9 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
          if (param_9 == 0) {
            param_4 = (int *)FUN_0012b1ac(param_4,param_5,(unsigned int *)&temp_v9,param_6);
            goto LAB_002aba28;
          }
          if (param_2 != (unsigned int *)0x0) {
            temp_v7 = (unsigned int)temp_v11;
            temp_v8 = (unsigned int *)temp_v12;
            FUN_0012b0b4(param_2,param_5,temp_v9,temp_v10);
          }
          goto LAB_002ab4b8;
        }
      }
    }
    param_4 = (int *)0x0;
    if (param_9 == 0) {
LAB_002aba28:
      if (param_4 == (int *)0x0) {
        return (int *)0x0;
      }
      piVar3 = (int *)(**(romwright_code **)(*param_4 + 8))(param_4);
      while (piVar3 != (int *)0x44e858) {
        piVar3 = (int *)*piVar3;
        if (piVar3 == (int *)0x0) {
          return param_4;
        }
      }
      temp_v2 = 0x44e858;
      if (param_4 != (int *)0x0) {
        temp_v2 = param_8;
      }
      if (param_4 == (int *)0x0 || temp_v2 == 0) {
        return param_4;
      }
      temp_v8 = (unsigned int *)param_6;
      temp_v10 = 0;
      temp_v7 = (unsigned int)param_5;
      temp_v9 = param_7;
      FUN_00132904(param_1,0,0);
      return param_4;
    }
  }
  else {
    temp_v12 = (unsigned int)0x1;
    temp_v10 = param_1->field_0xc;
    temp_v11 = param_1->field_0x8;
    (*(unsigned short *)((unsigned char *)&temp_v9 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
    if (param_9 == 0) {
      param_4 = (int *)FUN_0012daac(param_4,param_5,(unsigned int *)&temp_v9,param_6);
      goto LAB_002aba28;
    }
    if (param_2 != (unsigned int *)0x0) {
      temp_v8 = (unsigned int *)0x1;
      temp_v7 = (unsigned int)temp_v11;
      FUN_0012d99c(param_2,param_5,temp_v9,temp_v10);
    }
  }
LAB_002ab4b8:
  if (param_8 != 0) {
    temp_v8 = (unsigned int *)0x0;
    temp_v7 = (unsigned int)param_5;
    temp_v9 = 0;
    temp_v10 = 1;
    FUN_00132904(param_1,param_2,param_3,0);
  }
  return (int *)0x0;
}
