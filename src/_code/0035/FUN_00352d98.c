/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00352d98` (_code @ 0x352d98, 0x298 bytes) from smt4.cxi.
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

extern unsigned char LAB_00353030; /* 0x353030 */
extern unsigned char LAB_00353038; /* 0x353038 */
extern unsigned char LAB_00353040; /* 0x353040 */
extern unsigned char LAB_0035304c; /* 0x35304c */
extern unsigned char LAB_0035305c; /* 0x35305c */
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
/* Supplied declaration required: FUN_0035fad8. */


void FUN_00352d98(int param_1,int param_2,unsigned int param_3,int *param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int *piVar4;
  unsigned int *puVar5;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned char *temp_v8;
  unsigned int temp_v9;
  int *temp_v10;
  int temp_v11;
  unsigned char *puStack_58;
  unsigned int temp_v12;
  unsigned char *puStack_50;
  unsigned int temp_v13;
  int *temp_v14;
  unsigned int uStack_44;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  unsigned int temp_v18;
  unsigned int uStack_30;
  int temp_v19;
  
  temp_v0 = param_1;
  FUN_003538d4(param_1,param_4[4],param_4[5]);
  if (-1 < temp_v0) {
    temp_v19 = param_2;
    temp_v8 = (unsigned char *)FUN_003538b8(param_1);
    temp_v9 = FUN_003538c4(param_1);
    temp_v4 = *(unsigned int *)(param_1 + 8);
    temp_v6 = *(unsigned int *)(param_1 + 0xc);
    FUN_0035334c();
    FUN_0023a3a4(&LAB_00353030);
    FUN_0023a3a4(&LAB_00353038);
    FUN_0023a3a4(&LAB_00353040);
    FUN_0023a3a4(&LAB_0035304c);
    FUN_0023a3a4(&LAB_0035305c);
    FUN_003532a8((char)param_4[10]);
    piVar4 = (int *)param_4[6];
    piVar2 = (int *)*param_4;
    if ((int *)*param_4 == (int *)0x0) {
      piVar2 = param_4;
    }
    temp_v15 = param_4[0xb];
    temp_v16 = param_4[0xc];
    temp_v10 = (int *)param_4[2];
    if ((int *)param_4[2] == (int *)0x0) {
      temp_v10 = param_4;
    }
    temp_v14 = param_4;
    if (piVar4 != (int *)0x0) {
      temp_v14 = piVar4;
    }
    uStack_44 = (unsigned int)(piVar4 != (int *)0x0);
    temp_v13 = temp_v9;
    temp_v11 = param_4[3];
    temp_v12 = DAT_00471a54;
    puStack_58 = &DAT_004e675c;
    puStack_50 = temp_v8;
    temp_v9 = DAT_00471a50;
    temp_v8 = &DAT_004e655c;
    temp_v0 = temp_v19;
    temp_v17 = param_1 + 4;
    temp_v18 = temp_v4;
    uStack_30 = temp_v6;
    FUN_0035fad8(temp_v19,param_3,piVar2,param_4[1]);
    if (-1 < temp_v0) {
      temp_v0 = 0;
    }
    if (-1 < temp_v0) {
      temp_v3 = 0;
      if ((*(int *)(param_1 + 4) != 0) && (*(int *)(*(int *)(param_1 + 4) + 4) != 0)) {
        do {
          piVar2 = *(int **)(param_1 + 4);
          if ((piVar2 != (int *)0x0) && ((unsigned int)piVar2[1] >= temp_v3)) {
            puVar5 = (unsigned int *)(*piVar2 + temp_v3 * 0x30);
          }
          else {
            puVar5 = (unsigned int *)0x0;
          }
          temp_v5 = puVar5[7];
          temp_v2 = 0;
          temp_v1 = 0;
          if (temp_v2 < temp_v5) {
            do {
              temp_v0 = FUN_002b45f8(*(unsigned int *)(puVar5[6] + temp_v2 * 8),&LAB_0035304c,0x40);
              if (temp_v0 == 0) {
                temp_v1 = *(unsigned int *)(puVar5[6] + temp_v2 * 8 + 4);
                break;
              }
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < temp_v5);
          }
          FUN_002c607c(temp_v1,0,10);
          temp_v5 = puVar5[1];
          temp_v2 = temp_v5 << 0x18;
          temp_v7 = temp_v5 >> 0xe == 0x10;
          if (temp_v7) {
            temp_v2 = temp_v5 & 0xffff;
          }
          temp_v8 = (unsigned char *)((*puVar5 >> 8) & 0xfffff);
          if (temp_v7 && temp_v2 == 0x8c) {
            temp_v5 = 0;
          }
          else {
            temp_v7 = temp_v5 >> 0xe == 0x10;
            if (temp_v7) {
              temp_v5 = temp_v5 & 0xffff;
            }
            if (temp_v7 && temp_v5 == 0xd) {
              temp_v5 = 1;
            }
            else {
              temp_v5 = 0xff;
            }
          }
          temp_v9 = temp_v5 | (temp_v2 & 0xffff0000) | ((*puVar5 & 0xff) << 8);
          temp_v0 = param_1;
          FUN_0035382c(param_1,&temp_v8,temp_v1 & 0xffff);
          if (temp_v0 < 0) {
            return;
          }
          temp_v3 = temp_v3 + 1;
          temp_v1 = 0;
          if (*(int *)(param_1 + 4) != 0) {
            temp_v1 = *(unsigned int *)(*(int *)(param_1 + 4) + 4);
          }
        } while (temp_v3 < temp_v1);
      }
    }
  }
  return;
}
