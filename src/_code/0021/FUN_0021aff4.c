/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021aff4` (_code @ 0x21aff4, 0x1e8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 18 slot(s), 72 byte(s) */
typedef struct {
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
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
} void_stack;

extern int DAT_004474f4; /* 0x4474f4 */
extern int DAT_00447e88; /* 0x447e88 */
extern int DAT_0049f91c; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */

/* Supplied declaration required: FUN_001e2704. */
extern int FUN_00211708(unsigned int *, unsigned int *, unsigned int *, unsigned char *);
/* Supplied declaration required: FUN_00282600. */
/* Supplied declaration required: FUN_0028277c. */
extern int FUN_002c2b1c(void);


void FUN_0021aff4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned char temp_v21 [28];
  
  *(unsigned int *)(DAT_004474f4 + 0x214) = 0;
  if (DAT_0049f91c != 0x19) {
    if ((((DAT_0049f91c == 0x1a) || (DAT_0049f91c == 0x1b)) || (DAT_0049f91c == 0x1c)) &&
       (DAT_0049f920 == 1)) {
      return;
    }
  }
  else if (DAT_0049f920 == 3) {
    return;
  }
  temp_v0 = FUN_00211708((unsigned int *)&temp_v12,(unsigned int *)&temp_v3,(unsigned int *)&temp_v9,temp_v21);
  if (temp_v0 != 0) {
    temp_v6 = temp_v12;
    temp_v15 = temp_v13;
    temp_v18 = temp_v14;
    temp_v7 = temp_v3;
    temp_v16 = temp_v4;
    temp_v19 = temp_v5;
    temp_v8 = temp_v9;
    temp_v17 = temp_v10;
    temp_v20 = temp_v11;
    temp_v1 = FUN_002c2b1c();
    temp_v0 = *(int *)(DAT_004474f4 + 0x208);
    if (*(int *)(DAT_004474f4 + 0x208) == -1) {
      temp_v0 = *(int *)(DAT_004474f4 + 0xc4);
      switch(*(unsigned int *)(DAT_004474f4 + 0xac)) {
      case 0:
        temp_v0 = *(int *)(DAT_004474f4 + 0xc4) + (unsigned int)*(unsigned char *)(temp_v1 + 0x1d);
        break;
      case 1:
        temp_v0 = 6;
        break;
      case 2:
        temp_v0 = 10;
        break;
      case 0xfffffffd:
        temp_v0 = 5;
        break;
      case 0xfffffffe:
        temp_v0 = 9;
        break;
      case 0xffffffff:
        temp_v0 = 8;
      }
    }
    temp_v2 = *(float *)(DAT_004474f4 + 0x18) * 0.017453292f;
    FUN_0028277c();
    temp_v2 = *(float *)(DAT_00447e88 + 0x1c) - temp_v2 * *(float *)(DAT_004474f4 + temp_v0 * 4 + 0x188);
    FUN_00282600();
    FUN_001e2704(&temp_v6,&temp_v15,&temp_v18);
    *(float *)(DAT_004474f4 + 0x214) = temp_v2 - *(float *)(DAT_00447e88 + 0x20);
  }
  return;
}
