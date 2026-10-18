/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00193b64` (_code @ 0x193b64, 0x2c4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00193b64_arg1 fn_00193b64_arg1;
struct fn_00193b64_arg1 {
    unsigned char pad_0x0[0x34];
    byte field_0x34; /* +0x34 */
    byte field_0x35; /* +0x35 */
    byte field_0x36; /* +0x36 */
    byte field_0x37; /* +0x37 */
    undefined4 field_0x38; /* +0x38 */
    short field_0x3c; /* +0x3c */
    unsigned char pad_0x3e[0x2];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    short field_0x48; /* +0x48 */
    short field_0x4a; /* +0x4a */
    short field_0x4c; /* +0x4c */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001ad1d8. */
/* Supplied declaration required: FUN_001ca504. */
/* Supplied declaration required: FUN_001dd86c. */
/* Supplied declaration required: FUN_001dd938. */
/* Supplied declaration required: FUN_001ee114. */
/* Supplied declaration required: FUN_001ee1d0. */
/* Supplied declaration required: FUN_001ee2f0. */
/* Supplied declaration required: FUN_00202f58. */
/* Supplied declaration required: FUN_00203078. */
/* Supplied declaration required: FUN_00203198. */
/* Supplied declaration required: FUN_002918c4. */
/* Supplied declaration required: FUN_002a84bc. */


void FUN_00193b64(int param_1,fn_00193b64_arg1 *param_2)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  short temp_v0;
  unsigned int in_fpscr;
  float temp_v1;
  unsigned int temp_v2;
  
  FUN_002a84bc(param_1 + 0x2e1);
  *(unsigned int *)(param_1 + 0x2ec) = 0;
  *(unsigned int *)(param_1 + 0x2f0) = 0;
  *(unsigned int *)(param_1 + 0x2f4) = 0;
  *(unsigned int *)(param_1 + 0x2f8) = 0;
  *(unsigned int *)(param_1 + 0x2fc) = 0;
  *(unsigned int *)(param_1 + 0x300) = 0;
  *(unsigned int *)(param_1 + 0x304) = 0;
  *(unsigned int *)(param_1 + 0x308) = 0;
  *(unsigned int *)(param_1 + 0x30c) = 0;
  *(unsigned int *)(param_1 + 0x310) = 0;
  *(unsigned int *)(param_1 + 0x314) = 0;
  *(unsigned int *)(param_1 + 0x318) = 0;
  *(unsigned int *)(param_1 + 0x31c) = 0;
  *(unsigned int *)(param_1 + 800) = 0;
  *(unsigned int *)(param_1 + 0x324) = 0;
  *(unsigned int *)(param_1 + 0x328) = 0;
  *(unsigned int *)(param_1 + 0x32c) = 0;
  *(unsigned int *)(param_1 + 0x330) = 0;
  *(unsigned int *)(param_1 + 0x334) = 0;
  *(unsigned int *)(param_1 + 0x338) = 0;
  temp_v1 = 0.0f;
  temp_v2 = VectorUnsignedToFloat((unsigned int)param_2->field_0x34,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x1e4) = temp_v2;
  temp_v2 = VectorUnsignedToFloat((unsigned int)param_2->field_0x35,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x1e8) = temp_v2;
  temp_v2 = VectorUnsignedToFloat((unsigned int)param_2->field_0x36,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x1ec) = temp_v2;
  temp_v2 = VectorUnsignedToFloat((unsigned int)param_2->field_0x37,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x1f0) = temp_v2;
  *(unsigned int *)(param_1 + 500) = param_2->field_0x38;
  *(unsigned int *)(param_1 + 0x1f8) = param_2->field_0x40;
  *(unsigned int *)(param_1 + 0x1fc) = param_2->field_0x44;
  temp_v2 = VectorSignedToFloat((int)param_2->field_0x3c,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x200) = temp_v2;
  temp_v2 = VectorSignedToFloat((int)param_2->field_0x48,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x204) = temp_v2;
  temp_v2 = VectorSignedToFloat((int)param_2->field_0x4a,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x208) = temp_v2;
  temp_v2 = VectorSignedToFloat((int)param_2->field_0x4c,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x20c) = temp_v2;
  *(unsigned int *)(param_1 + 0x210) = 0;
  *(unsigned int *)(param_1 + 0x214) = 0;
  *(unsigned int *)(param_1 + 0x218) = 0;
  *(unsigned int *)(param_1 + 0x21c) = 0;
  *(unsigned int *)(param_1 + 0x220) = 0;
  *(unsigned int *)(param_1 + 0x224) = 0;
  *(unsigned int *)(param_1 + 0x228) = 0;
  *(unsigned int *)(param_1 + 0x22c) = 0;
  *(unsigned int *)(param_1 + 0x230) = 0;
  *(unsigned int *)(param_1 + 0x234) = 0;
  *(unsigned int *)(param_1 + 0x238) = 0;
  FUN_001ca504(param_1,param_2);
  if (*(int *)(param_1 + 0x50) != 0) {
    if (*(short *)(param_1 + 0x3c) != 0) {
      FUN_002918c4(2,*(int *)(param_1 + 0x50),1);
      temp_v0 = *(short *)(param_1 + 0x3c) - (short)(int)temp_v1;
      *(short *)(param_1 + 0x3c) = temp_v0;
      temp_v1 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(param_1 + 0x200) = temp_v1;
    }
    if (*(short *)(param_1 + 0x48) != 0) {
      FUN_002918c4(2,*(unsigned int *)(param_1 + 0x50),1);
      temp_v0 = *(short *)(param_1 + 0x48) - (short)(int)temp_v1;
      *(short *)(param_1 + 0x48) = temp_v0;
      *(int *)(param_1 + 4) = (int)temp_v0;
      temp_v1 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(param_1 + 0x204) = temp_v1;
    }
    if (*(short *)(param_1 + 0x4a) != 0) {
      FUN_002918c4(2,*(unsigned int *)(param_1 + 0x50),1);
      temp_v0 = *(short *)(param_1 + 0x4a) - (short)(int)temp_v1;
      *(short *)(param_1 + 0x4a) = temp_v0;
      *(int *)(param_1 + 8) = (int)temp_v0;
      temp_v1 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(param_1 + 0x208) = temp_v1;
    }
    if (*(short *)(param_1 + 0x4c) != 0) {
      FUN_002918c4(2,*(unsigned int *)(param_1 + 0x50),1);
      temp_v0 = *(short *)(param_1 + 0x4c) - (short)(int)temp_v1;
      *(short *)(param_1 + 0x4c) = temp_v0;
      *(int *)(param_1 + 0xc) = (int)temp_v0;
      temp_v2 = VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(param_1 + 0x20c) = temp_v2;
    }
  }
  FUN_001ad1d8(param_1,param_2);
  FUN_001dd86c(param_1,param_2);
  FUN_001dd938(param_1,param_2);
  FUN_001ee114(param_1,param_2);
  FUN_001ee2f0(param_1,param_2);
  FUN_001ee1d0(param_1,param_2);
  FUN_00202f58(param_1,param_2);
  FUN_00203078(param_1,param_2);
  FUN_00203198(param_1,param_2);
  return;
}
