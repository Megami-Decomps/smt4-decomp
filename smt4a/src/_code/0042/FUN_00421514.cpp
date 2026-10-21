/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00421514` (_code @ 0x421514, 0x330 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int tripleOwnerSetValue(void);
int FUN_004019c0(unsigned int, unsigned char [28]);
int FUN_00401a74(int, float *, float *);
int FUN_0040619c(int, int);

/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp168; /* 0x168: local_168 */
} param_2_stack;

extern int FUN_00102c30(unsigned int, char *);
/* Supplied declaration required: tripleOwnerSetValue. */
/* Supplied declaration required: FUN_004019c0. */
/* Supplied declaration required: FUN_00401a74. */
/* Supplied declaration required: FUN_0040619c. */


void FUN_00421514(int param_1,unsigned int param_2)

{
/* irregular: 4 goto(s); irregular input(s): in_s0; 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned short temp_v6;
  int temp_v7;
  unsigned short *puVar9;
  int temp_v8;
  int temp_v9;
  unsigned int in_s0;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned long long temp_v13;
  unsigned short temp_v14 [128];
  int temp_v15;
  int temp_v16;
  float temp_v17;
  unsigned int uStack_54;
  float temp_v18;
  unsigned int uStack_4c;
  unsigned char temp_v19 [28];
  int temp_v20;
  unsigned int uStack_28;
  
  *(unsigned int *)(param_1 + 4) = param_2;
  *(unsigned int *)(param_1 + 0x30) = in_s0;
  temp_v20 = param_1;
  uStack_28 = param_2;
  FUN_004019c0(param_2,temp_v19);
  if (*(int *)(temp_v20 + 8) != 0) {
    temp_v9 = 0;
    temp_v16 = *(int *)(*(int *)(*(int *)(temp_v20 + 8) + 8) + 0x10);
    if (0 < temp_v16) {
      temp_v13 = 0x3f800000;
      do {
        temp_v0 = *(int *)(*(int *)(temp_v20 + 8) + 8);
        FUN_0040619c(temp_v0,temp_v9);
        if (temp_v0 != 0) {
          tripleOwnerSetValue();
        }
        temp_v15 = 0;
        temp_v7 = 0;
        temp_v8 = *(int *)(*(int *)(temp_v0 + 0x210) + 0x44);
        if (0 < temp_v8) {
          do {
            temp_v4 = 0;
            puVar9 = (unsigned short *)(*(int *)(*(int *)(temp_v0 + 0x210) + 0x40) + temp_v7 * 0x38);
            temp_v5 = *(int *)(*(int *)(temp_v0 + 0x210) + 0x34) + (unsigned int)*puVar9 * 0x2c;
            do {
              if (temp_v4 == 0) {
                temp_v1 = *(int *)(temp_v5 + 4);
LAB_004215fc:
                if ((temp_v1 != 0) &&
                   (temp_v1 = FUN_00102c30(*(unsigned int *)(temp_v1 + 0x1c),"dami"), temp_v1 != 0)) {
                  temp_v1 = 0;
                  if (0 < temp_v15) {
                    do {
                      if ((int)(short)temp_v14[temp_v1 * 2] == (unsigned int)*puVar9) goto LAB_0042167c;
                      temp_v1 = temp_v1 + 1;
                    } while (temp_v1 < temp_v15);
                  }
                  temp_v14[temp_v15 * 2] = *puVar9;
                  temp_v14[temp_v15 * 2 + 1] = (unsigned short)temp_v4;
                  temp_v15 = temp_v15 + 1;
                }
              }
              else {
                if (temp_v4 == 1) {
                  temp_v1 = *(int *)(temp_v5 + 8);
                  goto LAB_004215fc;
                }
                if (temp_v4 == 2) {
                  temp_v1 = *(int *)(temp_v5 + 0xc);
                  goto LAB_004215fc;
                }
              }
LAB_0042167c:
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < 3);
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < temp_v8);
        }
        temp_v8 = *(int *)(temp_v20 + 4);
        FUN_00401a74(temp_v8,&temp_v18,&temp_v17);
        temp_v7 = 0;
        temp_v17 = -(temp_v17 * ((float)temp_v13 / temp_v18));
        temp_v10 = *(unsigned int *)(temp_v8 + 0x10);
        temp_v11 = *(unsigned int *)(temp_v8 + 0x14);
        temp_v12 = *(unsigned int *)(temp_v8 + 0x18);
        temp_v3 = *(unsigned int *)(*(int *)(*(int *)(temp_v8 + 8) + 0xc) + 0x34);
        if (0 < temp_v15) {
          do {
            temp_v8 = (int)(short)temp_v14[temp_v7 * 2 + 1];
            puVar9 = (unsigned short *)(*(int *)(temp_v0 + 0x10c) + (short)temp_v14[temp_v7 * 2] * 0x158);
            if (temp_v8 != 0) {
              if (temp_v8 == 1) {
                temp_v6 = *puVar9 | 0x2000;
                *puVar9 = temp_v6;
              }
              else if (temp_v8 == 2) {
                temp_v6 = *puVar9 | 0x4000;
                *puVar9 = temp_v6;
              }
            }
            else {
              *puVar9 = *puVar9 | 0x1000;
            }
            *(float *)(puVar9 + temp_v8 * 0xc + 0x7e) = temp_v17;
            *(unsigned int *)(puVar9 + temp_v8 * 0xc + 0x80) = uStack_54;
            *(float *)(puVar9 + temp_v8 * 0xc + 0x78) = temp_v18;
            *(unsigned int *)(puVar9 + temp_v8 * 0xc + 0x7a) = uStack_4c;
            if (temp_v8 != 0) {
              if (temp_v8 != 1) {
                if (temp_v8 == 2) {
                  *(unsigned int *)(puVar9 + 0xa0) = temp_v12;
                  puVar9[0xa2] = 0xc;
                  puVar9[0xa3] = 0;
                  goto joined_r0x0042181c;
                }
              }
              else {
                *(unsigned int *)(puVar9 + 0xa0) = temp_v11;
                puVar9[0xa2] = 0xc;
                puVar9[0xa3] = 0;
joined_r0x0042181c:
                if (temp_v3 == 0xc) {
                  temp_v2 = (unsigned char)puVar9[1] | 1;
                }
                else {
                  temp_v2 = (unsigned char)puVar9[1] & 0xfe;
                }
                *(unsigned char *)(puVar9 + 1) = temp_v2;
              }
            }
            else {
              *(unsigned int *)(puVar9 + 0xa0) = temp_v10;
              puVar9[0xa2] = 0xc;
              puVar9[0xa3] = 0;
              if (temp_v3 == 0xc) {
                temp_v2 = (unsigned char)puVar9[1] | 1;
                *(unsigned char *)(puVar9 + 1) = temp_v2;
              }
              else {
                temp_v2 = (unsigned char)puVar9[1] & 0xfe;
                *(unsigned char *)(puVar9 + 1) = temp_v2;
              }
            }
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < temp_v15);
        }
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < temp_v16);
    }
  }
  return;
}

} /* extern "C" */
