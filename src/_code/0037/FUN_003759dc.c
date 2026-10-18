/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003759dc` (_code @ 0x3759dc, 0x6e bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003759dc_arg2 fn_003759dc_arg2;
struct fn_003759dc_arg2 {
    unsigned char pad_0x0[0x1c];
    uint field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x14c];
    undefined4 field_0x16c; /* +0x16c */
    unsigned char pad_0x170[0x8];
    uint field_0x178; /* +0x178 */
    unsigned char pad_0x17c[0x14];
    byte field_0x190; /* +0x190 */
    byte field_0x191; /* +0x191 */
    unsigned char pad_0x192[0x2];
    undefined4 field_0x194; /* +0x194 */
    undefined4 field_0x198; /* +0x198 */
    undefined4 field_0x19c; /* +0x19c */
    undefined4 field_0x1a0; /* +0x1a0 */
    undefined4 field_0x1a4; /* +0x1a4 */
    undefined4 field_0x1a8; /* +0x1a8 */
    undefined4 field_0x1ac; /* +0x1ac */
    undefined4 field_0x1b0; /* +0x1b0 */
    undefined4 field_0x1b4; /* +0x1b4 */
    undefined4 field_0x1b8; /* +0x1b8 */
    undefined4 field_0x1bc; /* +0x1bc */
    undefined4 field_0x1c0; /* +0x1c0 */
};

/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern unsigned int *DAT_004652a0; /* 0x4652a0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002a1ac8. */
/* Supplied declaration required: FUN_002a1b98. */
/* Supplied declaration required: FUN_00374260. */


void FUN_003759dc(unsigned int param_1,int param_2,fn_003759dc_arg2 *param_3)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int in_fpscr;
  int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int temp_v1 [10];
  
  temp_v1[5] = 0x200;
  temp_v1[0] = 0;
  temp_v1[1] = 0x2000;
  temp_v1[2] = 0x2100;
  temp_v1[3] = 0x2200;
  temp_v1[4] = 0x100;
  temp_v0 = temp_v1[param_3->field_0x1c & 0xff];
  DAT_004652a0[1] = 0xa0080;
  *DAT_004652a0 = temp_v0 | 0x1000;
  temp_v1[6] = 0;
  temp_v1[7] = 0;
  temp_v1[8] = 0;
  DAT_004652a0 = DAT_004652a0 + 2;
  *(unsigned int *)(param_2 + 0x14) = *(unsigned int *)(param_2 + 0x14) & 0xfffffdff;
  if (param_3->field_0x191 != 0) {
    if (param_3->field_0x190 != 0) {
      FUN_00374260(&uStack_80,param_3->field_0x178 & 0xff);
      uStack_b0 = uStack_80;
      uStack_ac = uStack_7c;
      uStack_a8 = uStack_78;
      uStack_a4 = uStack_74;
      uStack_a0 = uStack_70;
      uStack_9c = uStack_6c;
      uStack_98 = uStack_68;
      uStack_94 = uStack_64;
      uStack_90 = uStack_60;
      uStack_8c = uStack_5c;
      uStack_88 = uStack_58;
      uStack_84 = uStack_54;
      param_3->field_0x194 = uStack_80;
      param_3->field_0x198 = uStack_7c;
      param_3->field_0x19c = uStack_78;
      param_3->field_0x1a0 = uStack_74;
      param_3->field_0x1a4 = uStack_70;
      param_3->field_0x1a8 = uStack_6c;
      param_3->field_0x1ac = uStack_68;
      param_3->field_0x1b0 = uStack_64;
      param_3->field_0x1b4 = uStack_60;
      param_3->field_0x1b8 = uStack_5c;
      param_3->field_0x1bc = uStack_58;
      param_3->field_0x1c0 = uStack_54;
      param_3->field_0x190 = 0;
    }
    else {
      uStack_b0 = param_3->field_0x194;
      uStack_ac = param_3->field_0x198;
      uStack_a8 = param_3->field_0x19c;
      uStack_a4 = param_3->field_0x1a0;
      uStack_a0 = param_3->field_0x1a4;
      uStack_9c = param_3->field_0x1a8;
      uStack_98 = param_3->field_0x1ac;
      uStack_94 = param_3->field_0x1b0;
      uStack_90 = param_3->field_0x1b4;
      uStack_8c = param_3->field_0x1b8;
      uStack_88 = param_3->field_0x1bc;
      uStack_84 = param_3->field_0x1c0;
    }
    temp_v1[6] = VectorSignedToFloat(param_3->field_0x16c,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(param_2 + 0x14) = *(unsigned int *)(param_2 + 0x14) | 0x200;
    puVar1 = DAT_004652a0;
    *DAT_004652a0 = 0x8000000b;
    puVar1[1] = 0xf02c0;
    FUN_002a1ac8(puVar1 + 2,&uStack_b0,0xbf02c1);
    DAT_004652a0 = DAT_004652a0 + 0x10;
  }
  puVar1 = DAT_004652a0;
  *DAT_004652a0 = 0x8000000a;
  puVar1[1] = 0x804f02c0;
  FUN_002a1b98(puVar1 + 2,temp_v1 + 6);
  DAT_004652a0 = DAT_004652a0 + 6;
  return;
}
