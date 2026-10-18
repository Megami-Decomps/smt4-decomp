/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017efa4` (_code @ 0x17efa4, 0x8d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0017efa4_arg0 fn_0017efa4_arg0;
struct fn_0017efa4_arg0 {
    unsigned char pad_0x0[0x1];
    byte field_0x1; /* +0x1 */
    unsigned char pad_0x2[0x2];
    int field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    int field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    int field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x4];
    int field_0x1c; /* +0x1c */
};

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern float *FUN_001a1e28(void);
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */


void FUN_0017efa4(fn_0017efa4_arg0 *param_1,float *param_2)

{
/* irregular: irregular input(s): in_d8; 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  float *pfVar4;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar9;
  unsigned int *puVar10;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int *puVar14;
  float *pfVar15;
  float *pfVar16;
  float temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  unsigned int temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  unsigned int temp_v25;
  unsigned long long in_d8;
  float temp_v26;
  
  temp_v0 = param_1->field_0x1;
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 == 2) {
        temp_v5 = param_1->field_0x8;
        temp_v4 = param_1->field_0xc;
        temp_v6 = param_1->field_0x1c;
        temp_v7 = param_1->field_0x14;
        if (0 < temp_v5) {
          in_d8 = 0x3f800000;
        }
        temp_v3 = 0;
        if (temp_v3 < temp_v5) {
          do {
            puVar9 = (unsigned int *)(param_1->field_0xc + temp_v3 * 0x40);
            temp_v1 = (unsigned int)*(unsigned short *)(param_1->field_0x4 + temp_v3 * 2);
            if ((int)temp_v1 < temp_v5) {
              puVar10 = (unsigned int *)(temp_v4 + temp_v3 * 0x40);
              puVar14 = (unsigned int *)(temp_v4 + temp_v1 * 0x40);
              pfVar15 = (float *)(temp_v6 + temp_v3 * 0xc);
              pfVar16 = (float *)(temp_v6 + temp_v1 * 0xc);
              *puVar10 = (*puVar10 & 0x17ffffff) |
                         (*puVar14 & ((*puVar10 & 0x17ffffff) << 4) & 0xe8000000);
              puVar2 = (unsigned int *)(temp_v7 + temp_v3 * 0x30);
              temp_v2 = temp_v7 + temp_v1 * 0x30;
              if ((~*puVar14 & 0x28000000) != 0) {
                temp_v1 = puVar10[5];
                temp_v9 = puVar10[6];
                temp_v10 = (float)puVar10[7];
                temp_v11 = puVar10[8];
                temp_v13 = puVar10[9];
                temp_v15 = puVar10[10];
                temp_v17 = (float)puVar10[0xb];
                *puVar2 = puVar10[4];
                puVar2[1] = temp_v1;
                puVar2[2] = temp_v9;
                puVar2[3] = (unsigned int)temp_v10;
                puVar2[4] = temp_v11;
                puVar2[5] = temp_v13;
                puVar2[6] = temp_v15;
                puVar2[7] = (unsigned int)temp_v17;
                temp_v1 = puVar10[0xc];
                temp_v9 = puVar10[0xd];
                temp_v11 = puVar10[0xe];
                temp_v8 = (float)puVar10[0xf];
                puVar2[0xb] = (unsigned int)temp_v8;
                puVar2[8] = temp_v1;
                puVar2[9] = temp_v9;
                puVar2[10] = temp_v11;
                temp_v12 = pfVar16[1];
                temp_v14 = pfVar16[2];
                puVar2[3] = (unsigned int)(temp_v10 * *pfVar16);
                puVar2[7] = (unsigned int)(temp_v17 * temp_v12);
                puVar2[0xb] = (unsigned int)(temp_v8 * temp_v14);
                nn_math_ARMv6_MTX34MultAsm(puVar2,temp_v2,puVar2);
              }
              else {
                nn_math_ARMv6_MTX34MultAsm(puVar2,temp_v2,puVar10 + 4);
              }
              if ((~*puVar10 & 0x2800000) != 0) {
                *pfVar15 = *pfVar16 * (float)puVar10[1];
                pfVar15[1] = pfVar16[1] * (float)puVar10[2];
                pfVar15[2] = pfVar16[2] * (float)puVar10[3];
              }
              else {
                temp_v8 = pfVar16[1];
                temp_v10 = pfVar16[2];
                *pfVar15 = *pfVar16;
                pfVar15[1] = temp_v8;
                pfVar15[2] = temp_v10;
              }
            }
            else {
              puVar2 = (unsigned int *)(temp_v4 + temp_v3 * 0x40);
              pfVar15 = (float *)(temp_v7 + temp_v3 * 0x30);
              if ((~*puVar2 & 0xc000000) != 0) {
                if (param_2 != (float *)0x0) {
                  nn_math_ARMv6_MTX34MultAsm(pfVar15,param_2,puVar2 + 4);
                }
                else {
                  temp_v8 = (float)puVar2[5];
                  temp_v10 = (float)puVar2[6];
                  temp_v12 = (float)puVar2[7];
                  temp_v14 = (float)puVar2[8];
                  temp_v17 = (float)puVar2[9];
                  temp_v16 = (float)puVar2[10];
                  temp_v19 = (float)puVar2[0xb];
                  *pfVar15 = (float)puVar2[4];
                  pfVar15[1] = temp_v8;
                  pfVar15[2] = temp_v10;
                  pfVar15[3] = temp_v12;
                  pfVar15[4] = temp_v14;
                  pfVar15[5] = temp_v17;
                  pfVar15[6] = temp_v16;
                  pfVar15[7] = temp_v19;
                  temp_v8 = (float)puVar2[0xc];
                  temp_v10 = (float)puVar2[0xd];
                  temp_v12 = (float)puVar2[0xe];
                  pfVar15[0xb] = (float)puVar2[0xf];
                  pfVar15[8] = temp_v8;
                  pfVar15[9] = temp_v10;
                  pfVar15[10] = temp_v12;
                }
              }
              else if (param_2 != (float *)0x0) {
                temp_v8 = param_2[1];
                temp_v10 = param_2[2];
                temp_v12 = param_2[3];
                temp_v14 = param_2[4];
                temp_v17 = param_2[5];
                temp_v16 = param_2[6];
                temp_v19 = param_2[7];
                *pfVar15 = *param_2;
                pfVar15[1] = temp_v8;
                pfVar15[2] = temp_v10;
                pfVar15[3] = temp_v12;
                pfVar15[4] = temp_v14;
                pfVar15[5] = temp_v17;
                pfVar15[6] = temp_v16;
                pfVar15[7] = temp_v19;
                temp_v8 = param_2[8];
                temp_v10 = param_2[9];
                temp_v12 = param_2[10];
                pfVar15[0xb] = param_2[0xb];
                pfVar15[8] = temp_v8;
                pfVar15[9] = temp_v10;
                pfVar15[10] = temp_v12;
              }
              else {
                pfVar16 = (float *)FUN_001a1e28();
                temp_v8 = pfVar16[1];
                temp_v10 = pfVar16[2];
                temp_v12 = pfVar16[3];
                temp_v14 = pfVar16[4];
                temp_v17 = pfVar16[5];
                temp_v16 = pfVar16[6];
                temp_v19 = pfVar16[7];
                *pfVar15 = *pfVar16;
                pfVar15[1] = temp_v8;
                pfVar15[2] = temp_v10;
                pfVar15[3] = temp_v12;
                pfVar15[4] = temp_v14;
                pfVar15[5] = temp_v17;
                pfVar15[6] = temp_v16;
                pfVar15[7] = temp_v19;
                temp_v8 = pfVar16[8];
                temp_v10 = pfVar16[9];
                temp_v12 = pfVar16[10];
                pfVar15[0xb] = pfVar16[0xb];
                pfVar15[8] = temp_v8;
                pfVar15[9] = temp_v10;
                pfVar15[10] = temp_v12;
              }
              puVar2 = (unsigned int *)(temp_v4 + temp_v3 * 0x40);
              if ((~*puVar2 & 0x2800000) != 0) {
                puVar10 = (unsigned int *)(temp_v6 + temp_v3 * 0xc);
                *puVar10 = puVar2[1];
                puVar10[1] = puVar2[2];
                puVar10[2] = puVar2[3];
              }
              else {
                puVar3 = (unsigned int *)(temp_v6 + temp_v3 * 0xc);
                temp_v25 = (unsigned int)in_d8;
                *puVar3 = temp_v25;
                puVar3[1] = temp_v25;
                puVar3[2] = temp_v25;
              }
            }
            temp_v3 = temp_v3 + 1;
            *puVar9 = (*puVar9 & 0xfffffffd) | 4;
          } while (temp_v3 < temp_v5);
        }
        temp_v3 = param_1->field_0x8;
        temp_v5 = 0;
        if (0 < temp_v3) {
          do {
            if ((~*(unsigned int *)(temp_v4 + temp_v5 * 0x40) & 0x28000000) != 0) {
              pfVar15 = (float *)(temp_v7 + temp_v5 * 0x30);
              pfVar16 = (float *)(temp_v6 + temp_v5 * 0xc);
              temp_v8 = *pfVar16;
              temp_v12 = pfVar16[1];
              temp_v10 = pfVar16[2];
              *pfVar15 = *pfVar15 * temp_v8;
              pfVar15[1] = pfVar15[1] * temp_v12;
              pfVar15[2] = pfVar15[2] * temp_v10;
              pfVar15[6] = pfVar15[6] * temp_v10;
              pfVar15[8] = pfVar15[8] * temp_v8;
              pfVar15[9] = pfVar15[9] * temp_v12;
              pfVar15[10] = pfVar15[10] * temp_v10;
              pfVar15[4] = pfVar15[4] * temp_v8;
              pfVar15[5] = pfVar15[5] * temp_v12;
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < temp_v3);
          return;
        }
      }
    }
    else {
      temp_v6 = param_1->field_0x8;
      temp_v5 = param_1->field_0xc;
      temp_v7 = param_1->field_0x14;
      temp_v4 = 0;
      if (temp_v4 < temp_v6) {
        do {
          puVar9 = (unsigned int *)(param_1->field_0xc + temp_v4 * 0x40);
          temp_v1 = (unsigned int)*(unsigned short *)(param_1->field_0x4 + temp_v4 * 2);
          if ((int)temp_v1 < temp_v6) {
            puVar2 = (unsigned int *)(temp_v5 + temp_v1 * 0x40);
            puVar10 = (unsigned int *)(temp_v5 + temp_v4 * 0x40);
            pfVar15 = (float *)(temp_v7 + temp_v4 * 0x30);
            pfVar16 = (float *)(temp_v7 + temp_v1 * 0x30);
            if ((~*puVar2 & 0x2800000) == 0) {
              pfVar4 = (float *)(puVar10 + 4);
            }
            else if ((*puVar10 & 0x400000) != 0) {
              temp_v8 = (float)puVar10[5];
              temp_v10 = (float)puVar10[6];
              temp_v12 = (float)puVar10[7];
              temp_v14 = (float)puVar10[8];
              temp_v17 = (float)puVar10[9];
              temp_v16 = (float)puVar10[10];
              temp_v19 = (float)puVar10[0xb];
              *pfVar15 = (float)puVar10[4];
              pfVar15[1] = temp_v8;
              pfVar15[2] = temp_v10;
              pfVar15[3] = temp_v12;
              pfVar15[4] = temp_v14;
              pfVar15[5] = temp_v17;
              pfVar15[6] = temp_v16;
              pfVar15[7] = temp_v19;
              temp_v8 = (float)puVar10[0xd];
              temp_v10 = (float)puVar10[0xe];
              temp_v12 = (float)puVar10[0xf];
              pfVar15[8] = (float)puVar10[0xc];
              pfVar15[9] = temp_v8;
              pfVar15[10] = temp_v10;
              pfVar15[0xb] = temp_v12;
              temp_v8 = (float)puVar2[2];
              temp_v10 = (float)puVar2[3];
              pfVar15[3] = pfVar15[3] * (float)puVar2[1];
              pfVar15[7] = temp_v19 * temp_v8;
              pfVar15[0xb] = pfVar15[0xb] * temp_v10;
              pfVar4 = pfVar15;
            }
            else {
              temp_v14 = *pfVar16;
              temp_v17 = pfVar16[1];
              temp_v16 = pfVar16[2];
              temp_v8 = (float)puVar2[1];
              temp_v12 = (float)puVar2[2];
              temp_v10 = (float)puVar2[3];
              temp_v19 = pfVar16[4];
              temp_v18 = pfVar16[5];
              temp_v20 = pfVar16[6];
              temp_v21 = pfVar16[8];
              temp_v22 = pfVar16[9];
              temp_v23 = pfVar16[10];
              temp_v24 = pfVar16[7];
              temp_v26 = pfVar16[0xb];
              pfVar15[3] = pfVar16[3];
              pfVar15[7] = temp_v24;
              pfVar15[8] = temp_v21 * temp_v8;
              pfVar15[9] = temp_v22 * temp_v12;
              pfVar15[10] = temp_v23 * temp_v10;
              pfVar15[0xb] = temp_v26;
              pfVar15[4] = temp_v19 * temp_v8;
              pfVar15[5] = temp_v18 * temp_v12;
              pfVar15[6] = temp_v20 * temp_v10;
              *pfVar15 = temp_v14 * temp_v8;
              pfVar15[1] = temp_v17 * temp_v12;
              pfVar15[2] = temp_v16 * temp_v10;
              pfVar16 = pfVar15;
              pfVar4 = (float *)(puVar10 + 4);
            }
            nn_math_ARMv6_MTX34MultAsm(pfVar15,pfVar16,pfVar4);
          }
          else {
            puVar2 = (unsigned int *)(temp_v5 + temp_v4 * 0x40);
            pfVar15 = (float *)(temp_v7 + temp_v4 * 0x30);
            if ((~*puVar2 & 0xc000000) != 0) {
              if (param_2 != (float *)0x0) {
                pfVar16 = param_2;
                pfVar4 = (float *)(puVar2 + 4);
                nn_math_ARMv6_MTX34MultAsm(pfVar15,pfVar16,pfVar4);
              }
              else {
                temp_v8 = (float)puVar2[5];
                temp_v10 = (float)puVar2[6];
                temp_v12 = (float)puVar2[7];
                temp_v14 = (float)puVar2[8];
                temp_v17 = (float)puVar2[9];
                temp_v16 = (float)puVar2[10];
                temp_v19 = (float)puVar2[0xb];
                *pfVar15 = (float)puVar2[4];
                pfVar15[1] = temp_v8;
                pfVar15[2] = temp_v10;
                pfVar15[3] = temp_v12;
                pfVar15[4] = temp_v14;
                pfVar15[5] = temp_v17;
                pfVar15[6] = temp_v16;
                pfVar15[7] = temp_v19;
                temp_v8 = (float)puVar2[0xc];
                temp_v10 = (float)puVar2[0xd];
                temp_v12 = (float)puVar2[0xe];
                pfVar15[0xb] = (float)puVar2[0xf];
                pfVar15[8] = temp_v8;
                pfVar15[9] = temp_v10;
                pfVar15[10] = temp_v12;
              }
            }
            else if (param_2 != (float *)0x0) {
              temp_v8 = param_2[1];
              temp_v10 = param_2[2];
              temp_v12 = param_2[3];
              temp_v14 = param_2[4];
              temp_v17 = param_2[5];
              temp_v16 = param_2[6];
              temp_v19 = param_2[7];
              *pfVar15 = *param_2;
              pfVar15[1] = temp_v8;
              pfVar15[2] = temp_v10;
              pfVar15[3] = temp_v12;
              pfVar15[4] = temp_v14;
              pfVar15[5] = temp_v17;
              pfVar15[6] = temp_v16;
              pfVar15[7] = temp_v19;
              temp_v8 = param_2[8];
              temp_v10 = param_2[9];
              temp_v12 = param_2[10];
              pfVar15[0xb] = param_2[0xb];
              pfVar15[8] = temp_v8;
              pfVar15[9] = temp_v10;
              pfVar15[10] = temp_v12;
            }
            else {
              pfVar16 = (float *)FUN_001a1e28();
              temp_v8 = pfVar16[1];
              temp_v10 = pfVar16[2];
              temp_v12 = pfVar16[3];
              temp_v14 = pfVar16[4];
              temp_v17 = pfVar16[5];
              temp_v16 = pfVar16[6];
              temp_v19 = pfVar16[7];
              *pfVar15 = *pfVar16;
              pfVar15[1] = temp_v8;
              pfVar15[2] = temp_v10;
              pfVar15[3] = temp_v12;
              pfVar15[4] = temp_v14;
              pfVar15[5] = temp_v17;
              pfVar15[6] = temp_v16;
              pfVar15[7] = temp_v19;
              temp_v8 = pfVar16[8];
              temp_v10 = pfVar16[9];
              temp_v12 = pfVar16[10];
              pfVar15[0xb] = pfVar16[0xb];
              pfVar15[8] = temp_v8;
              pfVar15[9] = temp_v10;
              pfVar15[10] = temp_v12;
            }
          }
          temp_v4 = temp_v4 + 1;
          *puVar9 = (*puVar9 & 0xfffffffd) | 4;
        } while (temp_v4 < temp_v6);
      }
      temp_v6 = param_1->field_0x8;
      temp_v4 = 0;
      if (0 < temp_v6) {
        do {
          puVar9 = (unsigned int *)(temp_v5 + temp_v4 * 0x40);
          if ((~*puVar9 & 0x2800000) != 0) {
            pfVar15 = (float *)(temp_v7 + temp_v4 * 0x30);
            temp_v8 = (float)puVar9[1];
            temp_v10 = (float)puVar9[2];
            temp_v12 = (float)puVar9[3];
            *pfVar15 = *pfVar15 * temp_v8;
            pfVar15[1] = pfVar15[1] * temp_v10;
            pfVar15[2] = pfVar15[2] * temp_v12;
            pfVar15[4] = pfVar15[4] * temp_v8;
            pfVar15[5] = pfVar15[5] * temp_v10;
            pfVar15[6] = pfVar15[6] * temp_v12;
            pfVar15[8] = pfVar15[8] * temp_v8;
            pfVar15[9] = pfVar15[9] * temp_v10;
            pfVar15[10] = pfVar15[10] * temp_v12;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < temp_v6);
        return;
      }
    }
  }
  else {
    temp_v6 = param_1->field_0x8;
    temp_v5 = param_1->field_0xc;
    temp_v7 = param_1->field_0x14;
    temp_v4 = 0;
    if (temp_v4 < temp_v6) {
      do {
        puVar9 = (unsigned int *)(param_1->field_0xc + temp_v4 * 0x40);
        temp_v1 = (unsigned int)*(unsigned short *)(param_1->field_0x4 + temp_v4 * 2);
        if ((int)temp_v1 < temp_v6) {
          puVar2 = (unsigned int *)(temp_v5 + temp_v1 * 0x40);
          pfVar15 = (float *)(temp_v7 + temp_v1 * 0x30);
          pfVar16 = (float *)(temp_v7 + temp_v4 * 0x30);
          if ((~*puVar2 & 0x2800000) != 0) {
            temp_v14 = *pfVar15;
            temp_v17 = pfVar15[1];
            temp_v16 = pfVar15[2];
            temp_v24 = pfVar15[7];
            temp_v26 = pfVar15[0xb];
            temp_v8 = (float)puVar2[1];
            temp_v10 = (float)puVar2[2];
            temp_v12 = (float)puVar2[3];
            temp_v19 = pfVar15[4];
            temp_v18 = pfVar15[5];
            temp_v20 = pfVar15[6];
            temp_v21 = pfVar15[8];
            temp_v22 = pfVar15[9];
            temp_v23 = pfVar15[10];
            pfVar16[3] = pfVar15[3];
            pfVar16[7] = temp_v24;
            pfVar16[0xb] = temp_v26;
            pfVar16[8] = temp_v21 * temp_v8;
            pfVar16[9] = temp_v22 * temp_v10;
            pfVar16[10] = temp_v23 * temp_v12;
            pfVar16[4] = temp_v19 * temp_v8;
            pfVar16[5] = temp_v18 * temp_v10;
            pfVar16[6] = temp_v20 * temp_v12;
            *pfVar16 = temp_v14 * temp_v8;
            pfVar16[1] = temp_v17 * temp_v10;
            pfVar16[2] = temp_v16 * temp_v12;
            pfVar15 = pfVar16;
          }
          nn_math_ARMv6_MTX34MultAsm(pfVar16,pfVar15,temp_v5 + temp_v4 * 0x40 + 0x10);
        }
        else {
          puVar2 = (unsigned int *)(temp_v5 + temp_v4 * 0x40);
          pfVar15 = (float *)(temp_v7 + temp_v4 * 0x30);
          if ((~*puVar2 & 0xc000000) != 0) {
            if (param_2 != (float *)0x0) {
              nn_math_ARMv6_MTX34MultAsm(pfVar15,param_2,puVar2 + 4);
            }
            else {
              temp_v8 = (float)puVar2[5];
              temp_v10 = (float)puVar2[6];
              temp_v12 = (float)puVar2[7];
              temp_v14 = (float)puVar2[8];
              temp_v17 = (float)puVar2[9];
              temp_v16 = (float)puVar2[10];
              temp_v19 = (float)puVar2[0xb];
              *pfVar15 = (float)puVar2[4];
              pfVar15[1] = temp_v8;
              pfVar15[2] = temp_v10;
              pfVar15[3] = temp_v12;
              pfVar15[4] = temp_v14;
              pfVar15[5] = temp_v17;
              pfVar15[6] = temp_v16;
              pfVar15[7] = temp_v19;
              temp_v10 = (float)puVar2[0xd];
              temp_v12 = (float)puVar2[0xe];
              temp_v8 = (float)puVar2[0xf];
              pfVar15[8] = (float)puVar2[0xc];
              pfVar15[0xb] = temp_v8;
              pfVar15[9] = temp_v10;
              pfVar15[10] = temp_v12;
            }
          }
          else if (param_2 != (float *)0x0) {
            temp_v8 = param_2[1];
            temp_v10 = param_2[2];
            temp_v12 = param_2[3];
            temp_v14 = param_2[4];
            temp_v17 = param_2[5];
            temp_v16 = param_2[6];
            temp_v19 = param_2[7];
            *pfVar15 = *param_2;
            pfVar15[1] = temp_v8;
            pfVar15[2] = temp_v10;
            pfVar15[3] = temp_v12;
            pfVar15[4] = temp_v14;
            pfVar15[5] = temp_v17;
            pfVar15[6] = temp_v16;
            pfVar15[7] = temp_v19;
            temp_v8 = param_2[8];
            temp_v10 = param_2[9];
            temp_v12 = param_2[10];
            pfVar15[0xb] = param_2[0xb];
            pfVar15[8] = temp_v8;
            pfVar15[9] = temp_v10;
            pfVar15[10] = temp_v12;
          }
          else {
            pfVar16 = (float *)FUN_001a1e28();
            temp_v8 = pfVar16[1];
            temp_v10 = pfVar16[2];
            temp_v12 = pfVar16[3];
            temp_v14 = pfVar16[4];
            temp_v17 = pfVar16[5];
            temp_v16 = pfVar16[6];
            temp_v19 = pfVar16[7];
            *pfVar15 = *pfVar16;
            pfVar15[1] = temp_v8;
            pfVar15[2] = temp_v10;
            pfVar15[3] = temp_v12;
            pfVar15[4] = temp_v14;
            pfVar15[5] = temp_v17;
            pfVar15[6] = temp_v16;
            pfVar15[7] = temp_v19;
            temp_v8 = pfVar16[8];
            temp_v10 = pfVar16[9];
            temp_v12 = pfVar16[10];
            pfVar15[0xb] = pfVar16[0xb];
            pfVar15[8] = temp_v8;
            pfVar15[9] = temp_v10;
            pfVar15[10] = temp_v12;
          }
        }
        temp_v4 = temp_v4 + 1;
        *puVar9 = (*puVar9 & 0xfffffffd) | 4;
      } while (temp_v4 < temp_v6);
    }
    temp_v6 = param_1->field_0x8;
    temp_v4 = 0;
    if (temp_v4 < temp_v6) {
      do {
        puVar9 = (unsigned int *)(temp_v5 + temp_v4 * 0x40);
        if ((~*puVar9 & 0x2800000) != 0) {
          pfVar15 = (float *)(temp_v7 + temp_v4 * 0x30);
          temp_v10 = (float)puVar9[1];
          temp_v8 = (float)puVar9[2];
          temp_v12 = (float)puVar9[3];
          *pfVar15 = *pfVar15 * temp_v10;
          pfVar15[1] = pfVar15[1] * temp_v8;
          pfVar15[2] = pfVar15[2] * temp_v12;
          pfVar15[4] = pfVar15[4] * temp_v10;
          pfVar15[5] = pfVar15[5] * temp_v8;
          pfVar15[6] = pfVar15[6] * temp_v12;
          pfVar15[8] = pfVar15[8] * temp_v10;
          pfVar15[9] = pfVar15[9] * temp_v8;
          pfVar15[10] = pfVar15[10] * temp_v12;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < temp_v6);
    }
  }
  return;
}
