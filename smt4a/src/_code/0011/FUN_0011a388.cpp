/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a388` (_code @ 0x11a388, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011a338(int, unsigned char [28]);
int FUN_0011a6dc(int);
int FUN_002e75fa(unsigned int);
int FUN_002e9afe(int, unsigned int);
int FUN_002e9c64(unsigned char *, unsigned char *, int *, int);
int FUN_002ea43c(int);
int FUN_002ec8f8(void);
int FUN_002f7cb0(int);
int FUN_002f8728(unsigned char [28]);
int FUN_002fd108(int, unsigned char *, unsigned int, unsigned int);
int FUN_002fd180(unsigned char [28]);
int FUN_00306e70(int);

typedef int romwright_code(...);
/* stack frame of param_1: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

extern unsigned char LAB_0011a717; /* 0x11a717 */

/* Supplied declaration required: FUN_0011a338. */
/* Supplied declaration required: FUN_0011a6dc. */
/* Supplied declaration required: FUN_002e75fa. */
extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002e7908(unsigned char **, unsigned int *);
/* Supplied declaration required: FUN_002e9afe. */
/* Supplied declaration required: FUN_002e9c64. */
/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002ec8f8. */
/* Supplied declaration required: FUN_002f7cb0. */
/* Supplied declaration required: FUN_002f8728. */
/* Supplied declaration required: FUN_002fd108. */
/* Supplied declaration required: FUN_002fd180. */
extern int FUN_002fde5c(void);
/* Supplied declaration required: FUN_00306e70. */


void FUN_0011a388(int param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int *piVar5;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  unsigned int *temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char *temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned char temp_v15 [28];
  
  if (*(int *)(param_1 + 0x1bc) != 0) {
    temp_v5 = *(unsigned int **)
                (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a0) + 4) + 0x20) + 0x24) + 0x18);
    FUN_0011a6dc(param_1);
    piVar5 = (int *)(param_1 + 0xc0);
    if ((int *)*piVar5 != (int *)0x0) {
      (**(romwright_code **)(*(int *)*piVar5 + 4))();
    }
    temp_v0 = FUN_002e760a(0x18);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_002fde5c();
    }
    *piVar5 = temp_v1;
    FUN_002f8728(temp_v15);
    FUN_0011a338(param_1,temp_v15);
    temp_v3 = (unsigned char *)(param_1 + 0x140);
    temp_v13 = param_1;
    FUN_002e9c64(temp_v3,&LAB_0011a717,&temp_v13,0);
    temp_v12 = (int)temp_v5;
    temp_v9 = temp_v3;
    temp_v14 = *(unsigned int *)(*(int *)(param_1 + 0xbc) + 8);
    temp_v8 = *(unsigned int *)(*piVar5 + 8);
    temp_v3 = (unsigned char *)(param_1 + 0x1a4);
    temp_v10 = *(unsigned int *)(param_1 + 0x2a8);
    temp_v11 = *(unsigned int *)(param_1 + 0x2ac);
    puVar3 = (unsigned int *)&temp_v10;
    FUN_002ec8f8();
    temp_v7 = param_1 + 0x2b8;
    temp_v4 = temp_v3;
    temp_v6 = 0;
    temp_v1 = temp_v12;
    temp_v3 = temp_v15;
    temp_v5 = puVar3;
    FUN_002fd108(temp_v12,temp_v9,temp_v14,temp_v8);
    if (temp_v1 != 0) {
      FUN_002e75fa(*(unsigned int *)(param_1 + 0x2b8));
      *(unsigned char *)(param_1 + 0x3b) = 4;
      FUN_002f7cb0(param_1);
    }
    else {
      temp_v6 = 0x8001000d;
      temp_v2 = FUN_002e7908(&temp_v3,(unsigned int *)&temp_v6);
      FUN_002e9afe(param_1 + 0x228,temp_v2);
      *(unsigned char *)(param_1 + 0x3b) = 4;
      FUN_00306e70(param_1);
    }
    FUN_002fd180(temp_v15);
  }
  else {
    temp_v6 = 0x80050003;
    temp_v2 = FUN_002e7908(&temp_v3,(unsigned int *)&temp_v6);
    FUN_002e9afe(param_1 + 0x228,temp_v2);
    *(unsigned char *)(param_1 + 0x3b) = 5;
    FUN_002ea43c(param_1);
  }
  return;
}

} /* extern "C" */
