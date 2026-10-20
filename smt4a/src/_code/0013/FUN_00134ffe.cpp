/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00134ffe` (_code @ 0x134ffe, 0x1ba bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(...);
int bitFieldSet(...);
int FUN_002f1840(...);
int FUN_00307632(...);
int FUN_0030769c(int *, int *, int);
int FUN_003076d2(int *, int *);
int FUN_003076e6(...);
int FUN_00307704(void);
int FUN_00307e74(int *, int *);

/* stack frame of param_5: 19 slot(s), 76 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
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
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_5_stack;

/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: bitFieldSet. */
extern int FUN_002f182e(int *, int);
/* Supplied declaration required: FUN_002f1840. */
/* Supplied declaration required: FUN_00307632. */
/* Supplied declaration required: FUN_0030769c. */
extern int pairIsDifferent(int *, int *);
/* Supplied declaration required: FUN_003076d2. */
/* Supplied declaration required: FUN_003076e6. */
extern unsigned int FUN_003076f0(int *);
/* Supplied declaration required: FUN_00307704. */
/* Supplied declaration required: FUN_00307e74. */
extern int bitIteratorDistance(int *, int, int);


void FUN_00134ffe(int *param_1,int param_2,int param_3,int *param_4,char *param_5)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  int *piStack_24;
  int temp_v19;
  int temp_v20;
  int *piStack_18;
  
  if (param_4 != (int *)0x0) {
    temp_v6 = param_1[4];
    temp_v7 = 0;
    piStack_24 = param_1;
    temp_v19 = param_2;
    temp_v20 = param_3;
    piStack_18 = param_4;
    temp_v0 = bitIteratorDistance(&temp_v6,*param_1,param_1[1]);
    piVar5 = param_1;
    FUN_00307704();
    if ((int *)(temp_v0 - (int)piVar5) >= param_4) {
      temp_v12 = temp_v20;
      temp_v11 = temp_v19;
      temp_v14 = param_1[3];
      temp_v13 = param_1[2];
      FUN_002f1840(&temp_v9,param_1 + 2,param_4);
      temp_v16 = temp_v10;
      temp_v15 = temp_v9;
      while (temp_v0 = pairIsDifferent(&temp_v11,&temp_v13), temp_v0 != 0) {
        temp_v1 = FUN_003076f0(&temp_v13);
        FUN_003076e6(&temp_v7,temp_v1);
        temp_v3 = temp_v7;
        temp_v4 = temp_v8;
        temp_v1 = FUN_003076f0(&temp_v15);
        FUN_003076e6(&temp_v5,temp_v1);
        temp_v18 = temp_v6;
        temp_v17 = temp_v5;
        FUN_003076d2(&temp_v17,&temp_v3);
      }
      temp_v10 = temp_v20;
      temp_v9 = temp_v19;
      FUN_002f1840(&temp_v5,&temp_v19,param_4);
      temp_v14 = temp_v6;
      temp_v13 = temp_v5;
      while (temp_v0 = pairIsDifferent(&temp_v9,&temp_v13), temp_v0 != 0) {
        FUN_0030769c(&temp_v11,&temp_v9,0);
        temp_v8 = temp_v12;
        temp_v7 = temp_v11;
        FUN_003076e6(&temp_v3,&temp_v7);
        temp_v15 = temp_v3;
        temp_v16 = temp_v4;
        bitFieldSet(&temp_v15,(int)*param_5);
      }
      FUN_00307e74(param_1 + 2,param_4);
    }
    else {
      piVar5 = param_1;
      FUN_00307704();
      piVar3 = param_1;
      FUN_00307704();
      piVar4 = param_4;
      if (param_4 < piVar3) {
        piVar4 = param_1;
        FUN_00307704();
      }
      temp_v11 = (int)piVar5 + (int)piVar4;
      temp_v0 = FUN_002f182e(param_1,temp_v11);
      temp_v5 = 0;
      temp_v3 = temp_v20;
      temp_v4 = temp_v0;
      FUN_00307632(&temp_v8,param_1,*param_1,param_1[1],temp_v19);
      temp_v15 = temp_v9;
      temp_v14 = temp_v8;
      piVar5 = param_4;
      while (temp_v2 = piVar5 != (int *)0x0, piVar5 = (int *)((int)piVar5 - 1), temp_v2) {
        FUN_0030769c(&temp_v12,&temp_v14,0);
        temp_v6 = temp_v13;
        temp_v5 = temp_v12;
        FUN_003076e6(&temp_v3,&temp_v5);
        temp_v16 = temp_v3;
        temp_v17 = temp_v4;
        bitFieldSet(&temp_v16,(int)*param_5);
      }
      FUN_002f1840(&temp_v12,&temp_v8,param_4);
      temp_v3 = param_1[3];
      temp_v4 = temp_v12;
      temp_v5 = temp_v13;
      FUN_00307632(&temp_v6,param_1,temp_v19,temp_v20,param_1[2]);
      param_1[3] = temp_v7;
      param_1[2] = temp_v6;
      asdOperatorDeleteArray(*param_1);
      param_1[4] = ((temp_v11 + 0x1fU) >> 5) * 4 + temp_v0;
      *param_1 = temp_v0;
      param_1[1] = 0;
    }
  }
  return;
}

} /* extern "C" */
