/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fc300` (_code @ 0x3fc300, 0x168 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp168; /* 0x168: local_168 */
} param_7_stack;

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
extern unsigned long long FUN_00100c90(unsigned int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00239c78. */
/* Supplied declaration required: FUN_002c6c10. */


void FUN_003fc300(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,int *param_4,unsigned int param_5,
                 unsigned int param_6,unsigned int param_7)

{
/* irregular: 2 goto(s); 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char *puVar2;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned long long temp_v6;
  unsigned char temp_v7 [256];
  int temp_v8;
  unsigned int temp_v9;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int *temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int *puStack_34;
  unsigned int *temp_v17;
  unsigned int *temp_v18;
  int *piStack_28;
  
  temp_v12 = param_6;
  temp_v14 = 0;
  temp_v13 = param_4;
  puStack_34 = param_1;
  temp_v17 = param_2;
  temp_v18 = param_3;
  piStack_28 = param_4;
  FUN_002c6c10(param_5,param_1[2]);
  temp_v0 = param_1[3];
  FUN_00239c78(temp_v0,4,*param_1 + temp_v1 * 4,
               param_1[1] + (unsigned int)romwright_carry_4(*param_1,temp_v1 * 4),&temp_v15,4);
  puVar2 = (unsigned char *)(temp_v0 & 0x80000000);
  if (-1 < (int)puVar2) {
    if (temp_v15 != 0xffffffff) {
      temp_v16 = param_7 >> 1;
      temp_v4 = temp_v15;
      do {
        temp_v2 = param_1[4] + temp_v4;
        temp_v3 = param_1[5] + (unsigned int)romwright_carry_4(param_1[4],temp_v4);
        temp_v0 = param_1[7];
        FUN_00239c78(temp_v0,puVar2,temp_v2,temp_v3,&temp_v8,0x18);
        temp_v5 = 0;
        if (-1 < (int)temp_v0) {
          temp_v5 = temp_v11;
          if (temp_v11 != 0) {
            temp_v0 = param_1[7];
            FUN_00239c78(temp_v0,0,temp_v2 + 0x18,temp_v3 + (unsigned int)(0xffffffe7 < temp_v2),temp_v7,
                         temp_v11);
            if ((int)temp_v0 >= 0) {
              temp_v0 = 0;
            }
          }
          else {
            temp_v0 = 0;
          }
        }
        if ((int)temp_v0 < 0) goto LAB_003fc42c;
        puVar2 = temp_v7;
        if (*temp_v13 == temp_v8 && param_7 == temp_v5) {
          temp_v6 = FUN_00100c90(temp_v12,puVar2,temp_v16);
          puVar2 = (unsigned char *)((unsigned long long)temp_v6 >> 0x20);
          if ((int)temp_v6 == 0) {
            temp_v0 = 0;
            temp_v14 = temp_v4;
            goto LAB_003fc42c;
          }
        }
        temp_v4 = temp_v10;
      } while (temp_v10 != 0xffffffff);
    }
    temp_v0 = 0xc880446f;
  }
LAB_003fc42c:
  if (-1 < (int)temp_v0) {
    *temp_v17 = temp_v14;
    *temp_v18 = temp_v9;
    temp_v18[1] = uStack_58;
    temp_v18[2] = uStack_54;
  }
  return;
}
