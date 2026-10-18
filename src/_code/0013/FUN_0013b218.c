/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b218` (_code @ 0x13b218, 0x1c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern int FUN_00147ab8(); /* 0x147ab8 */
extern unsigned char LAB_0014da38; /* 0x14da38 */
extern unsigned char LAB_001525f8; /* 0x1525f8 */
extern unsigned char LAB_00152604; /* 0x152604 */

/* Supplied declaration required: FUN_001396a4. */
/* Supplied declaration required: FUN_00147840. */
extern int FUN_00147d80(unsigned int, unsigned int, unsigned int, unsigned int *);
extern int FUN_00147dd0(void);
extern unsigned int FUN_002ad264(void);
extern int FUN_002b3abc(void);
/* Supplied declaration required: FUN_002b5820. */
/* Supplied declaration required: FUN_002bcc60. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */
/* Supplied declaration required: FUN_002c38fc. */
/* Supplied declaration required: FUN_002c5220. */
/* Supplied declaration required: FUN_002c526c. */


void FUN_0013b218(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int **ppiVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_34;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char *temp_v10;
  unsigned char *temp_v11;
  unsigned char *temp_v12;
  int temp_v13;
  
  ppiVar1 = &temp_v4;
  temp_v8 = 0;
  FUN_002c38fc();
  FUN_002c38a4(param_1);
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  temp_v4 = (int *)0x0;
  FUN_002b5820(&temp_v4,0);
  if (-1 < (int)ppiVar1) {
    ppiVar1 = (int **)0x0;
    *(int **)(param_1 + 0x2c) = temp_v4;
  }
  if ((int)ppiVar1 < 0) {
    FUN_002c526c();
  }
  *(unsigned char *)(param_1 + 0x77) = 0;
  *(unsigned char *)(param_1 + 0x76) = 0;
  FUN_002c5220(param_1 + 100,0);
  temp_v0 = FUN_002ad264();
  temp_v1 = FUN_002b3abc();
  if (temp_v1 == 0) {
    temp_v3 = 1;
  }
  else {
    temp_v3 = 2;
  }
  temp_v1 = FUN_00147dd0();
  temp_v4 = &temp_v7;
  if (temp_v1 != 0) {
    temp_v3 = temp_v3 | 4;
  }
  temp_v1 = FUN_00147d80(temp_v0,*(unsigned int *)(param_1 + 0x2c),temp_v3,(unsigned int *)&temp_v8);
  *(char *)(param_1 + 0x74) = (char)temp_v7;
  FUN_001396a4(param_1 + 0x38,temp_v8,0x1000,0);
  *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x40) + temp_v7 * 0x40;
  FUN_00147840(param_1 + 0x58,temp_v7 * 0x200 + 0x800 + *(int *)(param_1 + 0x40));
  temp_v2 = temp_v7 * 0x80 + 0x200 + *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x5c) = temp_v2;
  *(int *)(param_1 + 0x60) = temp_v2 + 0x40;
  if (temp_v1 == 0x2a07) {
    *(unsigned char *)(param_1 + 0x75) = 1;
  }
  else {
    *(unsigned char *)(param_1 + 0x75) = 0;
  }
  temp_v9 = 4;
  temp_v10 = &LAB_0014da38;
  temp_v5 = 0x5109d502;
  temp_v11 = &LAB_00152604;
  temp_v12 = &LAB_001525f8;
  temp_v4 = (int *)(param_1 + 0x1078);
  temp_v6 = 0xfffffffe;
  uStack_34 = 0;
  temp_v1 = param_1 + 0x6c;
  temp_v13 = param_1;
  FUN_002bcc60(temp_v1,&temp_v9,FUN_00147ab8,&temp_v13);
  if (temp_v1 < 0) {
    FUN_002c526c();
  }
  FUN_002c3820(param_1);
  return;
}
