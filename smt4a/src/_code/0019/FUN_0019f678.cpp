/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019f678` (_code @ 0x19f678, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {

unsigned int* gfxAppendTextureUnitPacket(void*, unsigned int*, const AsdTexture*);
int FUN_001adf78(...);

typedef struct fn_0019f678_arg0 fn_0019f678_arg0;
struct fn_0019f678_arg0 {
    unsigned char pad_0x0[0x10];
    unsigned int* commandCursor; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
    undefined4 field_0x60; /* +0x60 */
    undefined4 field_0x64; /* +0x64 */
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    undefined4 field_0x70; /* +0x70 */
    undefined4 field_0x74; /* +0x74 */
    unsigned char pad_0x78[0xc];
    undefined4 field_0x84; /* +0x84 */
    unsigned char pad_0x88[0xa5];
    char field_0x12d; /* +0x12d */
};

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
} param_6_stack;

/* Supplied declaration required: gfxAppendTextureUnitPacket. */
/* Supplied declaration required: FUN_001adf78. */


void FUN_0019f678(fn_0019f678_arg0 *param_1,int param_2,unsigned int *param_3,unsigned int *param_4,
                 unsigned int *param_5,unsigned int *param_6)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s4, in_s5, in_s6, in_s7, in_s8; 2 native warning(s); review required */
  unsigned int* cursor;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  unsigned int in_s4;
  unsigned int in_s5;
  unsigned int in_s6;
  unsigned int in_s7;
  unsigned int in_s8;
  unsigned int temp_v4;
  
  cursor = gfxAppendTextureUnitPacket(param_1, param_1->commandCursor,
                       reinterpret_cast<const AsdTexture*>(param_2));
  temp_v4 = 0;
  FUN_001adf78(param_1,cursor,param_3,param_4,param_5,param_6);
  param_1->field_0x30 = in_s7;
  param_1->field_0x14 = in_s0;
  param_1->field_0x18 = in_s1;
  param_1->field_0x1c = in_s2;
  param_1->field_0x20 = in_s3;
  param_1->field_0x24 = in_s4;
  param_1->field_0x28 = in_s5;
  param_1->field_0x2c = in_s6;
  temp_v0 = param_3[1];
  temp_v1 = param_3[2];
  temp_v2 = param_3[3];
  param_1->field_0x34 = *param_3;
  param_1->field_0x38 = temp_v0;
  param_1->field_0x3c = temp_v1;
  param_1->field_0x40 = temp_v2;
  temp_v0 = param_4[1];
  temp_v1 = param_4[2];
  temp_v2 = param_4[3];
  param_1->field_0x44 = *param_4;
  param_1->field_0x48 = temp_v0;
  param_1->field_0x4c = temp_v1;
  param_1->field_0x50 = temp_v2;
  temp_v0 = param_5[1];
  temp_v1 = param_5[2];
  temp_v2 = param_5[3];
  param_1->field_0x54 = *param_5;
  param_1->field_0x58 = temp_v0;
  param_1->field_0x5c = temp_v1;
  param_1->field_0x60 = temp_v2;
  temp_v0 = *param_6;
  temp_v1 = param_6[1];
  temp_v2 = param_6[2];
  temp_v3 = param_6[3];
  param_1->field_0x64 = temp_v0;
  param_1->field_0x68 = temp_v1;
  param_1->field_0x6c = temp_v2;
  param_1->field_0x70 = temp_v3;
  if (param_2 == 0) {
    temp_v0 = 1;
  }
  param_1->field_0x74 = in_s8;
  param_1->field_0x84 = temp_v4;
  if (param_2 == 0) {
    param_1->field_0x12d = (char)temp_v0;
  }
  return;
}

} /* extern "C" */
