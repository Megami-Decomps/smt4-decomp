/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00200b38` (_code @ 0x200b38, 0x498 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp238; /* 0x238: local_238 */
    unsigned int sp38C; /* 0x38c: local_38c */
    unsigned int sp390; /* 0x390: local_390 */
} param_1_stack;

/* Supplied declaration required: FUN_001ab5f0. */
/* Supplied declaration required: FUN_001ab6d8. */
extern int FUN_001ab8c8(void);
/* Supplied declaration required: FUN_001dce70. */
/* Supplied declaration required: FUN_001dcec8. */
/* Supplied declaration required: FUN_001ed17c. */
/* Supplied declaration required: FUN_00211b94. */
/* Supplied declaration required: FUN_002546ec. */
/* Supplied declaration required: FUN_00254718. */
/* Supplied declaration required: FUN_002547a8. */
extern unsigned int FUN_002582e8(void);
/* Supplied declaration required: FUN_002915b4. */
/* Supplied declaration required: FUN_002916b8. */
/* Supplied declaration required: FUN_00291950. */
/* Supplied declaration required: FUN_002bcf58. */
extern int FUN_002cd970(unsigned char, unsigned int);
extern int FUN_002fde90(unsigned char, int);
extern int FUN_002fdebc(void);
extern int FUN_0030a09c(unsigned char);
extern unsigned long long *FUN_00322c98(unsigned char, int);
extern int FUN_00324d1c(unsigned char, int);


void FUN_00200b38(unsigned int *param_1)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned long long *puVar3;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned long long temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8 [32];
  unsigned char temp_v9 [288];
  unsigned int temp_v10;
  unsigned int uStack_234;
  unsigned int uStack_230;
  unsigned char temp_v11 [496];
  char temp_v12;
  
  temp_v2 = 0;
  if ((int)param_1[1] <= (int)param_1[2]) {
    temp_v0 = FUN_001ab8c8();
    if (-1 < (int)((temp_v0 - (unsigned int)*(unsigned char *)(param_1 + 0xc)) - 1)) {
      temp_v0 = FUN_002fdebc();
      temp_v1 = FUN_0030a09c(*(unsigned char *)(param_1 + 0xc));
      if (0 < temp_v1) {
        do {
          temp_v1 = FUN_00324d1c(*(unsigned char *)(param_1 + 0xc),temp_v2);
          if (temp_v1 == param_1[1]) {
            temp_v1 = FUN_002547a8(*(unsigned char *)(param_1 + 0xc),temp_v2);
            FUN_002bcf58(temp_v8,temp_v0 + temp_v1 * 0x348,0x348);
            temp_v1 = FUN_002547a8(*(unsigned char *)(param_1 + 0xc),temp_v2);
            temp_v3 = temp_v0 + temp_v1 * 0x348 + 0x204;
            puVar3 = (unsigned long long *)FUN_00322c98(*(unsigned char *)(param_1 + 0xc),temp_v2);
            temp_v5 = *puVar3;
            temp_v7 = *(unsigned int *)(puVar3 + 1);
            temp_v1 = FUN_002fde90(*(unsigned char *)(param_1 + 0xc),temp_v2);
            if (temp_v1 < 1) {
              temp_v1 = 1;
            }
            temp_v4 = (unsigned int)temp_v5;
            temp_v6 = (unsigned int)((unsigned long long)temp_v5 >> 0x20);
            if (temp_v12 != '\0') {
              if (temp_v12 != '\x01') {
                if (temp_v12 != '\x02') {
                  if ((temp_v12 == '\x03') && ((int)param_1[6] < 0x10)) {
                    temp_v10 = temp_v4;
                    uStack_234 = temp_v6;
                    uStack_230 = temp_v7;
                    FUN_00254718(temp_v8);
                    temp_v7 = FUN_002547a8(*(unsigned char *)(param_1 + 0xc),temp_v2);
                    FUN_001ab6d8(temp_v7,temp_v9,temp_v11,param_1 + 0xd,
                                 param_1 + param_1[6] + 0x44,*(unsigned char *)(param_1 + 0x54),temp_v1,
                                 temp_v3);
                    param_1[param_1[6] + 0x44] = temp_v7;
                    param_1[6] = param_1[6] + 1;
                  }
                }
                else if ((int)param_1[5] < 0x10) {
                  temp_v10 = temp_v4;
                  uStack_234 = temp_v6;
                  uStack_230 = temp_v7;
                  FUN_00254718(temp_v8);
                  temp_v7 = FUN_002547a8(*(unsigned char *)(param_1 + 0xc),temp_v2);
                  FUN_001ab5f0(temp_v7,temp_v9,temp_v11,param_1 + 0xd,
                               param_1 + param_1[5] + 0x34,*(unsigned char *)(param_1 + 0x54),temp_v1,
                               temp_v3);
                  param_1[param_1[5] + 0x34] = temp_v7;
                  param_1[5] = param_1[5] + 1;
                }
              }
              else if ((int)param_1[4] < 0x10) {
                temp_v10 = temp_v4;
                uStack_234 = temp_v6;
                uStack_230 = temp_v7;
                FUN_00254718(temp_v8);
                temp_v7 = FUN_002547a8(*(unsigned char *)(param_1 + 0xc),temp_v2);
                FUN_001ed17c(temp_v7,temp_v9,temp_v11,param_1 + 0xd,param_1 + param_1[4] + 0x24
                             ,*(unsigned char *)(param_1 + 0x54),temp_v1,temp_v3);
                param_1[param_1[4] + 0x24] = temp_v7;
                param_1[4] = param_1[4] + 1;
              }
            }
            else if ((int)param_1[3] < 0x10) {
              temp_v10 = temp_v4;
              uStack_234 = temp_v6;
              uStack_230 = temp_v7;
              FUN_00254718(temp_v8);
              temp_v7 = FUN_002547a8(*(unsigned char *)(param_1 + 0xc),temp_v2);
              FUN_002915b4(temp_v7,temp_v9,temp_v11,0,param_1 + 0xd,param_1 + param_1[3] + 0x14
                           ,param_1[3] & 0xff,*(unsigned char *)(param_1 + 0x54),temp_v1,temp_v3);
              param_1[param_1[3] + 0x14] = temp_v7;
              param_1[3] = param_1[3] + 1;
            }
          }
          temp_v2 = temp_v2 + 1;
          temp_v1 = FUN_0030a09c(*(unsigned char *)(param_1 + 0xc));
        } while (temp_v2 < temp_v1);
      }
    }
    temp_v2 = FUN_002cd970(*(unsigned char *)(param_1 + 0xc),param_1[1]);
    if ((temp_v2 != 0) && ((*(unsigned int *)(temp_v2 + 8) & 0xfc0) != 0)) {
      temp_v7 = FUN_002582e8();
      FUN_002546ec(temp_v7,*(unsigned char *)(temp_v2 + 0x14),0);
    }
    param_1[1] = param_1[1] + 1;
    return;
  }
  temp_v2 = 0;
  if (param_1 != (unsigned int *)0x0) {
    if (0 < (int)param_1[3]) {
      do {
        FUN_002916b8(param_1[temp_v2 + 0x14]);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)param_1[3]);
    }
    temp_v2 = 0;
    if (temp_v2 < (int)param_1[4]) {
      do {
        FUN_00211b94(param_1[temp_v2 + 0x24]);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)param_1[4]);
    }
    temp_v2 = 0;
    if (temp_v2 < (int)param_1[6]) {
      do {
        FUN_001dcec8(param_1[temp_v2 + 0x44]);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)param_1[6]);
    }
    temp_v2 = 0;
    if (temp_v2 < (int)param_1[5]) {
      do {
        FUN_001dce70(param_1[temp_v2 + 0x34]);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)param_1[5]);
    }
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[7] = 0;
    param_1[1] = 0;
    if ((unsigned int *)*param_1 != (unsigned int *)0x0) {
      *(unsigned int *)*param_1 = 0;
    }
  }
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00291950(param_1);
  return;
}
