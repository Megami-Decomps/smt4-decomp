/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c5de0` (_code @ 0x3c5de0, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_5_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_00185dd4. */
/* Supplied declaration required: FUN_0019d880. */
/* Supplied declaration required: aeabi_idivmod. */


void FUN_003c5de0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 1 unstructured edge(s); irregular input(s): in_fpscr, in_s0, in_s1; 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  unsigned int in_s0;
  unsigned int temp_v11;
  unsigned int in_s1;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  unsigned long long temp_v16;
  
  temp_v1 = 0;
  temp_v15 = romwright_piece_4_4(in_s0,in_s1);
  temp_v16 = (unsigned long long)param_5;
  while (*(short *)(temp_v1 * 0x30 + 0x52c90c) != param_1) {
    if (*(short *)(temp_v1 * 0x30 + 0x52c93c) == param_1) {
      temp_v1 = temp_v1 + 1;
      break;
    }
    temp_v1 = temp_v1 + 2;
    if (temp_v1 >= 10) {
      return;
    }
  }
  if (temp_v1 < 0) {
    return;
  }
  temp_v1 = temp_v1 * 0x30;
  temp_v2 = *(unsigned int *)(temp_v1 + 0x52c910);
  temp_v3 = aeabi_idivmod(*(unsigned int *)(temp_v1 + 0x52c918),temp_v2);
  aeabi_idivmod(param_2,temp_v3);
  temp_v3 = (unsigned int)temp_v16;
  temp_v8 = *(int *)(temp_v1 + 0x52c914);
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v9 = 0;
  if (temp_v6 < temp_v8) {
    do {
      temp_v4 = aeabi_idivmod(*(unsigned int *)(temp_v1 + 0x52c90c + temp_v6 * 8 + 0x14),temp_v2);
      temp_v3 = (unsigned int)temp_v16;
      temp_v10 = SBORROW4(temp_v7,temp_v5);
      temp_v0 = temp_v7 - temp_v5;
      temp_v4 = temp_v4 + temp_v7;
      if (temp_v7 <= temp_v5) {
        temp_v10 = SBORROW4(temp_v5,temp_v4);
        temp_v0 = temp_v5 - temp_v4;
      }
      temp_v9 = temp_v6;
      if (temp_v0 < 0 != temp_v10) break;
      temp_v6 = temp_v6 + 1;
      temp_v7 = temp_v4;
      temp_v9 = 0;
    } while (temp_v6 < temp_v8);
  }
  temp_v2 = *(unsigned int *)(temp_v1 + 0x52c90c + temp_v9 * 8 + 0x10);
  FUN_0019d880();
  if ((int)temp_v15 < 0x3f800000) {
    FUN_001677c0();
  }
  temp_v14 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v12 = (float)((unsigned long long)temp_v15 >> 0x20) * 12.0f;
  temp_v11 = VectorFloatToUnsigned(temp_v12,3);
  temp_v13 = (temp_v12 - 12.0f) * 0.5f;
  temp_v12 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00185dd4(2,0xb,temp_v2,(int)(temp_v12 - temp_v13),(int)(temp_v14 - temp_v13),temp_v11,temp_v11,temp_v3);
  FUN_001677c0();
  return;
}
