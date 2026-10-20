/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015402c` (_code @ 0x15402c, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017dd84(void);
int asdGfxCmdBufferForward8(int, int, unsigned int, unsigned int, int, int, unsigned int, unsigned int);
int VectorFloatToUnsigned(double, int);

/* stack frame of param_5: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_5_stack;

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_0017dd84. */
/* Supplied declaration required: asdGfxCmdBufferForward8. */


void FUN_0015402c(int *param_1,int *param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s4; 8 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  float in_s0;
  unsigned int temp_v7;
  float in_s1;
  int temp_v8;
  float in_s2;
  int temp_v9;
  float in_s3;
  int temp_v10;
  float in_s4;
  int temp_v11;
  
  temp_v1 = 0x20;
  temp_v3 = 0x20;
  temp_v4 = param_1[2];
  temp_v11 = param_2[4];
  temp_v5 = param_1[4];
  temp_v2 = param_2[2];
  if ((in_s4 <= 0.0f) || ((unsigned int)romwright_fabs_4(in_s4) >> 0x17 == 0xff)) {
    temp_v0 = 0;
  }
  else if ((int)(in_s4 * 16777216.0f) < 0x4b800000) {
    temp_v0 = VectorFloatToUnsigned(in_s4 * 16777216.0f,3);
  }
  else {
    temp_v0 = 0xffffff;
  }
  temp_v6 = *param_1 - 0x8056;
  temp_v10 = VectorFloatToUnsigned(in_s0 * 255.0f,3);
  temp_v9 = VectorFloatToUnsigned(in_s1 * 255.0f,3);
  temp_v8 = VectorFloatToUnsigned(in_s2 * 255.0f,3);
  temp_v7 = VectorFloatToUnsigned(in_s3 * 255.0f,3);
  if ((temp_v6 < 2) || ((temp_v6 != 2 && (*param_1 == 0x8d62)))) {
    temp_v1 = 0x10;
  }
  if (*param_2 == 0x81a5) {
    temp_v3 = 0x10;
  }
  if ((param_4 & 1) == 0) {
    temp_v4 = 0;
  }
  if ((param_4 & 6) == 0) {
    temp_v2 = 0;
  }
  if (param_5 != 0) {
    FUN_0017dd84();
  }
  asdGfxCmdBufferForward8(temp_v4,temp_v5,(temp_v10 << 0x18) | (temp_v9 << 0x10) | (temp_v8 << 8) | temp_v7,temp_v1,temp_v2,
               temp_v11,temp_v0 | (param_3 << 0x18),temp_v3);
  return;
}

} /* extern "C" */
