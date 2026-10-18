/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00383208` (_code @ 0x383208, 0x290 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
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


void FUN_00383208(unsigned int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned short *puVar6;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int in_fpscr;
  unsigned int temp_v7;
  float temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  
  temp_v4 = param_1[0xf];
  temp_v5 = param_1[0x10];
  puVar6 = *(unsigned short **)(temp_v4 + 8);
  if (((unsigned int)param_1[0xd] <= *(unsigned int *)(temp_v5 + 0x34)) || (*(unsigned int *)(temp_v5 + 0x34) == 0)) {
    temp_v7 = temp_v5;
    FUN_0038136c(temp_v5,temp_v5 + 0x24);
    temp_v1 = param_1[0xc];
    DAT_006472ec = (float)VectorUnsignedToFloat(temp_v1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472f0 = (float)VectorUnsignedToFloat
                                    ((temp_v1 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472f4 = (float)VectorUnsignedToFloat((temp_v1 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472f8 = (float)VectorUnsignedToFloat(temp_v1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472ec = DAT_006472ec * 0.003921569f;
    DAT_006472f0 = DAT_006472f0 * 0.003921569f;
    DAT_006472f4 = DAT_006472f4 * 0.003921569f;
    DAT_006472f8 = DAT_006472f8 * 0.003921569f;
    temp_v13 = (float)VectorUnsignedToFloat(temp_v7 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v12 = (float)VectorUnsignedToFloat(temp_v7 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorUnsignedToFloat((temp_v7 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = (float)VectorUnsignedToFloat((temp_v7 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472dc = temp_v13 * 0.003921569f * DAT_006472ec;
    DAT_006472e0 = temp_v11 * 0.003921569f * DAT_006472f0;
    DAT_006472e4 = temp_v8 * 0.003921569f * DAT_006472f4;
    DAT_006472e8 = temp_v12 * 0.003921569f * DAT_006472f8;
    temp_v9 = VectorFloatToUnsigned(DAT_006472dc * 255.0f,3);
    temp_v7 = VectorFloatToUnsigned(DAT_006472e0 * 255.0f,3);
    temp_v10 = VectorFloatToUnsigned(DAT_006472e4 * 255.0f,3);
    temp_v1 = VectorFloatToUnsigned(DAT_006472e8 * 255.0f,3);
    *(unsigned int *)(puVar6 + 0x28) =
         (temp_v1 & 0xff) | ((temp_v10 & 0xff) << 8) | ((temp_v7 & 0xff) << 0x10) | (temp_v9 << 0x18);
    if (*(char *)((int)puVar6 + 0x53) != '\0') {
      *(unsigned int *)(*(int *)(temp_v4 + 4) + 0x30) = param_1[0xc];
      temp_v9 = *(int *)(temp_v4 + 4);
      temp_v2 = param_1[9];
      temp_v3 = param_1[10];
      temp_v6 = param_1[0xb];
      *(unsigned int *)(temp_v9 + 0x20) = param_1[8];
      *(unsigned int *)(temp_v9 + 0x24) = temp_v2;
      *(unsigned int *)(temp_v9 + 0x28) = temp_v3;
      *(unsigned int *)(temp_v9 + 0x2c) = temp_v6;
      temp_v2 = param_1[1];
      temp_v3 = param_1[2];
      temp_v6 = param_1[3];
      puVar2 = *(unsigned int **)(temp_v4 + 4);
      *puVar2 = *param_1;
      puVar2[1] = temp_v2;
      puVar2[2] = temp_v3;
      puVar2[3] = temp_v6;
      temp_v9 = *(int *)(temp_v4 + 4);
      temp_v2 = param_1[5];
      temp_v3 = param_1[6];
      temp_v6 = param_1[7];
      *(unsigned int *)(temp_v9 + 0x10) = param_1[4];
      *(unsigned int *)(temp_v9 + 0x14) = temp_v2;
      *(unsigned int *)(temp_v9 + 0x18) = temp_v3;
      *(unsigned int *)(temp_v9 + 0x1c) = temp_v6;
      if (0 < *(int *)(*(int *)(temp_v4 + 4) + 0x34)) {
        (**(romwright_code **)(*(int *)(*(int *)(temp_v4 + 4) + 0x38) * 0x18 + 0x5c12b4))();
      }
      FUN_00338330(puVar6,param_1,param_1 + 4,param_1 + 8);
      if (*(char *)(temp_v5 + 0x3c) != '\0') {
        temp_v0 = *puVar6 | 0x100;
      }
      else {
        temp_v0 = *puVar6 & 0xfeff;
      }
      *puVar6 = temp_v0;
      FUN_002b3c9c(puVar6,*(unsigned int *)(temp_v5 + 0x28) & 0xffff);
      return;
    }
  }
  return;
}
