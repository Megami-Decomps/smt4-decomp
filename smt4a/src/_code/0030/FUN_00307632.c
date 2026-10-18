/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307632` (_code @ 0x307632, 0x6a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
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
} param_8_stack;

/* Supplied declaration required: FUN_0030769c. */
extern int FUN_003076b6(unsigned int *, unsigned char *);
/* Supplied declaration required: FUN_003076d2. */
/* Supplied declaration required: FUN_003076e6. */


void FUN_00307632(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 int param_5,unsigned int param_6,int param_7,unsigned int param_8)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  unsigned int *puStack_18;
  unsigned int uStack_14;
  int uStack_10;
  unsigned int uStack_c;
  
  puStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  while (temp_v0 = FUN_003076b6((unsigned int *)&uStack_10,(unsigned char *)&param_5), temp_v0 != 0) {
    FUN_0030769c(&temp_v9,&uStack_10,0);
    temp_v8 = temp_v10;
    temp_v7 = temp_v9;
    FUN_003076e6(&temp_v5,&temp_v7);
    temp_v12 = temp_v6;
    temp_v11 = temp_v5;
    FUN_0030769c(&temp_v3,&param_7,0);
    temp_v14 = temp_v4;
    temp_v13 = temp_v3;
    FUN_003076e6(&temp_v1,&temp_v13);
    temp_v16 = temp_v2;
    temp_v15 = temp_v1;
    FUN_003076d2(&temp_v15,&temp_v11);
  }
  *param_1 = param_7;
  param_1[1] = param_8;
  return;
}
