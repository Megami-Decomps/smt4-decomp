/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e785c` (_code @ 0x3e785c, 0x27c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


void FUN_003e785c(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  unsigned int temp_v0;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  int temp_v5;
  float temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  float temp_v10;
  float temp_v11;
  
  param_1 = param_1 + param_2 * 4;
  puVar1 = (unsigned int *)(param_1 + 0x4d30);
  piVar2 = (int *)(param_1 + 0x4d38);
  puVar4 = (unsigned int *)(param_1 + 0x4d18);
  puVar5 = (unsigned int *)(param_1 + 0x4d28);
  switch(*puVar1) {
  case 0:
    *puVar1 = 1;
  case 1:
    temp_v3 = *(int *)(param_1 + 0x4d40);
    temp_v1 = *puVar5;
    temp_v4 = *(unsigned int *)(param_1 + 0x4d20);
    temp_v11 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = (float)VectorSignedToFloat(*piVar2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = *piVar2 + 1;
    temp_v6 = (float)VectorUnsignedToFloat
                              ((temp_v4 & 0xff000000) - (temp_v1 & 0xff000000),
                               (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = 1.0f - temp_v10 / temp_v11;
    temp_v7 = VectorFloatToUnsigned(temp_v6 * temp_v10,3);
    temp_v6 = (float)VectorUnsignedToFloat
                              ((temp_v4 & 0xff0000) - (temp_v1 & 0xff0000),(unsigned char)(in_fpscr >> 0x16) & 3)
    ;
    temp_v8 = VectorFloatToUnsigned(temp_v6 * temp_v10,3);
    temp_v6 = (float)VectorUnsignedToFloat
                              ((temp_v4 & 0xff00) - (temp_v1 & 0xff00),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = VectorFloatToUnsigned(temp_v6 * temp_v10,3);
    temp_v6 = (float)VectorUnsignedToFloat
                              ((temp_v4 & 0xff) - (temp_v1 & 0xff),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = VectorFloatToUnsigned(temp_v6 * temp_v10,3);
    *puVar4 = ((temp_v5 + (temp_v1 & 0xff)) & 0xff) |
              ((temp_v9 + (temp_v1 & 0xff00)) & 0xff00) |
              (((temp_v1 & 0xff0000) + temp_v8) & 0xff0000) |
              (((temp_v1 & 0xff000000) + temp_v7) & 0xff000000);
    *piVar2 = temp_v2;
    if (temp_v2 < temp_v3) {
      return;
    }
    temp_v0 = 2;
    break;
  case 2:
    temp_v1 = *puVar5;
    temp_v0 = 3;
    *puVar4 = temp_v1;
    break;
  default:
    return;
  case 4:
    *puVar1 = 5;
  case 5:
    temp_v3 = *(int *)(param_1 + 0x4d40);
    temp_v4 = *puVar5;
    temp_v1 = *(unsigned int *)(param_1 + 0x4d20);
    temp_v10 = (float)VectorSignedToFloat(*piVar2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = *piVar2 + 1;
    temp_v11 = (float)VectorUnsignedToFloat
                              ((temp_v4 & 0xff000000) - (temp_v1 & 0xff000000),
                               (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = temp_v10 / temp_v6;
    temp_v7 = VectorFloatToUnsigned(temp_v11 * temp_v10,3);
    temp_v6 = (float)VectorUnsignedToFloat
                              ((temp_v4 & 0xff0000) - (temp_v1 & 0xff0000),(unsigned char)(in_fpscr >> 0x16) & 3)
    ;
    temp_v8 = VectorFloatToUnsigned(temp_v6 * temp_v10,3);
    temp_v6 = (float)VectorUnsignedToFloat
                              ((temp_v4 & 0xff00) - (temp_v1 & 0xff00),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = VectorFloatToUnsigned(temp_v6 * temp_v10,3);
    temp_v6 = (float)VectorUnsignedToFloat
                              ((temp_v4 & 0xff) - (temp_v1 & 0xff),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = VectorFloatToUnsigned(temp_v6 * temp_v10,3);
    *puVar4 = ((temp_v5 + (temp_v1 & 0xff)) & 0xff) |
              ((temp_v9 + (temp_v1 & 0xff00)) & 0xff00) |
              (((temp_v1 & 0xff0000) + temp_v8) & 0xff0000) |
              (((temp_v1 & 0xff000000) + temp_v7) & 0xff000000);
    *piVar2 = temp_v2;
    if (temp_v2 < temp_v3) {
      return;
    }
    temp_v0 = 6;
    break;
  case 6:
    temp_v1 = *puVar5;
    temp_v0 = 7;
    *puVar4 = temp_v1;
  }
  *puVar1 = temp_v0;
  return;
}

} /* extern "C" */
