/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049a9a8` (_code @ 0x49a9a8, 0x488 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0040a60c(...);
int FUN_00493e14(...);
int FUN_0049d030(void);
int FUN_0049d048(unsigned char *, int);
int FUN_0049d09c(unsigned char *, int);
int FUN_004cfeb0(int, unsigned int, int, int);
int FUN_004cff88(int, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned long long FUN_00145f04(unsigned char, unsigned int, unsigned int);
extern unsigned long long FUN_00192718(short);
/* Supplied declaration required: FUN_0040a60c. */
/* Supplied declaration required: FUN_00493e14. */
extern unsigned long long FUN_00494020(void);
extern int FUN_0049cf5c(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_0049d030. */
/* Supplied declaration required: FUN_0049d048. */
/* Supplied declaration required: FUN_0049d09c. */
/* Supplied declaration required: FUN_004cfeb0. */
/* Supplied declaration required: FUN_004cff88. */


void FUN_0049a9a8(int param_1)

{
/* irregular: 2 goto(s); 9 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  unsigned char *puVar6;
  unsigned char *puVar7;
  unsigned short *puVar8;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12;
  unsigned long long temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  unsigned char temp_v17 [8];
  
  puVar4 = &temp_v14;
  temp_v16 = 0;
  temp_v9 = 0;
  do {
    temp_v2 = temp_v9 + 1;
    *(unsigned short *)(param_1 + temp_v9 * 0x1002 + 0x1f74) = 0;
    temp_v9 = temp_v2;
  } while (temp_v2 < 9);
  temp_v0 = *(unsigned char *)(param_1 + 0x18);
  temp_v10 = *(int *)(param_1 + 0x1c);
  temp_v2 = FUN_0049cf5c(&temp_v14,0);
  temp_v8 = 0;
  FUN_0049d030();
  temp_v9 = -1;
  if (0 < (int)puVar4) {
    do {
      temp_v3 = temp_v2 + temp_v8 * 0x8c;
      temp_v12 = *(unsigned short *)(temp_v3 + 0x24) == (unsigned short)temp_v0;
      if (temp_v12) {
        temp_v3 = *(int *)(temp_v3 + 0x20);
      }
      temp_v9 = temp_v8;
      if (temp_v12 && temp_v3 == temp_v10) break;
      temp_v8 = temp_v8 + 1;
      puVar4 = &temp_v14;
      FUN_0049d030();
      temp_v9 = -1;
    } while (temp_v8 < (int)puVar4);
  }
  puVar6 = temp_v17;
  FUN_0049d09c(puVar6,temp_v9);
  puVar7 = temp_v17;
  FUN_0049d048(puVar7,temp_v9);
  temp_v15 = param_1 + 0x7f82;
  temp_v9 = 0;
  temp_v7 = temp_v5;
  if (0 < (int)puVar7) {
    do {
      temp_v1 = *(short *)(puVar6 + temp_v9 * 8);
      if (temp_v1 == 0) break;
      temp_v13 = FUN_00494020();
      temp_v7 = (unsigned int)((unsigned long long)temp_v13 >> 0x20);
      if ((int)temp_v13 != 0) {
        temp_v11 = 0;
        if (((int)temp_v13 == 2) && (temp_v2 = FUN_0040a60c(temp_v1), temp_v2 == 0)) {
          temp_v11 = 1;
        }
        temp_v13 = FUN_00192718(temp_v1);
        temp_v7 = (unsigned int)((unsigned long long)temp_v13 >> 0x20);
        switch((int)temp_v13) {
        default:
          goto LAB_0049ad3c;
        case 1:
        case 0xc:
          temp_v13 = FUN_00145f04(*(unsigned char *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c),0);
          temp_v4 = (unsigned int)((unsigned long long)temp_v13 >> 0x20);
          puVar8 = (unsigned short *)temp_v13;
          temp_v12 = puVar8 != (unsigned short *)0x0;
          if (temp_v12) {
            temp_v4 = (unsigned int)*puVar8;
          }
          if (temp_v12 && temp_v4 != 0) {
            temp_v16 = 1;
          }
          temp_v12 = temp_v12 && temp_v4 != 0;
          temp_v14 = *puVar8 & 0xff;
          temp_v2 = temp_v15;
          break;
        case 2:
          temp_v13 = FUN_00145f04(*(unsigned char *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c),0);
          temp_v4 = (unsigned int)((unsigned long long)temp_v13 >> 0x20);
          puVar8 = (unsigned short *)temp_v13;
          temp_v12 = puVar8 != (unsigned short *)0x0;
          if (temp_v12) {
            temp_v4 = (unsigned int)*puVar8;
          }
          if (temp_v12 && temp_v4 != 0) {
            temp_v16 = 1;
          }
          temp_v12 = temp_v12 && temp_v4 != 0;
          temp_v14 = *puVar8 & 0xff;
          temp_v2 = param_1 + 0xf74;
          break;
        case 3:
          temp_v13 = FUN_00145f04(*(unsigned char *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c),1);
          temp_v4 = (unsigned int)((unsigned long long)temp_v13 >> 0x20);
          puVar8 = (unsigned short *)temp_v13;
          temp_v12 = puVar8 != (unsigned short *)0x0;
          if (temp_v12) {
            temp_v4 = (unsigned int)*puVar8;
          }
          if (temp_v12 && temp_v4 != 0) {
            temp_v16 = 1;
          }
          temp_v12 = temp_v12 && temp_v4 != 0;
          temp_v14 = *puVar8 & 0xff;
          temp_v2 = param_1 + 0x1f76;
          break;
        case 4:
          temp_v13 = FUN_00145f04(*(unsigned char *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c),2);
          temp_v4 = (unsigned int)((unsigned long long)temp_v13 >> 0x20);
          puVar8 = (unsigned short *)temp_v13;
          temp_v12 = puVar8 != (unsigned short *)0x0;
          if (temp_v12) {
            temp_v4 = (unsigned int)*puVar8;
          }
          if (temp_v12 && temp_v4 != 0) {
            temp_v16 = 1;
          }
          temp_v12 = temp_v12 && temp_v4 != 0;
          temp_v14 = *puVar8 & 0xff;
          temp_v2 = param_1 + 0x3f7a;
          break;
        case 5:
          temp_v13 = FUN_00145f04(*(unsigned char *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c),3);
          temp_v4 = (unsigned int)((unsigned long long)temp_v13 >> 0x20);
          puVar8 = (unsigned short *)temp_v13;
          temp_v12 = puVar8 != (unsigned short *)0x0;
          if (temp_v12) {
            temp_v4 = (unsigned int)*puVar8;
          }
          if (temp_v12 && temp_v4 != 0) {
            temp_v16 = 1;
          }
          temp_v12 = temp_v12 && temp_v4 != 0;
          temp_v14 = *puVar8 & 0xff;
          temp_v2 = param_1 + 0x4f7c;
          break;
        case 6:
          temp_v13 = FUN_00145f04(*(unsigned char *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c),4);
          temp_v4 = (unsigned int)((unsigned long long)temp_v13 >> 0x20);
          puVar8 = (unsigned short *)temp_v13;
          temp_v12 = puVar8 != (unsigned short *)0x0;
          if (temp_v12) {
            temp_v4 = (unsigned int)*puVar8;
          }
          if (temp_v12 && temp_v4 != 0) {
            temp_v16 = 1;
          }
          temp_v12 = temp_v12 && temp_v4 != 0;
          temp_v14 = *puVar8 & 0xff;
          temp_v2 = param_1 + 0x5f7e;
          break;
        case 7:
          temp_v13 = FUN_00145f04(*(unsigned char *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c),5);
          temp_v4 = (unsigned int)((unsigned long long)temp_v13 >> 0x20);
          puVar8 = (unsigned short *)temp_v13;
          temp_v12 = puVar8 != (unsigned short *)0x0;
          if (temp_v12) {
            temp_v4 = (unsigned int)*puVar8;
          }
          if (temp_v12 && temp_v4 != 0) {
            temp_v16 = 1;
          }
          temp_v12 = temp_v12 && temp_v4 != 0;
          temp_v14 = *puVar8 & 0xff;
          temp_v2 = param_1 + 0x6f80;
          break;
        case 8:
          temp_v12 = 0;
          temp_v2 = param_1 + 0x2f78;
          temp_v14 = 0;
        }
        FUN_00493e14(temp_v2,temp_v1,temp_v11,temp_v12);
        temp_v7 = temp_v6;
      }
LAB_0049ad3c:
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < (int)puVar7);
  }
  temp_v4 = (unsigned int)*(unsigned char *)(param_1 + 0x18);
  temp_v12 = temp_v4 == 1;
  if (temp_v12) {
    temp_v4 = *(unsigned int *)(param_1 + 0x1c);
  }
  if (!temp_v12 || temp_v4 != 5) {
    temp_v9 = 0;
    goto LAB_0049ad64;
  }
  temp_v9 = FUN_0040a60c(0x7b2,temp_v7);
  temp_v14 = 0x40;
  FUN_00493e14(temp_v15,0x7b2,temp_v9 == 0,0);
  temp_v9 = 0;
  do {
    if (!(temp_v9 == 7 || temp_v9 == 8)) {
LAB_0049ad64:
      temp_v7 = 9;
      if (temp_v9 == 7 || temp_v9 == 8) {
        temp_v15 = 1;
      }
      else {
        temp_v15 = 0;
      }
    }
    else {
      temp_v7 = 10;
      temp_v15 = 1;
    }
    temp_v2 = param_1 + temp_v9 * 0x74;
    temp_v14 = 1;
    FUN_004cfeb0(temp_v2 + 0xb60,temp_v7,*(unsigned short *)(param_1 + temp_v9 * 0x1002 + 0x1f74),0);
    *(unsigned char *)(temp_v2 + 0xb6d) = 1;
    FUN_004cff88(temp_v2 + 0xb60,0);
    temp_v9 = temp_v9 + 1;
    if (temp_v9 >= 9) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
