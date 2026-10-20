/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016bb74` (_code @ 0x16bb74, 0x268 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00198930(int, unsigned int *, unsigned short **);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(float *, int, unsigned short *);

/* stack frame of param_2: 17 slot(s), 62 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned char sp4F; /* 0x4f: local_4f */
    unsigned char sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp98; /* 0x98: local_98 */
} param_2_stack;

extern int DAT_0056fcc0; /* 0x56fcc0 */

#ifndef ROMWRIGHT_PIECE_1_1_DEFINED
#define ROMWRIGHT_PIECE_1_1_DEFINED
#define romwright_piece_1_1(upper, lower) ((unsigned short)(((unsigned short)(unsigned char)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_00198930. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


void FUN_0016bb74(int param_1,int param_2)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  int *piVar6;
  unsigned short *puVar7;
  int temp_v3;
  unsigned short *puVar9;
  int *piVar10;
  unsigned short *temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned short *temp_v7;
  int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  float temp_v15;
  int temp_v16;
  int temp_v17;
  int iStack_2c;
  int temp_v18;
  
  piVar10 = *(int **)(DAT_0056fcc0 + 0x18);
  piVar1 = *(int **)(DAT_0056fcc0 + 0x1c);
  if (piVar10 != piVar1) {
    temp_v16 = param_1 + 0x18;
    iStack_2c = param_1;
    temp_v18 = param_2;
    do {
      temp_v3 = *piVar10;
      if (((*(unsigned int *)(temp_v3 + 4) & 1) == 0) && (*(int *)(temp_v3 + 0x210) != 0)) {
        temp_v0 = *(int *)(temp_v3 + 0x210) + temp_v18 * 8;
        puVar7 = *(unsigned short **)(temp_v0 + 0x48);
        puVar9 = *(unsigned short **)(temp_v0 + 0x4c);
        if (puVar7 < puVar9) {
          temp_v17 = temp_v3 + 0x180;
          temp_v0 = temp_v3 + 0x120;
          do {
            if (((unsigned int)*(unsigned char *)(*(int *)(temp_v3 + 0x114) + (unsigned int)(puVar7[2] >> 3)) &
                (1 << (puVar7[2] & 7))) != 0) {
              temp_v6 = *(int *)(temp_v3 + 0x108);
              temp_v13 = temp_v17;
              temp_v2 = (**(unsigned char **)(temp_v3 + 0x210) & 2) >> 1;
              (*(unsigned short *)((unsigned char *)&temp_v14 + 0)) = romwright_piece_1_1(*(unsigned char *)(temp_v3 + 0x200),(char)temp_v2);
              temp_v1 = temp_v0;
              if ((temp_v2 != 0) && (*(int *)(puVar7 + 10) == 1)) {
                temp_v1 = *(int *)(temp_v6 + 0x14) +
                        (unsigned int)*(unsigned short *)(*(int *)(puVar7 + 8) + 4) * 0x30;
              }
              temp_v4 = puVar7;
              temp_v12 = temp_v0;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v9,temp_v1,puVar7 + 0x10);
              temp_v1 = *(int *)(param_1 + 0x14);
              temp_v15 = -(*(float *)(temp_v1 + 0x24) * temp_v10 + *(float *)(temp_v1 + 0x28) * temp_v11
                          + *(float *)(temp_v1 + 0x2c) + *(float *)(temp_v1 + 0x20) * temp_v9);
              piVar6 = *(int **)(temp_v4 + 0x1a);
              if (piVar6 != (int *)0x0) {
                temp_v2 = 0;
                if (temp_v2 < *(unsigned short *)(piVar6 + 1)) {
                  do {
                    if (*(char *)(*piVar6 + temp_v2 * 0xc + 4) == '\x04') goto LAB_0016bcfc;
                    temp_v2 = temp_v2 + 1;
                  } while (temp_v2 < *(unsigned short *)(piVar6 + 1));
                }
              }
              else {
LAB_0016bcfc:
                temp_v5 = *(int *)(*(int *)(temp_v3 + 0x210) + 0x34) + (unsigned int)*puVar7 * 0x2c;
                temp_v7 = (unsigned short *)(*(int *)(temp_v3 + 0x10c) + (unsigned int)*puVar7 * 0x158);
                if (*(char *)((unsigned int)temp_v7[0x10] + temp_v16) != '\0') {
                  *temp_v7 = *temp_v7 | 0x100;
                }
                temp_v8 = *(int *)(temp_v3 + 0x254) + (unsigned int)*puVar7 * 0x58;
                puVar5 = *(unsigned int **)(param_1 + 4);
                if (puVar5 != *(unsigned int **)(param_1 + 8)) {
                  *(unsigned int **)(param_1 + 4) = puVar5 + 0xc;
                  if (puVar5 != (unsigned int *)0x0) {
                    *puVar5 = (unsigned int)temp_v4;
                    puVar5[1] = temp_v5;
                    puVar5[2] = temp_v6;
                    puVar5[3] = (unsigned int)temp_v7;
                    puVar5[4] = temp_v8;
                    *(float *)&puVar5[5] = temp_v9;
                    *(float *)&puVar5[6] = temp_v10;
                    *(float *)&puVar5[7] = temp_v11;
                    puVar5[8] = temp_v12;
                    puVar5[9] = temp_v13;
                    puVar5[10] = temp_v14;
                    *(float *)&puVar5[0xb] = temp_v15;
                  }
                }
                else {
                  FUN_00198930(param_1,puVar5,&temp_v4);
                }
              }
            }
            puVar7 = puVar7 + 0x1c;
          } while (puVar7 < puVar9);
        }
      }
      piVar10 = piVar10 + 1;
    } while (piVar10 != piVar1);
  }
  return;
}

} /* extern "C" */
