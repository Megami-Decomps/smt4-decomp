/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138954` (_code @ 0x138954, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00138954_arg0 fn_00138954_arg0;
struct fn_00138954_arg0 {
    unsigned char pad_0x0[0x24];
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x4];
    undefined1 field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x3];
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    float field_0x48; /* +0x48 */
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
    unsigned char pad_0x74[0x4];
    undefined4 field_0x78; /* +0x78 */
};

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002a880c. */
extern int FUN_002c08f0(void);


void FUN_00138954(fn_00138954_arg0 *param_1,int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1; 4 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int temp_v1;
  unsigned long long temp_v2;
  
  temp_v2 = romwright_piece_4_4(in_s1,in_s0);
  temp_v0 = FUN_002c08f0();
  if (param_2 != 0) {
    *(unsigned int *)(temp_v0 + 0x6c) = 0;
    *(unsigned int *)(temp_v0 + 0x70) = 0;
    temp_v1 = VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v0 + 0x68) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x24) = 0;
    *(unsigned int *)(temp_v0 + 0x28) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 0x78) = 3;
    *(unsigned char *)(temp_v0 + 0x30) = 0;
    *(unsigned int *)(temp_v0 + 0x5c) = *(unsigned int *)(temp_v0 + 0x58);
    *(unsigned int *)(temp_v0 + 0x60) = *(unsigned int *)(temp_v0 + 0x58);
    *(int *)(temp_v0 + 100) = param_2;
  }
  else {
    FUN_002a880c(temp_v0,1,0);
    *(unsigned int *)(temp_v0 + 0x78) = 2;
  }
  *(unsigned int *)(temp_v0 + 0x40) = *(unsigned int *)(temp_v0 + 0x34);
  *(unsigned int *)(temp_v0 + 0x48) = *(unsigned int *)(temp_v0 + 0x3c);
  *(unsigned int *)(temp_v0 + 0x4c) = *(unsigned int *)(temp_v0 + 0x34);
  *(unsigned int *)(temp_v0 + 0x50) = *(unsigned int *)(temp_v0 + 0x38);
  *(unsigned int *)(temp_v0 + 0x54) = *(unsigned int *)(temp_v0 + 0x3c);
  *(unsigned int *)(temp_v0 + 0x44) = *(unsigned int *)(temp_v0 + 0x38);
  *(float *)(temp_v0 + 0x48) =
       *(float *)(temp_v0 + 0x48) + ((float)((unsigned long long)temp_v2 >> 0x20) - (float)temp_v2);
  return;
}
