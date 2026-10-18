/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019430c` (_code @ 0x19430c, 0x3c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0019430c_arg0 fn_0019430c_arg0;
typedef struct fn_0019430c_arg0_p10 fn_0019430c_arg0_p10;
struct fn_0019430c_arg0 {
    unsigned char field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x1];
    unsigned char field_0x2; /* +0x2 */
    unsigned char pad_0x3[0x1];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    int field_0xc; /* +0xc */
    fn_0019430c_arg0_p10 *field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x3];
    int field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0xc];
    void *field_0x2c; /* +0x2c */
};
struct fn_0019430c_arg0_p10 {
    byte field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x1];
    ushort field_0x2; /* +0x2 */
    ushort field_0x4; /* +0x4 */
    unsigned char pad_0x6[0x2];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x3];
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0xf];
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
};

/* stack frame of param_4: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp40C; /* 0x40c: local_40c */
    unsigned int sp410; /* 0x410: local_410 */
    unsigned int sp414; /* 0x414: local_414 */
    unsigned int sp418; /* 0x418: local_418 */
    unsigned int sp7CC; /* 0x7cc: local_7cc */
    unsigned int sp7D0; /* 0x7d0: local_7d0 */
    unsigned int sp7D4; /* 0x7d4: local_7d4 */
    unsigned int sp7D8; /* 0x7d8: local_7d8 */
} param_4_stack;

/* Supplied declaration required: FUN_0019a270. */
/* Supplied declaration required: FUN_001a063c. */
extern int FUN_001a0778(int, int);
extern int FUN_001a07c4(int, int *, int);
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */


void FUN_0019430c(fn_0019430c_arg0 *param_1,int *param_2,int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int temp_v2;
  unsigned int *puVar8;
  int temp_v3;
  fn_0019430c_arg0_p10 *pfVar10;
  unsigned int *unaff_r11;
  unsigned int *puVar11;
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
  unsigned int temp_v14 [4];
  unsigned int temp_v15 [238];
  fn_0019430c_arg0_p10 *temp_v16;
  int temp_v17 [5];
  fn_0019430c_arg0 *pfStack_38;
  int *piStack_34;
  int iStack_30;
  int temp_v18;
  
  pfStack_38 = param_1;
  piStack_34 = param_2;
  iStack_30 = param_3;
  temp_v18 = param_4;
  FUN_001a063c(param_2,*(unsigned int *)&param_1->field_0x8,param_1->field_0xc << 2);
  pfVar10 = param_1->field_0x10;
  temp_v16 = pfVar10 + param_1->field_0x14;
  if (temp_v16 != pfVar10) {
    unaff_r11 = &temp_v10;
  }
  if (temp_v16 != pfVar10) {
    do {
      if ((pfVar10->field_0x0 & 1) != 0) {
        temp_v2 = 0;
        temp_v1 = 0;
        if (pfVar10->field_0x2 != 0) {
          do {
            nn_math_ARMv6_MTX34MultAsm
                      (unaff_r11 + temp_v2 * 0xc,
                       *(int *)(param_3 + 0x14) + (unsigned int)(&pfVar10->field_0x4)[temp_v2] * 0x30,
                       *(int *)((int)param_1->field_0x2c + 0x70) +
                       (unsigned int)(&pfVar10->field_0x4)[temp_v2] * 100 + 0x2c);
            temp_v1 = (unsigned int)pfVar10->field_0x2;
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < (int)temp_v1);
        }
        puVar3 = (unsigned int *)*param_2;
        *puVar3 = *(unsigned char *)(temp_v18 + 2) | 0x80000000;
        temp_v2 = temp_v1 * 3 - 1;
        puVar3[1] = 0xf02c0;
        puVar3[2] = temp_v13;
        puVar3[3] = (temp_v1 * 0xc00000 - 0x100000) | 0xf02c1;
        puVar3[4] = temp_v12;
        puVar3[5] = temp_v11;
        puVar4 = puVar3 + 7;
        puVar3[6] = temp_v10;
        if (0 < temp_v2) {
          puVar6 = unaff_r11 + 7;
          puVar11 = unaff_r11 + 6;
          puVar8 = unaff_r11 + 5;
          puVar5 = puVar4;
          puVar3 = unaff_r11;
          do {
            puVar3 = puVar3 + 4;
            temp_v2 = temp_v2 - 1;
            *puVar5 = *puVar6;
            puVar6 = puVar6 + 4;
            puVar5[1] = *puVar11;
            puVar11 = puVar11 + 4;
            puVar5[2] = *puVar8;
            puVar8 = puVar8 + 4;
            puVar5[3] = *puVar3;
            puVar5 = puVar5 + 4;
          } while (temp_v2 != 0);
          puVar4 = puVar4 + (temp_v1 * 0xc - 4);
        }
        puVar3 = puVar4 + 1;
        *puVar4 = 0;
        *param_2 = (int)puVar3;
      }
      else if ((pfVar10->field_0x0 & 2) != 0) {
        temp_v2 = 0;
        if (pfVar10->field_0x2 != 0) {
          do {
            temp_v3 = temp_v2 + 1;
            puVar3 = (unsigned int *)(*(int *)(param_3 + 0x14) + (unsigned int)(&pfVar10->field_0x4)[temp_v2] * 0x30);
            temp_v1 = puVar3[1];
            temp_v4 = puVar3[2];
            temp_v5 = puVar3[3];
            temp_v6 = puVar3[4];
            temp_v7 = puVar3[5];
            temp_v8 = puVar3[6];
            temp_v9 = puVar3[7];
            temp_v14[temp_v2 * 0xc] = *puVar3;
            temp_v14[temp_v2 * 0xc + 1] = temp_v1;
            temp_v14[temp_v2 * 0xc + 2] = temp_v4;
            temp_v14[temp_v2 * 0xc + 3] = temp_v5;
            temp_v14[temp_v2 * 0xc + 4] = temp_v6;
            temp_v14[temp_v2 * 0xc + 5] = temp_v7;
            temp_v14[temp_v2 * 0xc + 6] = temp_v8;
            temp_v14[temp_v2 * 0xc + 7] = temp_v9;
            temp_v4 = puVar3[9];
            temp_v5 = puVar3[10];
            temp_v1 = puVar3[0xb];
            temp_v14[temp_v2 * 0xc + 8] = puVar3[8];
            temp_v14[temp_v2 * 0xc + 0xb] = temp_v1;
            temp_v14[temp_v2 * 0xc + 9] = temp_v4;
            temp_v14[temp_v2 * 0xc + 10] = temp_v5;
            temp_v2 = temp_v3;
          } while (temp_v3 < (int)(unsigned int)pfVar10->field_0x2);
        }
        temp_v1 = (unsigned int)pfVar10->field_0x2;
        puVar3 = (unsigned int *)*param_2;
        *puVar3 = *(unsigned char *)(temp_v18 + 2) | 0x80000000;
        puVar3[1] = 0xf02c0;
        temp_v2 = temp_v1 * 3 - 1;
        puVar3[2] = temp_v14[3];
        puVar3[3] = (temp_v1 * 0xc00000 - 0x100000) | 0xf02c1;
        puVar3[4] = temp_v14[2];
        puVar3[5] = temp_v14[1];
        puVar4 = puVar3 + 7;
        puVar3[6] = temp_v14[0];
        if (0 < temp_v2) {
          puVar6 = temp_v14 + 7;
          puVar11 = temp_v14 + 6;
          puVar8 = temp_v14 + 5;
          puVar3 = temp_v14;
          puVar5 = puVar4;
          do {
            puVar3 = puVar3 + 4;
            temp_v2 = temp_v2 - 1;
            *puVar5 = *puVar6;
            puVar6 = puVar6 + 4;
            puVar5[1] = *puVar11;
            puVar11 = puVar11 + 4;
            puVar5[2] = *puVar8;
            puVar8 = puVar8 + 4;
            puVar5[3] = *puVar3;
            puVar5 = puVar5 + 4;
          } while (temp_v2 != 0);
          puVar4 = puVar4 + (temp_v1 * 0xc - 4);
        }
        *puVar4 = 0;
        *param_2 = (int)(puVar4 + 1);
      }
      else {
        puVar3 = (unsigned int *)*param_2;
        temp_v2 = *(int *)(param_3 + 0x14);
        temp_v0 = pfVar10->field_0x4;
        *puVar3 = *(unsigned char *)(temp_v18 + 2) | 0x80000000;
        puVar3[1] = 0xf02c0;
        FUN_0019a270(puVar3 + 2,temp_v2 + (unsigned int)temp_v0 * 0x30,0xbf02c1);
        puVar3 = puVar3 + 0x10;
        *param_2 = (int)puVar3;
      }
      temp_v2 = *param_2;
      temp_v3 = pfVar10->field_0x2c;
      if (temp_v2 != 0 && temp_v3 != 0) {
        temp_v2 = FUN_001a0778(temp_v2,((temp_v2 - param_2[2]) & 0xfffffffcU) + 0x18);
        *param_2 = temp_v2;
        temp_v2 = FUN_001a07c4(temp_v2,temp_v17,temp_v3);
        *param_2 = temp_v2;
        if ((unsigned int *)param_2[3] != (unsigned int *)0x0) {
          *(unsigned int *)param_2[3] = (unsigned int)(temp_v2 - param_2[2]) >> 3;
        }
        param_2[2] = *param_2;
        param_2[3] = temp_v17[0];
        if (param_2[4] == 0) {
          param_2[4] = (*param_2 - param_2[1]) & 0xfffffffc;
        }
      }
      pfVar10 = pfVar10 + 1;
    } while (temp_v16 != pfVar10);
  }
  FUN_001a063c(param_2,*(unsigned int *)&param_1->field_0x18,param_1->field_0x1c << 2);
  return;
}
