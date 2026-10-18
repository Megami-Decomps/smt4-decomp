/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045b9cc` (_code @ 0x45b9cc, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 19 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned char sp3B; /* 0x3b: local_3b */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned char sp47; /* 0x47: local_47 */
    unsigned char sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_5_stack;

/* Supplied declaration required: FUN_0045b628. */
/* Supplied declaration required: FUN_0045f410. */
extern int FUN_00507b24(unsigned int, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_00507b7c. */
/* Supplied declaration required: nw_snd_Sound3DParam_Sound3DParam_sub_object. */


unsigned int FUN_0045b9cc(unsigned int param_1,int *param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
                 )

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int temp_v3;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  char temp_v12;
  unsigned char temp_v13;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  unsigned int *temp_v17;
  unsigned int temp_v18;
  
  if (*(char *)(param_1 + 0x85) == '\0') {
    param_1 = 0x10;
  }
  else {
    nw_snd_Sound3DParam_Sound3DParam_sub_object(&temp_v2);
    temp_v2 = *(unsigned int *)(param_1 + 0x6c);
    uStack_6c = *(unsigned int *)(param_1 + 0x70);
    uStack_68 = *(unsigned int *)(param_1 + 0x74);
    temp_v3 = *(unsigned int *)(param_1 + 0x78);
    uStack_60 = *(unsigned int *)(param_1 + 0x7c);
    uStack_5c = *(unsigned int *)(param_1 + 0x80);
    temp_v5 = *(unsigned int *)(param_1 + 0x68);
    if (*(int *)(param_1 + 100) != 0) {
      temp_v0 = *(unsigned int *)(*(int *)(param_1 + 100) + 4);
      temp_v1 = FUN_00507b24(temp_v0,param_3,(unsigned int *)&temp_v10);
      if (temp_v1 != 0) {
        temp_v8 = 1;
        temp_v4 = temp_v10;
        temp_v7 = temp_v11;
        temp_v9 = temp_v13;
        if ((temp_v12 != '\x01') && (temp_v12 == '\x02')) {
          temp_v8 = 2;
        }
      }
      FUN_00507b7c(temp_v0,param_3);
      temp_v6 = temp_v0;
    }
    temp_v15 = param_1 + 0x5c;
    temp_v18 = 0x2c;
    temp_v14 = *(unsigned int *)(param_1 + 0x60);
    if (*(int *)(param_1 + 0x60) != 0) {
      temp_v16 = *(int *)(param_1 + 0x60) + 4;
    }
    else {
      temp_v16 = 0;
    }
    temp_v17 = (unsigned int *)&temp_v2;
    FUN_0045b628(param_1,param_2,param_3,param_4,&temp_v14,param_5);
    if (*param_2 != 0) {
      FUN_0045f410(*param_2,3);
    }
    param_1 = param_1 & 0xff;
  }
  return param_1;
}
