/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00139a70` (_code @ 0x139a70, 0x3bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00139a70_arg0 fn_00139a70_arg0;
struct fn_00139a70_arg0 {
    unsigned char pad_0x0[0x4];
    ushort field_0x4; /* +0x4 */
    ushort field_0x6; /* +0x6 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    short field_0x10; /* +0x10 */
    char field_0x12; /* +0x12 */
    char field_0x13; /* +0x13 */
};

/* stack frame of param_1: 22 slot(s), 69 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned short sp32; /* 0x32: local_32 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned short sp62; /* 0x62: local_62 */
    unsigned char sp63; /* 0x63: local_63 */
    unsigned char sp64; /* 0x64: local_64 */
    unsigned char sp65; /* 0x65: local_65 */
    unsigned char sp67; /* 0x67: local_67 */
    unsigned char sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_001398c0. */
/* Supplied declaration required: FUN_001398dc. */
/* Supplied declaration required: FUN_0013a5b0. */
/* Supplied declaration required: FUN_002ad66c. */
/* Supplied declaration required: FUN_002c567c. */
/* Supplied declaration required: nn_fnd_DateTime_FromParameters. */


void FUN_00139a70(fn_00139a70_arg0 *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned short *puVar4;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar7;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int *temp_v13;
  int temp_v14;
  unsigned int uStack_8c;
  unsigned int temp_v15;
  unsigned int uStack_84;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned short temp_v24 [2];
  unsigned int temp_v25;
  unsigned short temp_v26;
  int temp_v27;
  unsigned int uStack_2c;
  
  FUN_002c567c(&temp_v14);
  temp_v27 = temp_v14;
  uStack_2c = uStack_8c;
  FUN_002ad66c(&temp_v10,&temp_v27);
  temp_v20 = temp_v10;
  temp_v21 = temp_v11 & 0xffffff;
  temp_v22 = 0;
  FUN_0013a5b0(&temp_v10,&temp_v20);
  temp_v0 = temp_v11;
  temp_v1 = temp_v10;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v13 = (unsigned int *)0x0;
  nn_fnd_DateTime_FromParameters
            (&temp_v15,(int)param_1->field_0x10,(int)param_1->field_0x12,(int)param_1->field_0x13);
  temp_v5 = temp_v15;
  puVar7 = &temp_v15;
  FUN_001398dc();
  temp_v17 = temp_v5;
  temp_v16 = uStack_84;
  temp_v13 = puVar7;
  if ((int)(temp_v0 - (uStack_84 + (temp_v1 < temp_v5))) < 0 ==
      (SBORROW4(temp_v0,uStack_84) != SBORROW4(temp_v0 - uStack_84,(unsigned int)(temp_v1 < temp_v5)))) {
    puVar2 = (unsigned int *)param_1->field_0x8;
    temp_v9 = puVar7 <= puVar2;
    if (puVar2 <= puVar7) {
      temp_v9 = param_1->field_0x4 >= 300;
    }
    if ((!temp_v9) && ((temp_v1 != temp_v5 || temp_v0 != uStack_84 || (param_1->field_0x6 < 10)))) {
      temp_v6 = uStack_84;
      if ((unsigned int)((int)puVar7 - (int)puVar2) < 100) {
        return;
      }
      for (; (int)(temp_v0 - (temp_v6 + (temp_v1 < temp_v5))) < 0 ==
             (SBORROW4(temp_v0,temp_v6) != SBORROW4(temp_v0 - temp_v6,(unsigned int)(temp_v1 < temp_v5)));
          temp_v6 = temp_v6 + temp_v9) {
        FUN_001398c0(&temp_v23,0x18,temp_v5,temp_v6);
        temp_v3 = temp_v23 & 0xffff;
        temp_v2 = 0;
        temp_v7 = 0xb;
        puVar4 = (unsigned short *)&temp_v23;
        do {
          temp_v3 = temp_v3 + (*(unsigned short *)((unsigned char *)&temp_v23 + 2));
          (*(unsigned short *)((unsigned char *)&temp_v23 + 2)) = puVar4[3];
          temp_v7 = temp_v7 - 1;
          temp_v2 = temp_v2 + (unsigned int)puVar4[2];
          puVar4 = puVar4 + 2;
        } while (temp_v7 != 0);
        temp_v8 = 0;
        puVar2 = (unsigned int *)((unsigned int)temp_v26 + temp_v3 + temp_v2);
        puVar7 = (unsigned int *)0x0;
        if (temp_v16 == temp_v6 && temp_v17 == temp_v5) {
          temp_v8 = (unsigned int)param_1->field_0x6;
          puVar7 = (unsigned int *)(param_1->field_0xc & 0xffff);
        }
        temp_v2 = -(unsigned int)(puVar2 < puVar7);
        if ((int)-(temp_v2 + (unsigned int)(puVar2 != puVar7)) < 0 ==
            (SBORROW4(0,temp_v2) != SBORROW4((unsigned int)(puVar2 < puVar7),(unsigned int)(puVar2 != puVar7)))) {
          temp_v3 = 0;
        }
        else {
          temp_v3 = (int)puVar2 - (int)puVar7;
        }
        temp_v4 = temp_v3 / 100;
        puVar7 = (unsigned int *)(temp_v3 % 100);
        if (temp_v8 + (temp_v4 & 0xffff) >= 10) {
          temp_v4 = 10 - temp_v8;
          if ((int)temp_v4 < 1) {
            temp_v4 = 0;
          }
          puVar7 = (unsigned int *)0x0;
        }
        temp_v4 = temp_v4 & 0xffff;
        if (param_1->field_0x4 + temp_v4 >= 300) {
          temp_v4 = 300 - param_1->field_0x4;
          if ((int)temp_v4 < 1) {
            temp_v4 = 0;
          }
          puVar7 = (unsigned int *)0x0;
          temp_v4 = temp_v4 & 0xffff;
        }
        if (temp_v5 == temp_v1 && temp_v6 == temp_v0) {
          temp_v2 = -(unsigned int)(temp_v13 < puVar7);
          param_1->field_0x6 = (short)temp_v8 + (short)temp_v4;
          if ((int)-(temp_v2 + (unsigned int)(temp_v13 != puVar7)) < 0 ==
              (SBORROW4(0,temp_v2) != SBORROW4((unsigned int)(temp_v13 < puVar7),(unsigned int)(temp_v13 != puVar7))))
          {
            temp_v2 = 0;
          }
          else {
            temp_v2 = (int)temp_v13 - (int)puVar7;
          }
          temp_v7 = -(unsigned int)(puVar2 < puVar7);
          param_1->field_0x8 = temp_v2;
          if ((int)-(temp_v7 + (unsigned int)(puVar2 != puVar7)) < 0 ==
              (SBORROW4(0,temp_v7) != SBORROW4((unsigned int)(puVar2 < puVar7),(unsigned int)(puVar2 != puVar7)))) {
            temp_v2 = 0;
          }
          else {
            temp_v2 = (int)puVar2 - (int)puVar7;
          }
          param_1->field_0xc = temp_v2;
        }
        param_1->field_0x4 = param_1->field_0x4 + (short)temp_v4;
        temp_v18 = 0;
        temp_v23 = 0;
        temp_v15 = 0x7a70c52a;
        temp_v24[0] = 0;
        temp_v24[1] = 0;
        temp_v19 = 0;
        temp_v25 = 0xb3e20dc6;
        temp_v9 = 0xfad9a3ff < temp_v5;
        temp_v5 = temp_v5 + 86400000;
      }
      param_1->field_0x10 = (short)temp_v20;
      param_1->field_0x12 = (char)temp_v21;
      param_1->field_0x13 = (*(unsigned char *)((unsigned char *)&temp_v21 + 1));
      if (param_1->field_0x4 >= 301) {
        param_1->field_0x4 = 300;
      }
      return;
    }
  }
  if (temp_v0 != uStack_84 || temp_v1 != temp_v5) {
    param_1->field_0x6 = 0;
  }
  param_1->field_0x8 = puVar7;
  FUN_001398c0(&temp_v23,0x18,temp_v1,temp_v0);
  temp_v1 = temp_v23 & 0xffff;
  temp_v7 = 0;
  temp_v2 = 0xb;
  puVar4 = (unsigned short *)&temp_v23;
  do {
    temp_v1 = temp_v1 + (*(unsigned short *)((unsigned char *)&temp_v23 + 2));
    (*(unsigned short *)((unsigned char *)&temp_v23 + 2)) = puVar4[3];
    temp_v2 = temp_v2 - 1;
    temp_v7 = temp_v7 + (unsigned int)puVar4[2];
    puVar4 = puVar4 + 2;
  } while (temp_v2 != 0);
  param_1->field_0xc = temp_v1 + temp_v7 + (unsigned int)temp_v26;
  param_1->field_0x10 = (short)temp_v20;
  param_1->field_0x12 = (char)temp_v21;
  param_1->field_0x13 = (*(unsigned char *)((unsigned char *)&temp_v21 + 1));
  if (param_1->field_0x4 >= 301) {
    param_1->field_0x4 = 300;
  }
  return;
}
