/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00263534` (_code @ 0x263534, 0x1e0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_3_stack;

extern unsigned char DAT_004656d0; /* 0x4656d0 */
extern signed char DAT_004656d1; /* 0x4656d1 */
extern unsigned int DAT_004e62a8; /* 0x4e62a8 */

/* Supplied declaration required: FUN_002390e4. */
/* Supplied declaration required: FUN_002392e0. */
/* Supplied declaration required: FUN_00239734. */
/* Supplied declaration required: FUN_0024f07c. */
/* Supplied declaration required: FUN_002ad8f8. */
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_002c586c. */
/* Supplied declaration required: FUN_00357a3c. */
extern int FUN_003e0a0c(int, unsigned char *, unsigned int);


int FUN_00263534(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int uStack_9c;
  unsigned char temp_v2 [8];
  int temp_v3;
  int temp_v4;
  unsigned int uStack_34;
  int temp_v5;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  FUN_002c3aa8(&DAT_004e62a8);
  FUN_00357a3c();
  DAT_004656d1 = '\x01';
  *(unsigned int *)(param_1 + 4) = param_2;
  temp_v0 = FUN_003e0a0c(param_1,temp_v2,param_2);
  if (temp_v0 < 0) {
    *(unsigned int *)(param_1 + 4) = 0;
    FUN_002390e4(param_1,1);
    if (DAT_004656d1 != '\0') {
      FUN_0024f07c(0);
    }
    FUN_002c3a24(&DAT_004e62a8);
    return temp_v0;
  }
  if (temp_v3 == param_3) {
    *(unsigned char *)(param_1 + 10) = 0;
    *(unsigned char *)(param_1 + 0xb) = 0;
    FUN_002bcf58(param_1 + 0x19c,temp_v2,0x60);
    temp_v1 = 0;
    temp_v0 = param_1;
    FUN_00239734(param_1,param_1 + 0x1fc,param_1 + 0x21c,*(unsigned int *)(param_1 + 0x3a8));
    if (temp_v0 < 0) {
      *(unsigned int *)(param_1 + 4) = 0;
      FUN_002390e4(param_1,1);
    }
    else {
      temp_v1 = 1;
      temp_v0 = param_1;
      FUN_00239734(param_1,param_1 + 0x3ac,param_1 + 0x3cc,*(unsigned int *)(param_1 + 0x558));
      if (-1 < temp_v0) {
        FUN_002392e0(param_1);
        *(unsigned char *)(param_1 + 0x1dc) = 0;
        *(unsigned char *)(param_1 + 0x1dd) = 0;
        FUN_002c586c(&temp_v1);
        temp_v4 = temp_v1;
        uStack_34 = uStack_9c;
        FUN_002ad8f8(&temp_v5,&temp_v4);
        *(unsigned int *)(param_1 + 0x1d0) = temp_v5;
        *(unsigned int *)(param_1 + 0x1d4) = uStack_2c;
        *(unsigned int *)(param_1 + 0x1d8) = uStack_28;
        DAT_004656d0 = 1;
        FUN_002c3a24(&DAT_004e62a8);
        return 0;
      }
      *(unsigned int *)(param_1 + 4) = 0;
      FUN_002390e4(param_1,1);
    }
    if (DAT_004656d1 != '\0') {
      FUN_0024f07c(0);
    }
    FUN_002c3a24(&DAT_004e62a8);
    return temp_v0;
  }
  *(unsigned int *)(param_1 + 4) = 0;
  FUN_002390e4(param_1,1);
  if (DAT_004656d1 != '\0') {
    FUN_0024f07c(0);
  }
  FUN_002c3a24(&DAT_004e62a8);
  return -0x377ef416;
}
