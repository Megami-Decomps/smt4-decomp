/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00346f2c` (_code @ 0x346f2c, 0x1f0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 15 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned char sp1D; /* 0x1d: local_1d */
    unsigned char sp1E; /* 0x1e: local_1e */
    unsigned char sp1F; /* 0x1f: local_1f */
    unsigned char sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned char sp25; /* 0x25: local_25 */
    unsigned char sp26; /* 0x26: local_26 */
    unsigned char sp27; /* 0x27: local_27 */
    unsigned char sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned char sp2D; /* 0x2d: local_2d */
    unsigned char sp2E; /* 0x2e: local_2e */
    unsigned char sp2F; /* 0x2f: local_2f */
    unsigned char sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_0023b6d8. */
/* Supplied declaration required: FUN_0023b9d0. */
extern unsigned int FUN_002bc11c(int);
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c5df8. */


void FUN_00346f2c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned int temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned int temp_v17;
  
  temp_v2 = param_1 + 0x4c;
  FUN_002c4938(temp_v2,0x790);
  temp_v17 = 0;
  temp_v8 = 0;
  temp_v13 = 0;
  temp_v3 = 0;
  temp_v9 = 1;
  temp_v14 = 1;
  temp_v4 = 1;
  temp_v10 = 0xff;
  temp_v15 = 0xff;
  temp_v5 = 0xff;
  temp_v11 = 0xff;
  temp_v12 = 0;
  temp_v16 = 0xff;
  temp_v6 = 0xff;
  temp_v7 = 0;
  if ((*(unsigned int *)(param_1 + 4) & 1) != 0) {
    temp_v0 = *(int *)(param_1 + 0xc) * 0xc;
    FUN_0023b6d8(temp_v0);
    FUN_002c5df8(temp_v0,*(unsigned int *)(param_1 + 0x30));
    temp_v10 = 0;
    temp_v1 = FUN_002bc11c(temp_v0);
    FUN_0023b9d0(temp_v2,&temp_v8,temp_v1,0xb);
  }
  if ((*(unsigned int *)(param_1 + 4) & 2) != 0) {
    temp_v0 = *(int *)(param_1 + 0xc) << 4;
    FUN_0023b6d8(temp_v0);
    FUN_002c5df8(temp_v0,*(unsigned int *)(param_1 + 0x34));
    temp_v5 = 1;
    temp_v1 = FUN_002bc11c(temp_v0);
    FUN_0023b9d0(temp_v2,&temp_v3,temp_v1,0xf);
  }
  if ((*(unsigned int *)(param_1 + 4) & 0x20) != 0) {
    temp_v0 = *(int *)(param_1 + 0xc) << 2;
    FUN_0023b6d8(temp_v0);
    FUN_002c5df8(temp_v0,*(unsigned int *)(param_1 + 0x38));
    temp_v5 = 1;
    temp_v1 = FUN_002bc11c(temp_v0);
    FUN_0023b9d0(temp_v2,&temp_v3,temp_v1,0xd);
  }
  if ((*(unsigned int *)(param_1 + 4) & 4) != 0) {
    temp_v0 = *(int *)(param_1 + 0xc) << 3;
    FUN_0023b6d8(temp_v0);
    FUN_002c5df8(temp_v0,*(unsigned int *)(param_1 + 0x3c));
    temp_v15 = 2;
    temp_v1 = FUN_002bc11c(temp_v0);
    FUN_0023b9d0(temp_v2,&temp_v13,temp_v1,7);
  }
  return;
}
