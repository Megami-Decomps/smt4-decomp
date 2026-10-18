/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004327f8` (_code @ 0x4327f8, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004327f8_arg2 fn_004327f8_arg2;
struct fn_004327f8_arg2 {
    undefined1 field_0x0; /* +0x0 */
    unsigned char pad_0x1[0xb];
    int field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    int field_0x18; /* +0x18 */
};

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00126d1c. */
/* Supplied declaration required: FUN_001274fc. */
/* Supplied declaration required: FUN_002e76b6. */
/* Supplied declaration required: FUN_002fa010. */
extern unsigned int FUN_003111fa(fn_004327f8_arg2 *);
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_004327f8(int param_1,int param_2,fn_004327f8_arg2 *param_3)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  
  FUN_001274fc(*(int *)(param_1 + 0x120) + 0x38);
  temp_v0 = FUN_003111fa(param_3);
  if (temp_v0 < *(int *)(param_2 + 0x10) + 1U) {
    FUN_002fa010(param_3,*(int *)(param_2 + 0x10) + 1);
  }
  temp_v1 = FUN_003111fa(param_3);
  *(unsigned int *)(*(int *)(param_1 + 0x120) + 0x48) = temp_v1;
  temp_v1 = FUN_002e76b6(param_3);
  *(unsigned int *)(*(int *)(param_1 + 0x120) + 0x44) = temp_v1;
  *(unsigned int *)(*(int *)(param_1 + 0x120) + 0x3c) = *(unsigned int *)(param_2 + 0x10);
  temp_v1 = FUN_002e76b6(param_2);
  *(unsigned int *)(*(int *)(param_1 + 0x120) + 0x38) = temp_v1;
  *(int *)(*(int *)(param_1 + 0x120) + 0x44) = *(int *)(*(int *)(param_1 + 0x120) + 0x44) + 1;
  *(int *)(*(int *)(param_1 + 0x120) + 0x48) = *(int *)(*(int *)(param_1 + 0x120) + 0x48) - 1;
  temp_v2 = *(int *)(param_1 + 0x120) + 0x38;
  FUN_00126d1c(temp_v2,4);
  if ((temp_v2 == 1) && (*(unsigned int *)(*(int *)(param_1 + 0x120) + 0x4c) < *(unsigned int *)(param_2 + 0x10))) {
    temp_v2 = *(int *)(*(int *)(param_1 + 0x120) + 0x4c);
    temp_v6 = (float)VectorUnsignedToFloat
                             (*(unsigned int *)(param_2 + 0x10),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = temp_v6 / temp_v5 + 1.0f;
    if ((int)temp_v5 < 0x437f0001) {
      temp_v1 = VectorFloatToUnsigned(temp_v5,3);
      temp_v4 = (unsigned char)temp_v1;
    }
    else {
      temp_v4 = 0xff;
    }
    param_3->field_0x10 = temp_v2 + 1;
    puVar4 = (unsigned char *)FUN_002e76b6(param_3);
    *puVar4 = temp_v4;
  }
  else {
    puVar4 = (unsigned char *)(param_3->field_0xc + param_3->field_0x18);
    param_3->field_0x10 = *(int *)(param_2 + 0x10) + 1;
    *puVar4 = 0;
    temp_v1 = *(unsigned int *)(param_2 + 0x10);
    temp_v3 = FUN_002e76b6(param_2);
    rt_memcpy(puVar4 + 1,temp_v3,temp_v1);
  }
  return 0;
}
