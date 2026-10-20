/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311318` (_code @ 0x311318, 0xbe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00130e3c(int [2], int, int *);
int FUN_002e9318(unsigned char [8]);
int FUN_002ea0e4(unsigned char [8]);
int FUN_002f42be(unsigned char [8], unsigned char *, unsigned int, int);
int FUN_002f44ec(...);

/* stack frame of param_2: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

extern unsigned char LAB_003113d8; /* 0x3113d8 */

extern unsigned int FUN_00113fa0(int, unsigned char *);
/* Supplied declaration required: FUN_00130e3c. */
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002ea0e4. */
/* Supplied declaration required: FUN_002f42be. */
/* Supplied declaration required: FUN_002f44ec. */
extern int FUN_002fee88(int *, unsigned int *);
extern int FUN_002ff078(int *, unsigned int *);


unsigned int FUN_00311318(int param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4 [2];
  int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7 [8];
  int temp_v8;
  unsigned int temp_v9 [2];
  int temp_v10;
  int temp_v11;
  int iStack_1c;
  int temp_v12;
  
  temp_v0 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  temp_v3 = *(int *)(param_1 + 0x1c);
  iStack_1c = param_1;
  temp_v12 = param_2;
  while (temp_v2 = temp_v0, temp_v2 != 0) {
    temp_v0 = FUN_002f44ec(param_1 + 0x25,temp_v2 + 0x10,&temp_v12);
    if (temp_v0 != 0) {
      temp_v0 = *(int *)(temp_v2 + 0xc);
    }
    else {
      temp_v0 = *(int *)(temp_v2 + 8);
      temp_v3 = temp_v2;
    }
  }
  temp_v11 = *(unsigned int *)(param_1 + 0x1c);
  temp_v10 = temp_v3;
  temp_v0 = FUN_002ff078(&temp_v10,(unsigned int *)&temp_v11);
  if ((temp_v0 != 0) ||
     (temp_v0 = FUN_002f44ec(param_1 + 0x25,&temp_v12,temp_v10 + 0x10), temp_v8 = temp_v10,
     temp_v0 != 0)) {
    temp_v8 = *(int *)(param_1 + 0x1c);
  }
  temp_v9[0] = *(unsigned int *)(param_1 + 0x1c);
  temp_v0 = FUN_002fee88(&temp_v8,temp_v9);
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(temp_v8 + 0x14);
  }
  else {
    FUN_002ea0e4(temp_v7);
    FUN_002f42be(temp_v7,&LAB_003113d8,*(unsigned int *)(param_1 + 8),temp_v12);
    temp_v0 = FUN_002e760a(0x4c);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_00113fa0(temp_v0,temp_v7);
    }
    temp_v6 = 0;
    temp_v5 = temp_v12;
    FUN_00130e3c(temp_v4,param_1 + 0xc,&temp_v5);
    *(unsigned int *)(temp_v4[0] + 0x14) = temp_v1;
    FUN_002e9318(temp_v7);
  }
  return temp_v1;
}

} /* extern "C" */
