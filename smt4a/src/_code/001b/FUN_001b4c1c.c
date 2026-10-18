/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4c1c` (_code @ 0x1b4c1c, 0x1b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


void FUN_001b4c1c(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  romwright_code *pcVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  float temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  
  *(unsigned int *)(param_1 + 100) = param_2;
  temp_v11 = (float)VectorUnsignedToFloat(param_2 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v13 = 0.003921569f;
  temp_v8 = (float)VectorUnsignedToFloat((param_2 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = (float)VectorUnsignedToFloat(param_2 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorUnsignedToFloat((param_2 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v11 = temp_v11 * 0.003921569f;
  temp_v8 = temp_v8 * 0.003921569f;
  temp_v2 = temp_v2 * 0.003921569f;
  temp_v6 = temp_v6 * 0.003921569f;
  temp_v1 = *(int *)(param_1 + 0x8c);
  DAT_006472dc = temp_v11;
  DAT_006472e0 = temp_v6;
  DAT_006472e4 = temp_v8;
  DAT_006472e8 = temp_v2;
  if (temp_v1 != 0) {
    temp_v14 = 255.0f;
    do {
      temp_v0 = *(unsigned int *)(temp_v1 + 100);
      temp_v9 = (float)VectorUnsignedToFloat((temp_v0 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3)
      ;
      temp_v12 = (float)VectorUnsignedToFloat((temp_v0 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v7 = (float)VectorUnsignedToFloat(temp_v0 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = (float)VectorUnsignedToFloat(temp_v0 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
      DAT_006472dc = temp_v7 * temp_v13 * temp_v11;
      DAT_006472e0 = temp_v9 * temp_v13 * temp_v6;
      DAT_006472e4 = temp_v12 * temp_v13 * temp_v8;
      DAT_006472e8 = temp_v10 * temp_v13 * temp_v2;
      temp_v3 = VectorFloatToUnsigned(DAT_006472dc * temp_v14,3);
      temp_v5 = VectorFloatToUnsigned(DAT_006472e0 * temp_v14,3);
      temp_v0 = VectorFloatToUnsigned(DAT_006472e4 * temp_v14,3);
      temp_v4 = VectorFloatToUnsigned(DAT_006472e8 * temp_v14,3);
      pcVar1 = *(romwright_code **)((unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x90) + 4) * 0x44 + 0x5b32a4);
      DAT_006472ec = temp_v11;
      DAT_006472f0 = temp_v6;
      DAT_006472f4 = temp_v8;
      DAT_006472f8 = temp_v2;
      if (pcVar1 != (romwright_code *)0x0) {
        (*pcVar1)(*(unsigned int *)(*(int *)(temp_v1 + 0x90) + 8),
                  (temp_v4 & 0xff) |
                  (temp_v3 << 0x18) | ((temp_v5 & 0xff) << 0x10) | ((temp_v0 & 0xff) << 8));
      }
      temp_v1 = *(int *)(temp_v1 + 0xac);
    } while (temp_v1 != 0);
  }
  return;
}
