/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004275f0` (_code @ 0x4275f0, 0x2d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_4_stack;

extern unsigned char LAB_004278c8; /* 0x4278c8 */
extern unsigned char LAB_004278d0; /* 0x4278d0 */
extern unsigned char LAB_004278d8; /* 0x4278d8 */
extern unsigned char LAB_004278e4; /* 0x4278e4 */
extern unsigned char LAB_004278f4; /* 0x4278f4 */
extern unsigned char LAB_00427904; /* 0x427904 */
extern unsigned int DAT_005c0a8c; /* 0x5c0a8c */
extern unsigned int DAT_005c0a90; /* 0x5c0a90 */
extern unsigned char DAT_00642980; /* 0x642980 */
extern unsigned char DAT_00642b80; /* 0x642b80 */

/* Supplied declaration required: FUN_001029f4. */
/* Supplied declaration required: FUN_00195fc8. */
extern int FUN_0019a37c(unsigned int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00427d34. */
/* Supplied declaration required: FUN_00427d6c. */
/* Supplied declaration required: FUN_00427e10. */
/* Supplied declaration required: FUN_00428334. */
extern unsigned char *FUN_004283c0(int);
extern unsigned int FUN_004283e0(int);
/* Supplied declaration required: FUN_00428428. */
/* Supplied declaration required: FUN_00439750. */


void FUN_004275f0(int param_1,int param_2,unsigned int param_3,int *param_4)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int *piVar4;
  unsigned int temp_v2;
  unsigned int *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned char *temp_v10;
  unsigned int temp_v11;
  int *temp_v12;
  int temp_v13;
  unsigned char *puStack_58;
  unsigned int temp_v14;
  unsigned char *puStack_50;
  unsigned int temp_v15;
  int *temp_v16;
  unsigned int uStack_44;
  int temp_v17;
  int temp_v18;
  int temp_v19;
  unsigned int temp_v20;
  unsigned int uStack_30;
  int temp_v21;
  
  temp_v0 = param_1;
  FUN_00428428(param_1,param_4[4],param_4[5]);
  if (-1 < temp_v0) {
    temp_v21 = param_2;
    temp_v10 = (unsigned char *)FUN_004283c0(param_1);
    temp_v11 = FUN_004283e0(param_1);
    temp_v6 = *(unsigned int *)(param_1 + 8);
    temp_v8 = *(unsigned int *)(param_1 + 0xc);
    FUN_00427e10();
    FUN_00427d34(&LAB_004278c8);
    FUN_00427d34(&LAB_004278d0);
    FUN_00427d34(&LAB_004278d8);
    FUN_00427d34(&LAB_004278e4);
    FUN_00427d34(&LAB_004278f4);
    FUN_00427d34(&LAB_00427904);
    FUN_00427d6c((char)param_4[10]);
    piVar4 = (int *)param_4[6];
    piVar2 = (int *)*param_4;
    if ((int *)*param_4 == (int *)0x0) {
      piVar2 = param_4;
    }
    temp_v17 = param_4[0xb];
    temp_v18 = param_4[0xc];
    temp_v12 = (int *)param_4[2];
    if ((int *)param_4[2] == (int *)0x0) {
      temp_v12 = param_4;
    }
    temp_v16 = param_4;
    if (piVar4 != (int *)0x0) {
      temp_v16 = piVar4;
    }
    uStack_44 = (unsigned int)(piVar4 != (int *)0x0);
    temp_v15 = temp_v11;
    temp_v13 = param_4[3];
    temp_v14 = DAT_005c0a90;
    puStack_58 = &DAT_00642b80;
    puStack_50 = temp_v10;
    temp_v11 = DAT_005c0a8c;
    temp_v10 = &DAT_00642980;
    temp_v0 = temp_v21;
    temp_v19 = param_1 + 4;
    temp_v20 = temp_v6;
    uStack_30 = temp_v8;
    FUN_00439750(temp_v21,param_3,piVar2,param_4[1]);
    if (-1 < temp_v0) {
      temp_v0 = 0;
    }
    if (-1 < temp_v0) {
      temp_v5 = 0;
      if ((*(int *)(param_1 + 4) != 0) && (*(int *)(*(int *)(param_1 + 4) + 4) != 0)) {
        do {
          piVar2 = *(int **)(param_1 + 4);
          if ((piVar2 != (int *)0x0) && ((unsigned int)piVar2[1] >= temp_v5)) {
            puVar5 = (unsigned int *)(*piVar2 + temp_v5 * 0x30);
          }
          else {
            puVar5 = (unsigned int *)0x0;
          }
          temp_v7 = puVar5[7];
          temp_v3 = 0;
          temp_v1 = 0;
          if (temp_v3 < temp_v7) {
            do {
              temp_v0 = FUN_0019a37c(*(unsigned int *)(puVar5[6] + temp_v3 * 8),&LAB_004278e4,0x40);
              if (temp_v0 == 0) {
                temp_v1 = *(unsigned int *)(puVar5[6] + temp_v3 * 8 + 4);
                break;
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < temp_v7);
          }
          FUN_001029f4(temp_v1,0,10);
          temp_v4 = *puVar5;
          temp_v7 = puVar5[1];
          temp_v3 = (temp_v4 >> 8) | (temp_v7 << 0x18);
          temp_v9 = temp_v7 >> 0xe == 0x10;
          if (temp_v9) {
            temp_v3 = temp_v7 & 0xffff;
          }
          if (temp_v9 && temp_v3 == 0x8c) {
            temp_v3 = 0;
          }
          else {
            temp_v9 = temp_v7 >> 0xe == 0x10;
            if (temp_v9) {
              temp_v3 = temp_v7 & 0xffff;
            }
            if (temp_v9 && temp_v3 == 0xd) {
              temp_v3 = 1;
            }
            else {
              temp_v3 = 0xff;
            }
          }
          temp_v7 = temp_v4 >> 0x1c;
          temp_v0 = 0;
          if (temp_v7 != 0) {
            if (temp_v7 == 2) {
              temp_v0 = 1;
            }
            else {
              FUN_00195fc8();
              temp_v0 = 0;
              temp_v7 = temp_v2;
            }
          }
          temp_v11 = (temp_v7 & 0xff000000) | temp_v3 | ((temp_v4 & 0xff) << 8) | (temp_v0 << 0x10);
          temp_v0 = param_1;
          temp_v10 = (unsigned char *)((temp_v4 >> 8) & 0xfffff);
          FUN_00428334(param_1,&temp_v10,temp_v1 & 0xffff);
          if (temp_v0 < 0) {
            return;
          }
          temp_v5 = temp_v5 + 1;
          temp_v1 = 0;
          if (*(int *)(param_1 + 4) != 0) {
            temp_v1 = *(unsigned int *)(*(int *)(param_1 + 4) + 4);
          }
        } while (temp_v5 < temp_v1);
      }
    }
  }
  return;
}
