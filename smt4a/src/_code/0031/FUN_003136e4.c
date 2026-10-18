/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003136e4` (_code @ 0x3136e4, 0x230 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} void_stack;

extern int DAT_005f15fc; /* 0x5f15fc */
extern unsigned int *DAT_005f1600; /* 0x5f1600 */
extern signed char DAT_005f199f; /* 0x5f199f */

/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_0027376c. */
/* Supplied declaration required: FUN_00294774. */
/* Supplied declaration required: FUN_00353484. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


void FUN_003136e4(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12 [72];
  
  FUN_001bc124();
  FUN_001bbf0c();
  FUN_0027376c(0);
  if (DAT_005f199f != '\0') {
    puVar1 = (unsigned int *)&DAT_005f15fc;
    if (DAT_005f15fc == 0x26) {
      puVar1 = DAT_005f1600;
    }
    if (DAT_005f15fc == 0x26 && puVar1 == (unsigned int *)0x3) {
      temp_v0 = 0x3f800000;
      temp_v9 = 0x3e95b0ca;
      temp_v4 = 0;
      temp_v10 = 0x3f74cedd;
      temp_v2 = 0;
      temp_v5 = 0x3f74cedd;
      temp_v1 = 0;
      temp_v6 = 0xbe95b0ca;
      temp_v3 = 0;
      temp_v7 = 0;
      temp_v11 = 0;
      temp_v8 = 0x80000000;
      nn_math_ARMv6_MTX34CopyAsm(temp_v12,&temp_v0);
      FUN_00353484(0,temp_v12);
    }
  }
  else {
    temp_v0 = 0x3f800000;
    temp_v4 = 0;
    temp_v10 = 0x3f800000;
    temp_v2 = 0;
    temp_v5 = 0x3f800000;
    temp_v1 = 0;
    temp_v6 = 0;
    temp_v3 = 0;
    temp_v7 = 0;
    temp_v11 = 0;
    temp_v8 = 0x80000000;
    temp_v9 = temp_v4;
    nn_math_ARMv6_MTX34CopyAsm(temp_v12,&temp_v0);
    FUN_00353484(0,temp_v12);
  }
  FUN_00294774(0);
  return;
}
