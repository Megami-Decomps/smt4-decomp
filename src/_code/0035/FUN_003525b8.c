/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003525b8` (_code @ 0x3525b8, 0x2cc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_4_stack;

extern unsigned char LAB_00352884; /* 0x352884 */
extern unsigned char LAB_0035288c; /* 0x35288c */
extern unsigned char LAB_00352894; /* 0x352894 */
extern unsigned char LAB_003528a0; /* 0x3528a0 */
extern unsigned char LAB_003528b0; /* 0x3528b0 */
extern unsigned int DAT_00471a50; /* 0x471a50 */
extern unsigned int DAT_00471a54; /* 0x471a54 */
extern unsigned char DAT_004e655c; /* 0x4e655c */
extern unsigned char DAT_004e675c; /* 0x4e675c */

/* Supplied declaration required: FUN_0023a3a4. */
extern int FUN_002b45f8(unsigned int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002c607c. */
/* Supplied declaration required: FUN_003532a8. */
/* Supplied declaration required: FUN_0035334c. */
/* Supplied declaration required: FUN_0035382c. */
extern unsigned char *FUN_003538b8(int);
extern unsigned int FUN_003538c4(int);
/* Supplied declaration required: FUN_003538d4. */
/* Supplied declaration required: FUN_0035fa44. */


int FUN_003525b8(int param_1,int param_2,unsigned int param_3,int *param_4)

{
/* irregular: 1 goto(s); 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar4;
  int *piVar5;
  unsigned int *puVar6;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned char *temp_v9;
  unsigned int temp_v10;
  int *temp_v11;
  int temp_v12;
  unsigned char *puStack_68;
  unsigned int temp_v13;
  unsigned char *temp_v14;
  unsigned int uStack_5c;
  int *temp_v15;
  unsigned int temp_v16;
  int *temp_v17;
  unsigned int uStack_4c;
  int temp_v18;
  int temp_v19;
  int temp_v20;
  unsigned int temp_v21;
  unsigned int uStack_38;
  int temp_v22;
  unsigned int uStack_30;
  int *temp_v23;
  
  temp_v0 = param_1;
  FUN_003538d4(param_1,param_4[4],param_4[5]);
  if (-1 < temp_v0) {
    temp_v22 = param_2;
    uStack_30 = param_3;
    temp_v9 = (unsigned char *)FUN_003538b8(param_1);
    temp_v10 = FUN_003538c4(param_1);
    temp_v3 = *(unsigned int *)(param_1 + 8);
    temp_v5 = *(unsigned int *)(param_1 + 0xc);
    FUN_0035334c();
    FUN_0023a3a4(&LAB_00352884);
    FUN_0023a3a4(&LAB_0035288c);
    FUN_0023a3a4(&LAB_00352894);
    FUN_0023a3a4(&LAB_003528a0);
    FUN_0023a3a4(&LAB_003528b0);
    FUN_003532a8((char)param_4[10]);
    temp_v23 = (int *)*param_4;
    if ((int *)*param_4 == (int *)0x0) {
      temp_v23 = param_4;
    }
    piVar5 = (int *)param_4[6];
    temp_v11 = (int *)param_4[2];
    if ((int *)param_4[2] == (int *)0x0) {
      temp_v11 = param_4;
    }
    piVar4 = (int *)param_4[7];
    temp_v15 = piVar5;
    if (piVar5 == (int *)0x0) {
      temp_v15 = param_4;
    }
    temp_v17 = piVar4;
    if (piVar4 == (int *)0x0) {
      temp_v17 = param_4;
    }
    temp_v18 = param_4[0xb];
    temp_v19 = param_4[0xc];
    uStack_4c = (unsigned int)(piVar4 != (int *)0x0);
    temp_v16 = (unsigned int)(piVar5 != (int *)0x0);
    temp_v13 = DAT_00471a54;
    temp_v14 = temp_v9;
    uStack_5c = temp_v10;
    temp_v12 = param_4[3];
    temp_v10 = DAT_00471a50;
    temp_v9 = &DAT_004e655c;
    puStack_68 = &DAT_004e675c;
    temp_v0 = temp_v22;
    temp_v20 = param_1 + 4;
    temp_v21 = temp_v3;
    uStack_38 = temp_v5;
    FUN_0035fa44(temp_v22,uStack_30,temp_v23,param_4[1]);
    if (-1 < temp_v0) {
      temp_v0 = 0;
    }
    if (-1 < temp_v0) {
      temp_v6 = 0;
      if ((*(int *)(param_1 + 4) != 0) && (*(int *)(*(int *)(param_1 + 4) + 4) != 0)) {
        do {
          piVar5 = *(int **)(param_1 + 4);
          if ((piVar5 != (int *)0x0) && ((unsigned int)piVar5[1] >= temp_v6)) {
            puVar6 = (unsigned int *)(*piVar5 + temp_v6 * 0x30);
          }
          else {
            puVar6 = (unsigned int *)0x0;
          }
          temp_v7 = puVar6[7];
          temp_v4 = 0;
          if (temp_v4 < temp_v7) {
            do {
              temp_v0 = FUN_002b45f8(*(unsigned int *)(puVar6[6] + temp_v4 * 8),&LAB_003528a0,0x40);
              if (temp_v0 == 0) {
                temp_v4 = *(unsigned int *)(puVar6[6] + temp_v4 * 8 + 4);
                goto LAB_003527a4;
              }
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < temp_v7);
          }
          temp_v4 = 0;
LAB_003527a4:
          FUN_002c607c(temp_v4,0,10);
          temp_v1 = puVar6[1];
          temp_v7 = temp_v1 << 0x18;
          temp_v8 = temp_v1 >> 0xe == 0x10;
          if (temp_v8) {
            temp_v7 = temp_v1 & 0xffff;
          }
          temp_v9 = (unsigned char *)((*puVar6 >> 8) & 0xfffff);
          if (temp_v8 && temp_v7 == 0x8c) {
            temp_v1 = 0;
          }
          else {
            temp_v8 = temp_v1 >> 0xe == 0x10;
            if (temp_v8) {
              temp_v1 = temp_v1 & 0xffff;
            }
            if (temp_v8 && temp_v1 == 0xd) {
              temp_v1 = 1;
            }
            else {
              temp_v1 = 0xff;
            }
          }
          temp_v10 = temp_v1 | (temp_v7 & 0xffff0000) | ((*puVar6 & 0xff) << 8);
          temp_v0 = param_1;
          FUN_0035382c(param_1,&temp_v9,temp_v4 & 0xffff);
          if (temp_v0 < 0) {
            return temp_v0;
          }
          temp_v6 = temp_v6 + 1;
          temp_v4 = 0;
          if (*(int *)(param_1 + 4) != 0) {
            temp_v4 = *(unsigned int *)(*(int *)(param_1 + 4) + 4);
          }
        } while (temp_v6 < temp_v4);
      }
      temp_v2 = *(int *)(param_1 + 4);
      temp_v0 = 0;
      if (temp_v2 != 0) {
        temp_v0 = *(int *)(temp_v2 + 8);
      }
      if (temp_v2 != 0 && temp_v0 != 0) {
        temp_v0 = 0;
      }
      else {
        temp_v0 = -0x375ec6f8;
      }
      return temp_v0;
    }
  }
  return temp_v0;
}
