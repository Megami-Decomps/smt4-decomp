/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120960` (_code @ 0x120960, 0x1fe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7232(int);
int FUN_002e75fa(int);
int FUN_002ed838(int *);
int FUN_002f2b24(int, int *);
int FUN_002f2da0(...);
int FUN_002f2dd8(int);
int FUN_002f2de4(int *);
int FUN_00310510(int *, unsigned char **, int *);
int FUN_00310578(unsigned char **);

typedef int romwright_code(...);
/* stack frame of param_5: 19 slot(s), 76 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_5_stack;

extern unsigned char DAT_0055b06c; /* 0x55b06c */
extern unsigned short DAT_00594986; /* 0x594986 */
extern unsigned short DAT_00594988; /* 0x594988 */

/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002e75fa. */
extern int FUN_002e760a(unsigned int);
extern int FUN_002eb5f4(void);
/* Supplied declaration required: FUN_002ed838. */
extern int FUN_002efd4a(unsigned int *, unsigned int);
extern int *FUN_002f2afc(void);
/* Supplied declaration required: FUN_002f2b24. */
extern int FUN_002f2b30(void);
extern int FUN_002f2c38(int, int);
/* Supplied declaration required: FUN_002f2da0. */
/* Supplied declaration required: FUN_002f2dd8. */
/* Supplied declaration required: FUN_002f2de4. */
extern int wordRefsDiffer_002f2dec(int *, int);
/* Supplied declaration required: FUN_00310510. */
/* Supplied declaration required: FUN_00310578. */
extern int iterNotEqual(int *, unsigned int *);


unsigned int FUN_00120960(int param_1,int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
/* irregular: 2 goto(s); 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  unsigned char *temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10 [2];
  int temp_v11;
  int temp_v12;
  int temp_v13;
  unsigned int *temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  int *temp_v18;
  int temp_v19;
  int temp_v20;
  int iStack_24;
  int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  temp_v13 = *(int *)(param_1 + 4);
  temp_v4 = *(int *)(*(int *)(param_5 + 8) + 0x10);
  temp_v5 = &DAT_0055b06c;
  temp_v14 = (unsigned int *)&temp_v8;
  temp_v6 = 0;
  temp_v18 = &temp_v6;
  temp_v17 = param_1 + 0xc;
  temp_v9 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v3 = temp_v4;
  iStack_24 = param_1;
  temp_v21 = param_2;
  temp_v22 = param_3;
  temp_v23 = param_4;
  do {
    while( 1 ) {
      while( 1 ) {
        temp_v1 = wordRefsDiffer_002f2dec(&temp_v13,temp_v17);
        temp_v2 = temp_v13;
        if ((temp_v1 == 0) || (DAT_00594986 <= temp_v9)) goto LAB_00120aa8;
        temp_v19 = temp_v13 + 0x120;
        if ((*(unsigned short *)(temp_v13 + 0x122) < DAT_00594988) && (*(char *)(temp_v13 + 0x131) == '\0'))
        break;
        temp_v12 = temp_v13;
        FUN_002f2da0(temp_v10,param_1,&temp_v12);
        temp_v13 = temp_v10[0];
      }
      temp_v20 = temp_v13 + 0x100;
      temp_v16 = *(int *)(temp_v13 + 0x114);
      temp_v15 = *(unsigned int *)(temp_v13 + 0x110);
      temp_v1 = FUN_002efd4a((unsigned int *)&temp_v15,temp_v22);
      if (temp_v1 != 0) goto LAB_00120aa8;
      temp_v11 = temp_v21;
      temp_v1 = FUN_002f2b30();
      if ((temp_v1 != 0) && (temp_v1 = FUN_002f2c38(temp_v2,temp_v11), temp_v1 != 0)) break;
      FUN_002f2de4(&temp_v13);
    }
    if (temp_v23 < (unsigned int)(*(int *)(temp_v20 + 0x34) + temp_v3)) {
LAB_00120aa8:
      while (temp_v2 = wordRefsDiffer_002f2dec(&temp_v13,temp_v17), temp_v0 = temp_v9, temp_v2 != 0) {
        temp_v16 = *(int *)(temp_v13 + 0x114);
        temp_v15 = *(unsigned int *)(temp_v13 + 0x110);
        temp_v2 = FUN_002efd4a((unsigned int *)&temp_v15,temp_v22);
        if (temp_v2 != 0) {
          temp_v10[0] = temp_v13;
          FUN_002f2da0(&temp_v12,param_1,temp_v10);
          temp_v13 = temp_v12;
        }
        else {
          FUN_002f2de4(&temp_v13);
        }
      }
      if (temp_v3 == temp_v4) {
        FUN_00310578(&temp_v5);
        return 0;
      }
      temp_v3 = FUN_002e760a(0x10);
      if (temp_v3 != 0) {
        piVar5 = (int *)FUN_002f2afc();
      }
      else {
        piVar5 = (int *)0x0;
      }
      temp_v3 = FUN_002eb5f4();
      temp_v16 = temp_v6;
      while (temp_v2 = iterNotEqual(&temp_v16,temp_v14), temp_v4 = temp_v16, temp_v2 != 0) {
        FUN_002ed838(piVar5);
        (**(romwright_code **)(*(int *)(temp_v3 + 0xd4) + 0x20))((int *)(temp_v3 + 0xd4),temp_v4,piVar5);
        if (*(char *)(temp_v4 + 0x138) == '\0') {
          *(unsigned char *)(temp_v4 + 0x138) = 1;
        }
        if (*(unsigned short *)(temp_v4 + 0x122) >= DAT_00594988) {
          temp_v11 = temp_v16;
          FUN_00310510(&temp_v12,&temp_v5,&temp_v11);
          temp_v16 = temp_v12;
          FUN_002e7232(temp_v4);
        }
        else {
          temp_v16 = *(int *)(temp_v16 + 0x14);
        }
        FUN_002f2b24(param_5,piVar5);
      }
      if (piVar5 != (int *)0x0) {
        (**(romwright_code **)(*piVar5 + 4))(piVar5);
      }
      FUN_00310578(&temp_v5);
      return temp_v0;
    }
    temp_v1 = iterNotEqual(temp_v18,temp_v14);
    if (temp_v1 != 0) {
      *(int *)(temp_v2 + 0x14) = temp_v6;
      *(int *)(temp_v6 + 0x18) = temp_v2;
    }
    else {
      temp_v7 = temp_v2;
    }
    temp_v6 = temp_v2;
    temp_v9 = temp_v9 + 1;
    FUN_002f2dd8(temp_v2);
    temp_v3 = *(int *)(temp_v20 + 0x34) + temp_v3;
    if (*(unsigned short *)(temp_v19 + 2) < DAT_00594988) {
      FUN_002f2de4(&temp_v13);
      continue;
    }
    FUN_002e75fa(temp_v2);
    temp_v11 = temp_v13;
    FUN_002f2da0(&temp_v12,param_1,&temp_v11);
    temp_v13 = temp_v12;
  } while( 1 );
}

} /* extern "C" */
