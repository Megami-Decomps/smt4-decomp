/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004588b8` (_code @ 0x4588b8, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bc768(unsigned int *, int *, int);
int FUN_00457160(int *, unsigned int);
int VectorSignedToFloat(undefined4, int);
int nw_gfx_internal_NWCopyVec3Reverse(unsigned int *, unsigned int *);

typedef struct fn_004588b8_arg2 fn_004588b8_arg2;
struct fn_004588b8_arg2 {
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

/* stack frame of param_3: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spB0; /* 0xb0: local_b0 */
} param_3_stack;

extern unsigned int *g_commandBufferCursor; /* 0x5b40e0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001bc768. */
/* Supplied declaration required: FUN_00457160. */
/* Supplied declaration required: nw_gfx_internal_NWCopyVec3Reverse. */


void FUN_004588b8(unsigned int param_1,int param_2,fn_004588b8_arg2 *param_3)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int in_fpscr;
  int temp_v1;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int temp_v2;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int temp_v3;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  int temp_v4;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int temp_v5;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int temp_v6;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int temp_v7 [10];
  
  temp_v7[5] = 0x200;
  temp_v7[0] = 0;
  temp_v7[1] = 0x2000;
  temp_v7[2] = 0x2100;
  temp_v7[3] = 0x2200;
  temp_v7[4] = 0x100;
  temp_v0 = temp_v7[param_3->field_0x1c & 0xff];
  g_commandBufferCursor[1] = 0xa0080;
  *g_commandBufferCursor = temp_v0 | 0x1000;
  temp_v7[6] = 0;
  temp_v7[7] = 0;
  temp_v7[8] = 0;
  g_commandBufferCursor = g_commandBufferCursor + 2;
  *(unsigned int *)(param_2 + 0x14) = *(unsigned int *)(param_2 + 0x14) & 0xfffffdff;
  if (param_3->field_0x191 != 0) {
    if (param_3->field_0x190 != 0) {
      FUN_00457160(&temp_v4,param_3->field_0x178 & 0xff);
      temp_v1 = temp_v4;
      uStack_ac = uStack_7c;
      uStack_a8 = uStack_78;
      uStack_a4 = uStack_74;
      temp_v2 = temp_v5;
      uStack_9c = uStack_6c;
      uStack_98 = uStack_68;
      uStack_94 = uStack_64;
      temp_v3 = temp_v6;
      uStack_8c = uStack_5c;
      uStack_88 = uStack_58;
      uStack_84 = uStack_54;
      param_3->field_0x194 = temp_v4;
      param_3->field_0x198 = uStack_7c;
      param_3->field_0x19c = uStack_78;
      param_3->field_0x1a0 = uStack_74;
      param_3->field_0x1a4 = temp_v5;
      param_3->field_0x1a8 = uStack_6c;
      param_3->field_0x1ac = uStack_68;
      param_3->field_0x1b0 = uStack_64;
      param_3->field_0x1b4 = temp_v6;
      param_3->field_0x1b8 = uStack_5c;
      param_3->field_0x1bc = uStack_58;
      param_3->field_0x1c0 = uStack_54;
      param_3->field_0x190 = 0;
    }
    else {
      temp_v1 = param_3->field_0x194;
      uStack_ac = param_3->field_0x198;
      uStack_a8 = param_3->field_0x19c;
      uStack_a4 = param_3->field_0x1a0;
      temp_v2 = param_3->field_0x1a4;
      uStack_9c = param_3->field_0x1a8;
      uStack_98 = param_3->field_0x1ac;
      uStack_94 = param_3->field_0x1b0;
      temp_v3 = param_3->field_0x1b4;
      uStack_8c = param_3->field_0x1b8;
      uStack_88 = param_3->field_0x1bc;
      uStack_84 = param_3->field_0x1c0;
    }
    temp_v7[6] = VectorSignedToFloat(param_3->field_0x16c,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(param_2 + 0x14) = *(unsigned int *)(param_2 + 0x14) | 0x200;
    puVar1 = g_commandBufferCursor;
    *g_commandBufferCursor = 0x8000000b;
    puVar1[1] = 0xf02c0;
    FUN_001bc768(puVar1 + 2,&temp_v1,0xbf02c1);
    g_commandBufferCursor = g_commandBufferCursor + 0x10;
  }
  puVar1 = g_commandBufferCursor;
  *g_commandBufferCursor = 0x8000000a;
  puVar1[1] = 0x804f02c0;
  nw_gfx_internal_NWCopyVec3Reverse(puVar1 + 2,temp_v7 + 6);
  g_commandBufferCursor = g_commandBufferCursor + 6;
  return;
}

} /* extern "C" */
