/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bfb50` (_code @ 0x3bfb50, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_3_stack;

/* Supplied declaration required: FUN_00212510. */
/* Supplied declaration required: FUN_0028122c. */


unsigned int FUN_003bfb50(unsigned int param_1,float *param_2,int param_3)

{
/* irregular: irregular input(s): in_s0, in_s1; 5 native warning(s); review required */
  float *pfVar1;
  float in_s0;
  float in_s1;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  float temp_v12;
  float fStack_60;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned char temp_v18 [72];
  
  pfVar1 = &temp_v3;
  temp_v0 = *param_2;
  temp_v1 = param_2[1];
  temp_v2 = param_2[2];
  temp_v17 = 0x3f800000;
  temp_v12 = temp_v1 * temp_v2 * in_s0;
  temp_v6 = 0;
  temp_v11 = temp_v2 * temp_v0 * in_s0;
  temp_v7 = temp_v0 * temp_v1 * in_s0;
  temp_v10 = 0;
  temp_v13 = 0;
  temp_v16 = 0;
  temp_v15 = 0;
  temp_v14 = 0;
  temp_v3 = 1.0f - (1.0f - temp_v0 * temp_v0) * in_s0;
  temp_v8 = 1.0f - (1.0f - temp_v1 * temp_v1) * in_s0;
  fStack_60 = 1.0f - (1.0f - temp_v2 * temp_v2) * in_s0;
  temp_v4 = temp_v7 + temp_v2 * in_s1;
  temp_v7 = temp_v7 - temp_v2 * in_s1;
  temp_v5 = temp_v11 - temp_v1 * in_s1;
  temp_v11 = temp_v11 + temp_v1 * in_s1;
  temp_v9 = temp_v12 + temp_v0 * in_s1;
  temp_v12 = temp_v12 - temp_v0 * in_s1;
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 == 2) {
        FUN_0028122c(temp_v18,param_1,&temp_v3);
        FUN_00212510(param_1,temp_v18);
        return param_1;
      }
      return 0;
    }
    FUN_0028122c(temp_v18,&temp_v3,param_1);
    pfVar1 = (float *)temp_v18;
  }
  FUN_00212510(param_1,pfVar1);
                    /* WARNING: Treating indirect jump as return */
  return param_1;
}
