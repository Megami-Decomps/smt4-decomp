/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00501660` (_code @ 0x501660, 0x190 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif


unsigned int * FUN_00501660(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  
  temp_v5 = (float)VectorUnsignedToFloat(param_1[2],(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = temp_v5 * 0.5f;
  temp_v3 = 0;
  if ((romwright_fabs_4(temp_v5) != 0.0f) && (temp_v3 = ((unsigned int)romwright_fabs_4(temp_v5) >> 0x17) - 0x40, -1 >= temp_v3)) {
    temp_v4 = ((unsigned int)temp_v5 >> 0x1f) << 0x17;
  }
  else {
    temp_v4 = (((unsigned int)temp_v5 & 0x7fffff) >> 7) | (temp_v3 << 0x10) | (((unsigned int)temp_v5 >> 0x1f) << 0x17);
  }
  temp_v5 = (float)VectorUnsignedToFloat(param_1[2],(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = 2.0f / temp_v5;
  if (romwright_fabs_4(temp_v5) != 0.0f) {
    temp_v3 = ((unsigned int)romwright_fabs_4(temp_v5) >> 0x17) - 0x40;
    if (-1 >= temp_v3) {
      temp_v0 = ((unsigned int)temp_v5 >> 0x1f) << 0x1e;
    }
    else {
      temp_v0 = ((unsigned int)temp_v5 & 0x7fffff) | (temp_v3 << 0x17) | (((unsigned int)temp_v5 >> 0x1f) << 0x1e);
    }
  }
  else {
    temp_v3 = 0;
    temp_v0 = ((unsigned int)temp_v5 & 0x7fffff) | (temp_v3 << 0x17) | (((unsigned int)temp_v5 >> 0x1f) << 0x1e);
  }
  temp_v5 = (float)VectorUnsignedToFloat(param_1[3],(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = temp_v5 * 0.5f;
  temp_v3 = 0;
  if ((romwright_fabs_4(temp_v5) != 0.0f) && (temp_v3 = ((unsigned int)romwright_fabs_4(temp_v5) >> 0x17) - 0x40, -1 >= temp_v3)) {
    temp_v2 = ((unsigned int)temp_v5 >> 0x1f) << 0x17;
  }
  else {
    temp_v2 = (((unsigned int)temp_v5 & 0x7fffff) >> 7) | (temp_v3 << 0x10) | (((unsigned int)temp_v5 >> 0x1f) << 0x17);
  }
  temp_v5 = (float)VectorUnsignedToFloat(param_1[3],(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = 2.0f / temp_v5;
  if (romwright_fabs_4(temp_v5) != 0.0f) {
    temp_v3 = ((unsigned int)romwright_fabs_4(temp_v5) >> 0x17) - 0x40;
    if (temp_v3 < 0) {
      temp_v1 = ((unsigned int)temp_v5 >> 0x1f) << 0x1e;
    }
    else {
      temp_v1 = ((unsigned int)temp_v5 & 0x7fffff) | (temp_v3 << 0x17) | (((unsigned int)temp_v5 >> 0x1f) << 0x1e);
    }
  }
  else {
    temp_v3 = 0;
    temp_v1 = ((unsigned int)temp_v5 & 0x7fffff) | (temp_v3 << 0x17) | (((unsigned int)temp_v5 >> 0x1f) << 0x1e);
  }
  *param_2 = temp_v4;
  param_2[1] = 0x70041;
  param_2[2] = temp_v0 << 1;
  param_2[3] = 0xf0042;
  param_2[4] = temp_v2;
  param_2[5] = 0x70043;
  param_2[6] = temp_v1 << 1;
  param_2[7] = 0xf0044;
  param_2[8] = *param_1 | (param_1[1] << 0x10);
  param_2[9] = 0xf0068;
  return param_2 + 10;
}
