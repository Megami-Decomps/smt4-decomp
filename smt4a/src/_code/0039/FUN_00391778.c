/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00391778` (_code @ 0x391778, 0x234 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

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
/* Supplied declaration required: FUN_002b3c9c. */
/* Supplied declaration required: FUN_00338330. */
/* Supplied declaration required: FUN_0038136c. */


void FUN_00391778(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  
  temp_v2 = *(unsigned int *)(param_1 + 0x40);
  puVar3 = (unsigned short *)**(unsigned int **)(param_1 + 0x3c);
  if ((*(unsigned int *)(param_1 + 0x34) <= *(unsigned int *)(temp_v2 + 0x34)) || (*(unsigned int *)(temp_v2 + 0x34) == 0)) {
    temp_v3 = temp_v2;
    FUN_0038136c(temp_v2,temp_v2 + 0x24);
    temp_v1 = *(unsigned int *)(param_1 + 0x30);
    DAT_006472ec = (float)VectorUnsignedToFloat(temp_v1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472f0 = (float)VectorUnsignedToFloat
                                    ((temp_v1 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472f4 = (float)VectorUnsignedToFloat((temp_v1 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472f8 = (float)VectorUnsignedToFloat(temp_v1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472ec = DAT_006472ec * 0.003921569f;
    DAT_006472f0 = DAT_006472f0 * 0.003921569f;
    DAT_006472f4 = DAT_006472f4 * 0.003921569f;
    DAT_006472f8 = DAT_006472f8 * 0.003921569f;
    temp_v7 = (float)VectorUnsignedToFloat(temp_v3 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorUnsignedToFloat((temp_v3 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = (float)VectorUnsignedToFloat(temp_v3 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = (float)VectorUnsignedToFloat((temp_v3 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472dc = temp_v9 * 0.003921569f * DAT_006472ec;
    DAT_006472e0 = temp_v8 * 0.003921569f * DAT_006472f0;
    DAT_006472e4 = temp_v6 * 0.003921569f * DAT_006472f4;
    DAT_006472e8 = temp_v7 * 0.003921569f * DAT_006472f8;
    temp_v4 = VectorFloatToUnsigned(DAT_006472dc * 255.0f,3);
    temp_v3 = VectorFloatToUnsigned(DAT_006472e0 * 255.0f,3);
    temp_v5 = VectorFloatToUnsigned(DAT_006472e4 * 255.0f,3);
    temp_v1 = VectorFloatToUnsigned(DAT_006472e8 * 255.0f,3);
    *(unsigned int *)(puVar3 + 0x28) =
         (temp_v1 & 0xff) | ((temp_v5 & 0xff) << 8) | ((temp_v3 & 0xff) << 0x10) | (temp_v4 << 0x18);
    if (*(char *)((int)puVar3 + 0x53) != '\0') {
      FUN_00338330(puVar3,param_1,param_1 + 0x10,param_1 + 0x20);
      if (*(char *)(temp_v2 + 0x3c) == '\0') {
        temp_v0 = *puVar3 & 0xfeff;
      }
      else {
        temp_v0 = *puVar3 | 0x100;
      }
      *puVar3 = temp_v0;
      FUN_002b3c9c(puVar3,*(unsigned int *)(temp_v2 + 0x28) & 0xffff);
      return;
    }
  }
  return;
}
