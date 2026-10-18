/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003269d4` (_code @ 0x3269d4, 0x220 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003269d4_arg1 fn_003269d4_arg1;
struct fn_003269d4_arg1 {
    unsigned char pad_0x0[0x38];
    uint field_0x38; /* +0x38 */
    unsigned char pad_0x3c[0x3c];
    float field_0x78; /* +0x78 */
    float field_0x7c; /* +0x7c */
    unsigned char pad_0x80[0xc];
    int field_0x8c; /* +0x8c */
    float field_0x90; /* +0x90 */
};

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_002bcd68. */
/* Supplied declaration required: FUN_002c5df8. */


void FUN_003269d4(int param_1,fn_003269d4_arg1 *param_2)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  unsigned char *puVar3;
  unsigned char *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  
  temp_v1 = param_2->field_0x38;
  if (temp_v1 != 0) {
    piVar1 = *(int **)(param_1 + 4);
    puVar3 = *(unsigned char **)(*piVar1 + 0x38);
    puVar5 = *(unsigned int **)(*piVar1 + 0x3c);
    piVar1[0x16] = piVar1[0x16] | 0x24;
    temp_v3 = param_2->field_0x8c;
    temp_v2 = temp_v3 + 1;
    temp_v0 = 0;
    temp_v7 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = (int)(param_2->field_0x78 * temp_v7);
    temp_v4 = (int)(param_2->field_0x7c * temp_v8);
    temp_v7 = param_2->field_0x90 * 0.33333334f;
    puVar4 = puVar3;
    puVar6 = puVar5;
    if (temp_v2 != 0) {
      do {
        if ((int)temp_v0 < temp_v5) {
          temp_v9 = (float)VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v8 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v8 = temp_v9 / temp_v8;
        }
        else {
          temp_v8 = 1.0f;
          if (temp_v4 < (int)temp_v0) {
            temp_v9 = (float)VectorSignedToFloat(temp_v3 - temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v8 = (float)VectorUnsignedToFloat(temp_v3 - temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v8 = temp_v8 / temp_v9;
          }
        }
        *puVar4 = 0xff;
        puVar4[1] = 0xff;
        puVar4[2] = 0xff;
        temp_v0 = temp_v0 + 1;
        puVar4[3] = 0;
        temp_v6 = VectorFloatToUnsigned(temp_v8 * 255.0f,3);
        puVar4[4] = 0xff;
        puVar4[5] = 0xff;
        puVar4[6] = 0xff;
        puVar4[7] = (char)temp_v6;
        *(unsigned int *)(puVar4 + 8) = *(unsigned int *)(puVar4 + 4);
        puVar4[0xc] = 0xff;
        puVar4[0xd] = 0xff;
        puVar4[0xe] = 0xff;
        puVar4[0xf] = 0;
        *puVar6 = 0;
        *(float *)&puVar6[2] = temp_v7;
        puVar6[4] = temp_v7 * 2.0f;
        puVar6[6] = temp_v7 * 3.0f;
        puVar4 = puVar4 + 0x10;
        puVar6 = puVar6 + 8;
      } while (temp_v0 < temp_v2);
    }
    temp_v0 = 1;
    if (temp_v0 < temp_v1) {
      do {
        FUN_002c5df8(puVar4,puVar3,temp_v2 * 0x10);
        puVar4 = puVar4 + temp_v2 * 0x10;
        FUN_002bcd68(puVar6,puVar5,temp_v2 * 0x20);
        temp_v0 = temp_v0 + 1;
        puVar6 = puVar6 + temp_v2 * 8;
      } while (temp_v0 < temp_v1);
    }
  }
  return;
}
