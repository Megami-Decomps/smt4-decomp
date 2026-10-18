/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00192840` (_code @ 0x192840, 0x4f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} param_8_stack;

extern int FUN_001a0778(int, int);
extern int FUN_001a07c4(int, int *, int, unsigned int);
/* Supplied declaration required: FUN_001a4794. */
/* Supplied declaration required: FUN_001a47d8. */


void FUN_00192840(int param_1,int *param_2,int param_3,int param_4,unsigned int *param_5,int param_6,
                 int param_7,int param_8)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  int temp_v9 [2];
  unsigned int temp_v10;
  int temp_v11;
  unsigned int uStack_34;
  
  if (*(char *)(param_1 + 0x6a9) != '\0') {
    puVar2 = (unsigned int *)*param_2;
    temp_v2 = *(unsigned int *)(param_1 + 0x6b0);
    temp_v3 = *(unsigned int *)(param_1 + 0x6b4);
    temp_v5 = *(unsigned int *)(param_1 + 0x6b8);
    temp_v6 = *(unsigned int *)(param_1 + 0x6bc);
    *puVar2 = *(unsigned char *)(param_6 + 2) | 0x80000000;
    puVar2[1] = 0x804f02c0;
    puVar2[2] = temp_v6;
    puVar2[3] = temp_v5;
    puVar2[4] = temp_v3;
    puVar2[5] = temp_v2;
    *param_2 = (int)(puVar2 + 6);
    temp_v6 = *(unsigned int *)(param_1 + 0x6cc);
    temp_v2 = *(unsigned int *)(param_1 + 0x6c0);
    temp_v3 = *(unsigned int *)(param_1 + 0x6c4);
    temp_v5 = *(unsigned int *)(param_1 + 0x6c8);
    puVar2[6] = *(unsigned char *)(param_7 + 2) | 0x80000000;
    puVar2[7] = 0x804f02c0;
    puVar2[8] = temp_v6;
    puVar2[9] = temp_v5;
    puVar2[10] = temp_v3;
    puVar2[0xb] = temp_v2;
    *param_2 = (int)(puVar2 + 0xc);
  }
  if (*(char *)(param_1 + 0x700) != '\0') {
    puVar2 = (unsigned int *)*param_2;
    temp_v0 = *(unsigned char *)(param_4 + 2);
    *puVar2 = (unsigned char)(*(char *)(param_1 + 0x700) - 1) | 0x10000;
    puVar2[1] = (temp_v0 + 0x2b1) | 0xf0000;
    *param_2 = (int)(puVar2 + 2);
  }
  temp_v3 = *param_5;
  temp_v2 = temp_v3 >> 0x18;
  temp_v10 = (((((temp_v3 & 0xffffff) >> 0x10) + 0x3b) * 0x10000) & 0xff0000) | (temp_v3 & 0xffff) |
             ((temp_v2 + 0x3b) * 0x1000000);
  temp_v8 = *(char *)(param_1 + 0x700) != '\0';
  if (temp_v8) {
    temp_v2 = 0x804f02c0;
  }
  temp_v1 = 0;
  if (temp_v8) {
    do {
      puVar2 = (unsigned int *)*param_2;
      temp_v7 = param_1 + temp_v1 * 0x10;
      temp_v3 = (temp_v10 & 0xffffff) >> 0x10;
      *puVar2 = temp_v3 | 0x80000000;
      puVar2[1] = temp_v2;
      temp_v6 = (temp_v3 - 1) & 0xff;
      temp_v3 = (temp_v6 - 3) & 0xff;
      puVar2[2] = *(unsigned int *)(temp_v7 + 0x58c);
      temp_v5 = (temp_v3 - 1) & 0xff;
      temp_v10 = (temp_v10 & 0xffff) | (((temp_v5 - 1) * 0x10000) & 0xff0000) |
                 (((temp_v10 >> 0x18) - 6) * 0x1000000);
      puVar2[3] = *(unsigned int *)(temp_v7 + 0x588);
      temp_v4 = param_1 + temp_v1 * 0x70;
      puVar2[4] = *(unsigned int *)(temp_v7 + 0x584);
      puVar2[5] = *(unsigned int *)(temp_v7 + 0x580);
      *param_2 = (int)(puVar2 + 6);
      puVar2[6] = temp_v6 | 0x80000000;
      puVar2[7] = temp_v2;
      puVar2[8] = *(unsigned int *)(temp_v7 + 0x60c);
      puVar2[9] = *(unsigned int *)(temp_v7 + 0x608);
      puVar2[10] = *(unsigned int *)(temp_v7 + 0x604);
      puVar2[0xb] = *(unsigned int *)(temp_v7 + 0x600);
      *param_2 = (int)(puVar2 + 0xc);
      puVar2[0xc] = temp_v3 | 0x80000000;
      puVar2[0xd] = temp_v2;
      puVar2[0xe] = *(unsigned int *)(temp_v4 + 0x4c);
      puVar2[0xf] = *(unsigned int *)(temp_v4 + 0x48);
      puVar2[0x10] = *(unsigned int *)(temp_v4 + 0x44);
      puVar2[0x11] = *(unsigned int *)(temp_v4 + 0x40);
      *param_2 = (int)(puVar2 + 0x12);
      puVar2[0x12] = temp_v5 | 0x80000000;
      puVar2[0x13] = temp_v2;
      puVar2[0x14] = *(unsigned int *)(temp_v4 + 0x3c);
      puVar2[0x15] = *(unsigned int *)(temp_v4 + 0x38);
      temp_v1 = temp_v1 + 1;
      puVar2[0x16] = *(unsigned int *)(temp_v4 + 0x34);
      puVar2[0x17] = *(unsigned int *)(temp_v4 + 0x30);
      *param_2 = (int)(puVar2 + 0x18);
    } while (temp_v1 < (int)(unsigned int)*(unsigned char *)(param_1 + 0x700));
  }
  if (param_3 != 0) {
    FUN_001a4794(param_3);
    if (*(char *)(param_1 + 0x6a9) != '\0') {
      puVar2 = *(unsigned int **)(param_3 + 0x5c);
      *puVar2 = *(unsigned char *)(param_8 + 2) | 0x80000000;
      puVar2[1] = 0x804f02c0;
      puVar2[2] = *(unsigned int *)(param_1 + 0x6ec);
      puVar2[3] = *(unsigned int *)(param_1 + 0x6e8);
      puVar2[4] = *(unsigned int *)(param_1 + 0x6e4);
      puVar2[5] = *(unsigned int *)(param_1 + 0x6e0);
      *(unsigned int **)(param_3 + 0x5c) = puVar2 + 6;
      puVar2 = *(unsigned int **)(param_3 + 0x60);
      *puVar2 = *(unsigned char *)(param_8 + 2) | 0x80000000;
      puVar2[1] = 0x804f02c0;
      puVar2[2] = *(unsigned int *)(param_1 + 0x6fc);
      puVar2[3] = *(unsigned int *)(param_1 + 0x6f8);
      puVar2[4] = *(unsigned int *)(param_1 + 0x6f4);
      puVar2[5] = *(unsigned int *)(param_1 + 0x6f0);
      *(unsigned int **)(param_3 + 0x60) = puVar2 + 6;
    }
    temp_v4 = 0;
    temp_v1 = ((*param_5 & 0xffffff) >> 0x10) + 0x39;
    if (*(char *)(param_1 + 0x700) != '\0') {
      do {
        puVar2 = *(unsigned int **)(param_3 + 0x5c);
        temp_v2 = ((temp_v1 * 0x10000) & 0xff0000U) >> 0x10;
        temp_v3 = temp_v2 | 0x80000000;
        temp_v7 = param_1 + temp_v4 * 0x10;
        *puVar2 = temp_v3;
        puVar2[1] = 0x804f02c0;
        temp_v2 = (temp_v2 - 1) & 0xff;
        temp_v1 = temp_v2 - 5;
        puVar2[2] = *(unsigned int *)(temp_v7 + 0x48c);
        puVar2[3] = *(unsigned int *)(temp_v7 + 0x488);
        puVar2[4] = *(unsigned int *)(temp_v7 + 0x484);
        temp_v2 = temp_v2 | 0x80000000;
        temp_v4 = temp_v4 + 1;
        puVar2[5] = *(unsigned int *)(temp_v7 + 0x480);
        *(unsigned int **)(param_3 + 0x5c) = puVar2 + 6;
        puVar2 = *(unsigned int **)(param_3 + 0x60);
        *puVar2 = temp_v3;
        puVar2[1] = 0x804f02c0;
        puVar2[2] = *(unsigned int *)(temp_v7 + 0x50c);
        puVar2[3] = *(unsigned int *)(temp_v7 + 0x508);
        puVar2[4] = *(unsigned int *)(temp_v7 + 0x504);
        puVar2[5] = *(unsigned int *)(temp_v7 + 0x500);
        *(unsigned int **)(param_3 + 0x60) = puVar2 + 6;
        puVar2 = *(unsigned int **)(param_3 + 0x5c);
        *puVar2 = temp_v2;
        puVar2[1] = 0x804f02c0;
        puVar2[2] = *(unsigned int *)(temp_v7 + 0x38c);
        puVar2[3] = *(unsigned int *)(temp_v7 + 0x388);
        puVar2[4] = *(unsigned int *)(temp_v7 + 900);
        puVar2[5] = *(unsigned int *)(temp_v7 + 0x380);
        *(unsigned int **)(param_3 + 0x5c) = puVar2 + 6;
        puVar2 = *(unsigned int **)(param_3 + 0x60);
        *puVar2 = temp_v2;
        puVar2[1] = 0x804f02c0;
        puVar2[2] = *(unsigned int *)(temp_v7 + 0x40c);
        puVar2[3] = *(unsigned int *)(temp_v7 + 0x408);
        puVar2[4] = *(unsigned int *)(temp_v7 + 0x404);
        puVar2[5] = *(unsigned int *)(temp_v7 + 0x400);
        *(unsigned int **)(param_3 + 0x60) = puVar2 + 6;
      } while (temp_v4 < (int)(unsigned int)*(unsigned char *)(param_1 + 0x700));
    }
    FUN_001a47d8(&temp_v11,param_3);
    temp_v1 = *param_2;
    if (temp_v1 != 0 && temp_v11 != 0) {
      temp_v1 = FUN_001a0778(temp_v1,((temp_v1 - param_2[2]) & 0xfffffffcU) + 0x18);
      *param_2 = temp_v1;
      temp_v1 = FUN_001a07c4(temp_v1,temp_v9,temp_v11,uStack_34);
      *param_2 = temp_v1;
      if ((unsigned int *)param_2[3] != (unsigned int *)0x0) {
        *(unsigned int *)param_2[3] = (unsigned int)(temp_v1 - param_2[2]) >> 3;
      }
      param_2[2] = *param_2;
      param_2[3] = temp_v9[0];
      if (param_2[4] == 0) {
        param_2[4] = (*param_2 - param_2[1]) & 0xfffffffc;
      }
    }
  }
  return;
}
