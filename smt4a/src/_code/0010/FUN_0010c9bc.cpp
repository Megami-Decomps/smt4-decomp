/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c9bc` (_code @ 0x10c9bc, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011a8b8(int, int, int, unsigned int);
int FUN_002e6e74(int, unsigned int);
int FUN_002e7232(int);
int FUN_002e75fa(int);
int FUN_002e78d0(unsigned int, int, int);
int FUN_002e7908(...);
int FUN_002e9afe(int *, unsigned int *);

/* stack frame of param_7: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_7_stack;

/* Supplied declaration required: FUN_0011a8b8. */
extern unsigned int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e74. */
/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002e75fa. */
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002e78d0. */
/* Supplied declaration required: FUN_002e7908. */
/* Supplied declaration required: FUN_002e9afe. */


unsigned int *
FUN_0010c9bc(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4,int param_5,
            unsigned int param_6,unsigned int param_7)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int uStack_34;
  unsigned int uStack_30;
  unsigned int *temp_v7;
  int iStack_20;
  unsigned int temp_v8;
  unsigned int uStack_18;
  
  temp_v7 = param_1;
  iStack_20 = param_2;
  temp_v8 = param_3;
  uStack_18 = param_4;
  temp_v0 = FUN_002e760a(0x2c0);
  if (temp_v0 != 0) {
    temp_v3 = param_5;
    temp_v4 = param_6;
    temp_v5 = param_7;
    temp_v2 = param_4;
    FUN_0011a8b8(temp_v0,param_2,param_2 + 8,temp_v8);
  }
  else {
    temp_v0 = 0;
  }
  FUN_002e75fa(temp_v0);
  temp_v1 = FUN_002e6e26();
  FUN_002e78d0(temp_v1,temp_v0,0);
  if (param_5 != 0) {
    FUN_002e7232(temp_v0);
    temp_v2 = 0x10001;
    temp_v7 = (unsigned int *)FUN_002e7908(temp_v7,&temp_v2);
  }
  else {
    temp_v5 = 0x80050001;
    FUN_002e7908(&temp_v2,&temp_v5);
    FUN_002e6e74(temp_v0,param_7);
    if (*(char *)(temp_v0 + 0x22) != '\x05') {
      temp_v6 = 0x80050008;
      puVar3 = (unsigned int *)FUN_002e7908(&uStack_34,&temp_v6);
    }
    else {
      temp_v6 = *(unsigned int *)(temp_v0 + 0x228);
      uStack_34 = *(unsigned int *)(temp_v0 + 0x22c);
      uStack_30 = *(unsigned int *)(temp_v0 + 0x230);
      puVar3 = (unsigned int *)&temp_v6;
    }
    FUN_002e9afe(&temp_v2,puVar3);
    FUN_002e7232(temp_v0);
    *temp_v7 = temp_v2;
    temp_v7[1] = temp_v3;
    temp_v7[2] = temp_v4;
    temp_v7 = temp_v7 + 3;
  }
  return temp_v7;
}

} /* extern "C" */
