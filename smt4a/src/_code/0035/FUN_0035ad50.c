/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035ad50` (_code @ 0x35ad50, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 17 slot(s), 39 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned short sp46; /* 0x46: local_46 */
    unsigned short sp48; /* 0x48: local_48 */
    unsigned char sp4A; /* 0x4a: local_4a */
    unsigned short sp4C; /* 0x4c: local_4c */
    unsigned short sp4E; /* 0x4e: local_4e */
    unsigned short sp50; /* 0x50: local_50 */
    unsigned short sp52; /* 0x52: local_52 */
    unsigned short sp54; /* 0x54: local_54 */
    unsigned short sp56; /* 0x56: local_56 */
    unsigned short sp58; /* 0x58: local_58 */
    unsigned short sp5A; /* 0x5a: local_5a */
    unsigned short sp5C; /* 0x5c: local_5c */
    unsigned short sp5E; /* 0x5e: local_5e */
    unsigned short sp60; /* 0x60: local_60 */
} param_2_stack;

extern unsigned short FUN_0017760c(unsigned short *);
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_00239234. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_004bcd90. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0035ad50(unsigned int param_1,unsigned short *param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned short temp_v4;
  unsigned short temp_v5;
  unsigned short temp_v6;
  unsigned short temp_v7;
  unsigned short temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  unsigned short temp_v11;
  unsigned char temp_v12;
  unsigned short temp_v13;
  unsigned short temp_v14;
  unsigned int temp_v15;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int temp_v16;
  unsigned int uStack_30;
  unsigned int temp_v17;
  unsigned char temp_v18 [24];
  
  FUN_00184310();
  FUN_00239234(param_1,&temp_v1);
  FUN_002e6354(param_2,300);
  param_2[0x31] = (short)param_1;
  param_2[0x32] = temp_v1;
  *param_2 = temp_v13;
  param_2[1] = temp_v14;
  param_2[2] = temp_v2;
  param_2[4] = temp_v4;
  param_2[5] = temp_v5;
  param_2[6] = temp_v6;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[3] = temp_v3;
  param_2[0x10] = temp_v7;
  param_2[0x12] = temp_v9;
  param_2[0x13] = temp_v10;
  param_2[0x14] = temp_v11;
  param_2[0x11] = temp_v8;
  rt_memcpy_w(param_2 + 0x26,temp_v18,0x12);
  *(unsigned int *)(param_2 + 0x1a) = temp_v15;
  *(unsigned int *)(param_2 + 0x1c) = uStack_40;
  *(unsigned int *)(param_2 + 0x1e) = uStack_3c;
  *(unsigned int *)(param_2 + 0x20) = uStack_38;
  *(unsigned int *)(param_2 + 0x22) = temp_v16;
  *(unsigned int *)(param_2 + 0x24) = uStack_30;
  *(unsigned int *)(param_2 + 0x18) = temp_v17;
  *(unsigned char *)((int)param_2 + 299) = (unsigned char)(((unsigned int)temp_v12 << 0x1a) >> 0x1c);
  FUN_004bcd90(param_2);
  temp_v0 = FUN_0017760c(param_2);
  param_2[0x15] = temp_v0;
  param_2[0x16] = param_2[8];
  return;
}
