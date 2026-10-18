/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029dcd4` (_code @ 0x29dcd4, 0x1e0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0029dcd4_arg2 fn_0029dcd4_arg2;
struct fn_0029dcd4_arg2 {
    unsigned char pad_0x0[0x8];
    ushort field_0x8; /* +0x8 */
    byte field_0xa; /* +0xa */
    unsigned char pad_0xb[0x1];
    byte field_0xc; /* +0xc */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spB0; /* 0xb0: local_b0 */
} param_4_stack;

extern unsigned char LAB_0029deb8; /* 0x29deb8 */
extern unsigned char LAB_0029dec0; /* 0x29dec0 */
extern unsigned char LAB_0029decc; /* 0x29decc */
extern unsigned char LAB_0029ded4; /* 0x29ded4 */
extern unsigned char LAB_0029dee4; /* 0x29dee4 */
extern unsigned char LAB_0029def0; /* 0x29def0 */
extern unsigned char LAB_0029defc; /* 0x29defc */
extern unsigned char LAB_0029df08; /* 0x29df08 */
extern int DAT_0043da2c; /* 0x43da2c */
extern int DAT_0043da30; /* 0x43da30 */

/* Supplied declaration required: FUN_001f4480. */
/* Supplied declaration required: FUN_0024beac. */
/* Supplied declaration required: FUN_0024bfbc. */
/* Supplied declaration required: FUN_00290a68. */
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_00296d8c. */
/* Supplied declaration required: FUN_0029f088. */
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002be7fc. */


void FUN_0029dcd4(int param_1,unsigned int param_2,fn_0029dcd4_arg2 *param_3,unsigned int param_4)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  fn_0029dcd4_arg2 *pfVar3;
  int temp_v2;
  int iStack_ac;
  unsigned int temp_v3 [2];
  unsigned char temp_v4 [128];
  
  temp_v1 = DAT_0043da2c;
  pfVar3 = param_3;
  FUN_002b9364();
  if (pfVar3 == (fn_0029dcd4_arg2 *)0x0) {
    *(unsigned char *)(temp_v1 + 0x4cb) = 0;
  }
  else {
    *(unsigned char *)(temp_v1 + 0x55c) = 1;
    *(unsigned char *)(temp_v1 + 0x4cb) = 1;
    temp_v0 = (pfVar3->field_0x8 & 0xff) >> 5;
    if (temp_v0 == (pfVar3->field_0x8 & 0x7ff) >> 8) {
      FUN_0029f088(0x25,temp_v0,0xffffffff,0);
    }
    else {
      FUN_00290a68(&temp_v2);
      FUN_00290a68(temp_v3,(pfVar3->field_0x8 & 0x7ff) >> 8);
      FUN_002be7fc(temp_v4,&LAB_0029deb8,&temp_v2,temp_v3);
      FUN_00295904(0x25,temp_v4);
    }
    FUN_0024bfbc(temp_v4,pfVar3->field_0xa);
    FUN_00295904(0x26,temp_v4);
    FUN_0024beac(temp_v4,(pfVar3->field_0x8 & 0x1f) >> 1);
    FUN_00295904(0x27,temp_v4);
    if (pfVar3->field_0xc == 0) {
      FUN_002be7fc(temp_v4,&LAB_0029dec0);
    }
    if (pfVar3->field_0xc == 1) {
      FUN_002be7fc(temp_v4,&LAB_0029decc);
    }
    if (pfVar3->field_0xc == 5) {
      FUN_002be7fc(temp_v4,&LAB_0029ded4);
    }
    if (pfVar3->field_0xc == 6) {
      FUN_002be7fc(temp_v4,&LAB_0029dee4);
    }
    if (pfVar3->field_0xc == 7) {
      FUN_002be7fc(temp_v4,&LAB_0029def0);
    }
    if (pfVar3->field_0xc == 8) {
      FUN_002be7fc(temp_v4,&LAB_0029defc);
    }
    if (pfVar3->field_0xc == 9) {
      FUN_002be7fc(temp_v4,&LAB_0029df08);
    }
    FUN_00295904(0x28,temp_v4);
    FUN_001f4480(0,param_4,param_3,temp_v4);
    FUN_00295904(0x29,temp_v4);
    if (param_1 == 0) {
      param_1 = DAT_0043da30;
    }
    temp_v2 = 3;
    iStack_ac = param_1;
    temp_v3[0] = param_2;
    FUN_00296d8c(*(unsigned int *)(temp_v1 + 0x558),3,0xffffffff,0);
  }
  return;
}
