/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00177cdc` (_code @ 0x177cdc, 0x170 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern unsigned char LAB_00200080; /* 0x200080 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00192de4. */


unsigned int * FUN_00177cdc(char *param_1,unsigned int *param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  float temp_v3;
  
  if (*param_1 != '\0') {
    *param_2 = 0xe40103;
    puVar3 = param_2 + 2;
    param_2[1] = 0x10100;
    temp_v0 = 0;
    if (param_4 != 0) {
      *puVar3 = 0;
      param_2[3] = (unsigned int)&LAB_00200080;
      param_2[4] = 0;
      puVar3 = param_2 + 6;
      param_2[5] = 0;
    }
    temp_v3 = *(float *)(param_1 + 4);
    if ((0.0f < temp_v3) && ((unsigned int)romwright_fabs_4(temp_v3) >> 0x17 != 0xff)) {
      if ((int)(temp_v3 * 16777216.0f) < 0x4b800000) {
        temp_v0 = VectorFloatToUnsigned(temp_v3 * 16777216.0f,3);
      }
      else {
        temp_v0 = 0xffffff;
      }
    }
    *puVar3 = (unsigned int)(param_1[1] == '\0') | (temp_v0 & 0xfffffffe);
    puVar3[1] = 0xf008b;
    temp_v3 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x10);
    temp_v2 = 0;
    if ((romwright_fabs_4(temp_v3) != 0.0f) && (temp_v2 = ((unsigned int)romwright_fabs_4(temp_v3) >> 0x17) - 0x70, -1 >= temp_v2)) {
      temp_v0 = ((unsigned int)temp_v3 >> 0x1f) << 0xf;
    }
    else {
      temp_v0 = (((((unsigned int)temp_v3 & 0xe07fffff) >> 0xd) | (temp_v2 << 10)) & 0xffff) |
              (((unsigned int)temp_v3 >> 0x1f) << 0xf);
    }
    temp_v3 = -*(float *)(param_1 + 0xc);
    temp_v2 = 0;
    if ((romwright_fabs_4(temp_v3) != 0.0f) && (temp_v2 = ((unsigned int)romwright_fabs_4(temp_v3) >> 0x17) - 0x70, -1 >= temp_v2)) {
      temp_v1 = ((unsigned int)temp_v3 >> 0x1f) << 0xf;
    }
    else {
      temp_v1 = (((((unsigned int)temp_v3 & 0xe07fffff) >> 0xd) | (temp_v2 << 10)) & 0xffff) |
              (((unsigned int)temp_v3 >> 0x1f) << 0xf);
    }
    puVar3[2] = temp_v0 | (temp_v1 << 0x10);
    param_2 = puVar3 + 4;
    puVar3[3] = 0xf0130;
  }
  if (param_3 != 0) {
    puVar3 = (unsigned int *)(*(int *)(param_1 + 0x14) + 0x7c);
    FUN_00192de4(puVar3,param_2,1);
    return puVar3;
  }
  return param_2;
}
