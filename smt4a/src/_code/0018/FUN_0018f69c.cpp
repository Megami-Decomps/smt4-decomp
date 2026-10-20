/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018f69c` (_code @ 0x18f69c, 0x324 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a081c(unsigned char [60]);
int FUN_001a5678(int, int *, unsigned char [60], int, int, int, unsigned int, unsigned int);
int FUN_001a7a20(...);
int FUN_002e3390(...);
int FUN_0030ea58(int, int);

/* stack frame of param_4: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
} param_4_stack;

/* Supplied declaration required: FUN_001a081c. */
/* Supplied declaration required: FUN_001a5678. */
/* Supplied declaration required: FUN_001a7a20. */
/* Supplied declaration required: FUN_002e3390. */
/* Supplied declaration required: FUN_0030ea58. */


unsigned int FUN_0018f69c(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char *puVar5;
  int temp_v4;
  unsigned char *puVar7;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int *piVar11;
  int *piVar12;
  int temp_v8;
  int temp_v9;
  int *temp_v10 [3];
  unsigned char temp_v11 [60];
  unsigned char temp_v12 [36];
  unsigned char temp_v13 [72];
  int *temp_v14;
  unsigned int temp_v15;
  unsigned char *temp_v16 [4];
  unsigned char *temp_v17;
  int temp_v18;
  int iStack_30;
  unsigned int temp_v19;
  unsigned int uStack_28;
  
  temp_v15 = 0;
  piVar12 = *(int **)(param_1 + 0x34);
  temp_v14 = piVar12 + (unsigned int)*(unsigned short *)(param_1 + 0x38) * 0xb;
  if (piVar12 != temp_v14) {
    temp_v16[3] = temp_v12;
    temp_v17 = temp_v13;
    temp_v18 = param_1;
    iStack_30 = param_2;
    temp_v19 = param_3;
    uStack_28 = param_4;
    do {
      temp_v9 = *piVar12;
      if (temp_v9 != 0) {
        if (*(int *)(temp_v9 + 8) == 0) {
          temp_v0 = *(int *)(param_2 + 0x30);
          temp_v6 = *(unsigned int *)(temp_v9 + 0x104);
          temp_v1 = FUN_002e3390(temp_v6);
          temp_v0 = FUN_001a7a20(temp_v0 + 0x1c,temp_v6,temp_v1);
          if (temp_v0 == 0xffff) {
            temp_v15 = temp_v15 | 0x80000010;
          }
          else {
            *(unsigned int *)(temp_v9 + 8) =
                 *(unsigned int *)(*(int *)(*(int *)(param_2 + 0x30) + 0x18) + temp_v0 * 4);
          }
        }
        temp_v0 = 0;
        do {
          temp_v8 = temp_v9 + temp_v0 * 4;
          if (((*(int *)(temp_v8 + 0x8c) == 0) && (temp_v2 = *(int *)(temp_v8 + 0xd4), temp_v2 != 0)) &&
             (*(int *)(temp_v8 + 0xec) != 0)) {
            temp_v4 = *(int *)(param_2 + 0x30);
            temp_v1 = FUN_002e3390();
            temp_v2 = FUN_001a7a20(temp_v4 + 0x34,temp_v2,temp_v1);
            if (temp_v2 == 0xffff) {
              temp_v15 = temp_v15 | 0x80000020;
            }
            else {
              temp_v4 = *(int *)(temp_v8 + 0xec);
              piVar11 = *(int **)(*(int *)(*(int *)(param_2 + 0x30) + 0x30) + temp_v2 * 4);
              if (temp_v4 != 0) {
                temp_v2 = *piVar11;
                temp_v7 = temp_v2 + piVar11[1] * 0x10;
                for (; temp_v2 != temp_v7; temp_v2 = temp_v2 + 0x10) {
                  temp_v3 = *(int *)(temp_v2 + 0xc);
                  FUN_0030ea58(temp_v3,temp_v4);
                  if (temp_v3 == 0) break;
                }
                if (temp_v2 == *piVar11 + piVar11[1] * 0x10) {
                  temp_v2 = 0;
                }
              }
              else {
                temp_v2 = 0;
              }
              *(int *)(temp_v8 + 0x8c) = temp_v2;
            }
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < 6);
      }
      FUN_001a081c(temp_v11);
      temp_v16[0] = temp_v11;
      temp_v16[1] = temp_v16[3];
      temp_v9 = 0;
      temp_v16[2] = temp_v17;
      temp_v5 = 0;
      temp_v10[0] = piVar12 + 1;
      temp_v10[1] = piVar12 + 2;
      temp_v10[2] = piVar12 + 3;
      do {
        piVar11 = temp_v10[temp_v5];
        if ((*piVar11 == 0) && (temp_v0 = piVar12[temp_v5 + 7], temp_v0 != 0)) {
          temp_v8 = *(int *)(param_2 + 0x30);
          temp_v1 = FUN_002e3390();
          temp_v0 = FUN_001a7a20(temp_v8 + 0x28,temp_v0,temp_v1);
          if (temp_v0 == 0xffff) {
            temp_v15 = temp_v15 | 0x80000008;
          }
          else {
            temp_v9 = temp_v9 + 1;
            *piVar11 = *(int *)(*(int *)(*(int *)(param_2 + 0x30) + 0x24) + temp_v0 * 4);
          }
        }
        temp_v0 = *piVar11;
        puVar7 = (unsigned char *)(piVar12[6] + temp_v5 * 0x10);
        puVar5 = temp_v16[temp_v5];
        if (temp_v0 != 0) {
          puVar5[8] = *(unsigned char *)(temp_v0 + 0x18);
          puVar5[10] = puVar7[1];
          puVar5[9] = puVar7[2];
          puVar5[0xb] = puVar7[3];
          puVar5[0xc] = puVar7[4];
          *(unsigned int *)(puVar5 + 0x10) = *(unsigned int *)(puVar7 + 8);
          puVar5[0x14] = puVar7[5];
          puVar5[0x15] = *(char *)(temp_v0 + 0x19) - '\x01';
          puVar5[0x16] = puVar7[0xc];
          puVar5[0x17] = puVar7[0xd];
          puVar5[0x18] = puVar7[0xe];
          puVar5[0x19] = puVar7[0xf];
          if (temp_v5 < 3) {
            puVar5[0x1c] = *puVar7;
          }
        }
        temp_v5 = temp_v5 + 1;
      } while ((int)temp_v5 < 3);
      if (temp_v9 != 0) {
        temp_v9 = piVar12[6];
        FUN_001a5678(temp_v18,piVar12 + 4,temp_v11,temp_v9,temp_v9 + 0x10,temp_v9 + 0x20,temp_v19,
                     uStack_28);
      }
      piVar12 = piVar12 + 0xb;
    } while (piVar12 != temp_v14);
  }
  return temp_v15;
}

} /* extern "C" */
