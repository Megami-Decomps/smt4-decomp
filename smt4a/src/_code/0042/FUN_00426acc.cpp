/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00426acc` (_code @ 0x426acc, 0x2fc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001029f4(unsigned int, int, int);
int FUN_00195fc8(void);
int recordTableAppend(unsigned char *);
int FUN_00427d6c(int);
int FUN_00427e10(void);
int FUN_00428334(int, unsigned char **, unsigned int);
int FUN_00428428(int, int, int);
int FUN_004396bc(int, unsigned int, int *, int);

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

extern unsigned char LAB_00426dc8; /* 0x426dc8 */
extern unsigned char LAB_00426dd0; /* 0x426dd0 */
extern unsigned char LAB_00426dd8; /* 0x426dd8 */
extern unsigned char LAB_00426de4; /* 0x426de4 */
extern unsigned char LAB_00426df4; /* 0x426df4 */
extern unsigned int DAT_005c0a8c; /* 0x5c0a8c */
extern unsigned int DAT_005c0a90; /* 0x5c0a90 */
extern unsigned char DAT_00642980; /* 0x642980 */
extern unsigned char DAT_00642b80; /* 0x642b80 */

/* Supplied declaration required: FUN_001029f4. */
/* Supplied declaration required: FUN_00195fc8. */
extern int FUN_0019a37c(unsigned int, unsigned char *, unsigned int);
/* Supplied declaration required: recordTableAppend. */
/* Supplied declaration required: FUN_00427d6c. */
/* Supplied declaration required: FUN_00427e10. */
/* Supplied declaration required: FUN_00428334. */
extern unsigned char *FUN_004283c0(int);
extern unsigned int FUN_004283e0(int);
/* Supplied declaration required: FUN_00428428. */
/* Supplied declaration required: FUN_004396bc. */


void FUN_00426acc(int param_1,int param_2,unsigned int param_3,int *param_4)

{
/* irregular: 1 goto(s); 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int *piVar4;
  unsigned int *puVar5;
  unsigned int temp_v2;
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
  FUN_00428428(param_1,param_4[4],param_4[5]);
  if (-1 < temp_v0) {
    temp_v22 = param_2;
    uStack_30 = param_3;
    temp_v9 = (unsigned char *)FUN_004283c0(param_1);
    temp_v10 = FUN_004283e0(param_1);
    temp_v2 = *(unsigned int *)(param_1 + 8);
    temp_v5 = *(unsigned int *)(param_1 + 0xc);
    FUN_00427e10();
    recordTableAppend(&LAB_00426dc8);
    recordTableAppend(&LAB_00426dd0);
    recordTableAppend(&LAB_00426dd8);
    recordTableAppend(&LAB_00426de4);
    recordTableAppend(&LAB_00426df4);
    FUN_00427d6c((char)param_4[10]);
    temp_v23 = (int *)*param_4;
    if ((int *)*param_4 == (int *)0x0) {
      temp_v23 = param_4;
    }
    piVar4 = (int *)param_4[6];
    temp_v11 = (int *)param_4[2];
    if ((int *)param_4[2] == (int *)0x0) {
      temp_v11 = param_4;
    }
    piVar3 = (int *)param_4[7];
    temp_v15 = piVar4;
    if (piVar4 == (int *)0x0) {
      temp_v15 = param_4;
    }
    temp_v17 = piVar3;
    if (piVar3 == (int *)0x0) {
      temp_v17 = param_4;
    }
    temp_v18 = param_4[0xb];
    temp_v19 = param_4[0xc];
    uStack_4c = (unsigned int)(piVar3 != (int *)0x0);
    temp_v16 = (unsigned int)(piVar4 != (int *)0x0);
    temp_v13 = DAT_005c0a90;
    temp_v14 = temp_v9;
    uStack_5c = temp_v10;
    temp_v12 = param_4[3];
    temp_v10 = DAT_005c0a8c;
    temp_v9 = &DAT_00642980;
    puStack_68 = &DAT_00642b80;
    temp_v0 = temp_v22;
    temp_v20 = param_1 + 4;
    temp_v21 = temp_v2;
    uStack_38 = temp_v5;
    FUN_004396bc(temp_v22,uStack_30,temp_v23,param_4[1]);
    if (-1 < temp_v0) {
      temp_v0 = 0;
    }
    if (-1 < temp_v0) {
      temp_v6 = 0;
      if ((*(int *)(param_1 + 4) != 0) && (*(int *)(*(int *)(param_1 + 4) + 4) != 0)) {
        do {
          piVar4 = *(int **)(param_1 + 4);
          if ((piVar4 != (int *)0x0) && ((unsigned int)piVar4[1] >= temp_v6)) {
            puVar5 = (unsigned int *)(*piVar4 + temp_v6 * 0x30);
          }
          else {
            puVar5 = (unsigned int *)0x0;
          }
          temp_v7 = puVar5[7];
          temp_v3 = 0;
          if (temp_v3 < temp_v7) {
            do {
              temp_v0 = FUN_0019a37c(*(unsigned int *)(puVar5[6] + temp_v3 * 8),&LAB_00426de4,0x40);
              if (temp_v0 == 0) {
                temp_v3 = *(unsigned int *)(puVar5[6] + temp_v3 * 8 + 4);
                goto LAB_00426cb8;
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < temp_v7);
          }
          temp_v3 = 0;
LAB_00426cb8:
          FUN_001029f4(temp_v3,0,10);
          temp_v4 = *puVar5;
          temp_v1 = puVar5[1];
          temp_v7 = (temp_v4 >> 8) | (temp_v1 << 0x18);
          temp_v8 = temp_v1 >> 0xe == 0x10;
          if (temp_v8) {
            temp_v7 = temp_v1 & 0xffff;
          }
          if (temp_v8 && temp_v7 == 0x8c) {
            temp_v7 = 0;
          }
          else {
            temp_v8 = temp_v1 >> 0xe == 0x10;
            if (temp_v8) {
              temp_v7 = temp_v1 & 0xffff;
            }
            if (temp_v8 && temp_v7 == 0xd) {
              temp_v7 = 1;
            }
            else {
              temp_v7 = 0xff;
            }
          }
          temp_v1 = temp_v4 >> 0x1c;
          if (temp_v1 == 0) {
            temp_v0 = 0;
          }
          else if (temp_v1 == 2) {
            temp_v0 = 1;
          }
          else {
            FUN_00195fc8();
            temp_v0 = 0;
          }
          temp_v10 = (temp_v1 & 0xff000000) | temp_v7 | ((temp_v4 & 0xff) << 8) | (temp_v0 << 0x10);
          temp_v0 = param_1;
          temp_v9 = (unsigned char *)((temp_v4 >> 8) & 0xfffff);
          FUN_00428334(param_1,&temp_v9,temp_v3 & 0xffff);
          if (temp_v0 < 0) {
            return;
          }
          temp_v6 = temp_v6 + 1;
          temp_v3 = 0;
          if (*(int *)(param_1 + 4) != 0) {
            temp_v3 = *(unsigned int *)(*(int *)(param_1 + 4) + 4);
          }
        } while (temp_v6 < temp_v3);
      }
    }
  }
  return;
}

} /* extern "C" */
