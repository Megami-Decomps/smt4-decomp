/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00200c9c` (_code @ 0x200c9c, 0x498 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp238; /* 0x238: local_238 */
    unsigned int sp38C; /* 0x38c: local_38c */
    unsigned int sp390; /* 0x390: local_390 */
} param_1_stack;

/* Supplied declaration required: FUN_001ab6f4. */
/* Supplied declaration required: FUN_001ab7dc. */
extern int FUN_001ab9cc(void);
/* Supplied declaration required: FUN_001dcf78. */
/* Supplied declaration required: FUN_001dcfd0. */
/* Supplied declaration required: FUN_001ed268. */
/* Supplied declaration required: FUN_00211c90. */
/* Supplied declaration required: FUN_002544ac. */
/* Supplied declaration required: FUN_002544d8. */
/* Supplied declaration required: FUN_00254568. */
extern unsigned int FUN_002580b4(void);
/* Supplied declaration required: FUN_00291310. */
/* Supplied declaration required: FUN_00291414. */
/* Supplied declaration required: FUN_002916ac. */
/* Supplied declaration required: FUN_002bcd68. */
extern int FUN_002cda20(unsigned char, unsigned int);
extern int FUN_002fdecc(unsigned char, int);
extern int FUN_002fdef8(void);
extern int FUN_0030a0d4(unsigned char);
extern unsigned long long *FUN_00322aa8(unsigned char, int);
extern int FUN_00324b24(unsigned char, int);


void FUN_00200c9c(unsigned int *param_1)

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
    temp_v0 = FUN_001ab9cc();
    if (-1 < (int)((temp_v0 - (unsigned int)*(unsigned char *)(param_1 + 0xc)) - 1)) {
      temp_v0 = FUN_002fdef8();
      temp_v1 = FUN_0030a0d4(*(unsigned char *)(param_1 + 0xc));
      if (0 < temp_v1) {
        do {
          temp_v1 = FUN_00324b24(*(unsigned char *)(param_1 + 0xc),temp_v2);
          if (temp_v1 == param_1[1]) {
            temp_v1 = FUN_00254568(*(unsigned char *)(param_1 + 0xc),temp_v2);
            FUN_002bcd68(temp_v8,temp_v0 + temp_v1 * 0x348,0x348);
            temp_v1 = FUN_00254568(*(unsigned char *)(param_1 + 0xc),temp_v2);
            temp_v3 = temp_v0 + temp_v1 * 0x348 + 0x204;
            puVar3 = (unsigned long long *)FUN_00322aa8(*(unsigned char *)(param_1 + 0xc),temp_v2);
            temp_v5 = *puVar3;
            temp_v7 = *(unsigned int *)(puVar3 + 1);
            temp_v1 = FUN_002fdecc(*(unsigned char *)(param_1 + 0xc),temp_v2);
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
                    FUN_002544d8(temp_v8);
                    temp_v7 = FUN_00254568(*(unsigned char *)(param_1 + 0xc),temp_v2);
                    FUN_001ab7dc(temp_v7,temp_v9,temp_v11,param_1 + 0xd,
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
                  FUN_002544d8(temp_v8);
                  temp_v7 = FUN_00254568(*(unsigned char *)(param_1 + 0xc),temp_v2);
                  FUN_001ab6f4(temp_v7,temp_v9,temp_v11,param_1 + 0xd,
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
                FUN_002544d8(temp_v8);
                temp_v7 = FUN_00254568(*(unsigned char *)(param_1 + 0xc),temp_v2);
                FUN_001ed268(temp_v7,temp_v9,temp_v11,param_1 + 0xd,param_1 + param_1[4] + 0x24
                             ,*(unsigned char *)(param_1 + 0x54),temp_v1,temp_v3);
                param_1[param_1[4] + 0x24] = temp_v7;
                param_1[4] = param_1[4] + 1;
              }
            }
            else if ((int)param_1[3] < 0x10) {
              temp_v10 = temp_v4;
              uStack_234 = temp_v6;
              uStack_230 = temp_v7;
              FUN_002544d8(temp_v8);
              temp_v7 = FUN_00254568(*(unsigned char *)(param_1 + 0xc),temp_v2);
              FUN_00291310(temp_v7,temp_v9,temp_v11,0,param_1 + 0xd,param_1 + param_1[3] + 0x14
                           ,param_1[3] & 0xff,*(unsigned char *)(param_1 + 0x54),temp_v1,temp_v3);
              param_1[param_1[3] + 0x14] = temp_v7;
              param_1[3] = param_1[3] + 1;
            }
          }
          temp_v2 = temp_v2 + 1;
          temp_v1 = FUN_0030a0d4(*(unsigned char *)(param_1 + 0xc));
        } while (temp_v2 < temp_v1);
      }
    }
    temp_v2 = FUN_002cda20(*(unsigned char *)(param_1 + 0xc),param_1[1]);
    if ((temp_v2 != 0) && ((*(unsigned int *)(temp_v2 + 8) & 0xfc0) != 0)) {
      temp_v7 = FUN_002580b4();
      FUN_002544ac(temp_v7,*(unsigned char *)(temp_v2 + 0x14),0);
    }
    param_1[1] = param_1[1] + 1;
    return;
  }
  temp_v2 = 0;
  if (param_1 != (unsigned int *)0x0) {
    if (0 < (int)param_1[3]) {
      do {
        FUN_00291414(param_1[temp_v2 + 0x14]);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)param_1[3]);
    }
    temp_v2 = 0;
    if (temp_v2 < (int)param_1[4]) {
      do {
        FUN_00211c90(param_1[temp_v2 + 0x24]);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)param_1[4]);
    }
    temp_v2 = 0;
    if (temp_v2 < (int)param_1[6]) {
      do {
        FUN_001dcfd0(param_1[temp_v2 + 0x44]);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)param_1[6]);
    }
    temp_v2 = 0;
    if (temp_v2 < (int)param_1[5]) {
      do {
        FUN_001dcf78(param_1[temp_v2 + 0x34]);
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
  FUN_002916ac(param_1);
  return;
}
