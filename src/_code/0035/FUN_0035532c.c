/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035532c` (_code @ 0x35532c, 0x274 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

extern unsigned int DAT_0044e660; /* 0x44e660 */

extern unsigned long long FUN_00239f84(char **);
/* Supplied declaration required: FUN_002adb54. */
extern char **FUN_002adb84(unsigned int *, int *, unsigned int);
/* Supplied declaration required: FUN_0035654c. */


char ** FUN_0035532c(unsigned int **param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  char **ppcVar3;
  unsigned long long temp_v2;
  unsigned int **temp_v3;
  unsigned int temp_v4;
  char *temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int *temp_v9;
  int temp_v10;
  int temp_v11;
  int iStack_4c;
  unsigned int temp_v12;
  unsigned int **temp_v13;
  unsigned int uStack_40;
  int temp_v14;
  unsigned int uStack_38;
  unsigned int uStack_34;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  unsigned int *puStack_20;
  unsigned int uStack_1c;
  unsigned char temp_v19 [4];
  
  temp_v3 = (unsigned int **)&temp_v13;
  temp_v6 = 0;
  temp_v5 = "敌5拌5戠5";
  temp_v12 = 1;
  uStack_40 = 1;
  temp_v18 = DAT_0044e660;
  temp_v4 = 1;
  temp_v13 = temp_v3;
  ppcVar3 = (char **)FUN_002adb84((unsigned int *)&temp_v18,&temp_v11,3);
  if ((int)ppcVar3 < 0) {
    temp_v5 = "敌5拌5戠5";
    if (temp_v7 != 0 || temp_v8 != 0) {
      temp_v2 = FUN_00239f84(&temp_v5);
      temp_v10 = (unsigned int)temp_v2;
      FUN_002adb54(&temp_v10,(int)((unsigned long long)temp_v2 >> 0x20),temp_v7,temp_v8);
    }
  }
  else {
    temp_v6 = DAT_0044e660;
    temp_v7 = temp_v11;
    temp_v8 = iStack_4c;
    temp_v14 = 2;
    uStack_38 = 0x6e6f6369;
    uStack_34 = 0;
    puStack_20 = (unsigned int *)&temp_v14;
    temp_v18 = 2;
    uStack_1c = 0xc;
    ppcVar3 = &temp_v5;
    FUN_0035654c(ppcVar3,&temp_v9,&temp_v18,1);
    if ((int)ppcVar3 < 0) {
      temp_v5 = "敌5拌5戠5";
      if (temp_v7 != 0 || temp_v8 != 0) {
        temp_v2 = FUN_00239f84(&temp_v5);
        temp_v15 = (unsigned int)temp_v2;
        FUN_002adb54(&temp_v15,(int)((unsigned long long)temp_v2 >> 0x20),temp_v7,temp_v8);
      }
    }
    else {
      temp_v4 = 0x36c0;
      temp_v3 = param_1;
      ppcVar3 = (char **)(**(romwright_code **)*temp_v9)(temp_v9,temp_v19,0,0);
      if (-1 < (int)ppcVar3) {
        (**(romwright_code **)(*temp_v9 + 0x2c))();
        temp_v1 = temp_v8;
        temp_v0 = temp_v7;
        if (temp_v7 != 0 || temp_v8 != 0) {
          temp_v2 = FUN_00239f84(&temp_v5);
          temp_v3 = (unsigned int **)temp_v2;
          FUN_002adb54(&temp_v3,(int)((unsigned long long)temp_v2 >> 0x20),temp_v0,temp_v1);
          temp_v7 = 0;
          temp_v8 = 0;
        }
        temp_v1 = temp_v8;
        temp_v0 = temp_v7;
        temp_v6 = 0;
        temp_v5 = "敌5拌5戠5";
        if (temp_v7 != 0 || temp_v8 != 0) {
          temp_v2 = FUN_00239f84(&temp_v5);
          temp_v3 = (unsigned int **)temp_v2;
          FUN_002adb54(&temp_v3,(int)((unsigned long long)temp_v2 >> 0x20),temp_v0,temp_v1);
        }
        return (char **)0x0;
      }
      (**(romwright_code **)(*temp_v9 + 0x2c))();
      if (temp_v7 != 0 || temp_v8 != 0) {
        temp_v2 = FUN_00239f84(&temp_v5);
        temp_v16 = (unsigned int)temp_v2;
        FUN_002adb54(&temp_v16,(int)((unsigned long long)temp_v2 >> 0x20),temp_v7,temp_v8);
        temp_v7 = 0;
        temp_v8 = 0;
      }
      temp_v6 = 0;
      temp_v5 = "敌5拌5戠5";
      if (temp_v7 != 0 || temp_v8 != 0) {
        temp_v2 = FUN_00239f84(&temp_v5);
        temp_v17 = (unsigned int)temp_v2;
        FUN_002adb54(&temp_v17,(int)((unsigned long long)temp_v2 >> 0x20),temp_v7,temp_v8);
      }
    }
  }
  return ppcVar3;
}
