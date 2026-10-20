/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00375c74` (_code @ 0x375c74, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00514540(int);
int VectorSignedToFloat(int, int);
int VectorUnsignedToFloat(unsigned int, int);

typedef struct fn_00375c74_arg1 fn_00375c74_arg1;
struct fn_00375c74_arg1 {
    unsigned char pad_0x0[0x20];
    int field_0x20; /* +0x20 */
    unsigned char field_0x24; /* +0x24 */
    unsigned char pad_0x25[0x3];
    float field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x91];
    byte field_0xbd; /* +0xbd */
};

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00514540. */


void FUN_00375c74(int param_1,fn_00375c74_arg1 *param_2,unsigned char *param_3,int *param_4)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  unsigned int temp_v3;
  float in_s0;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  
  temp_v2 = 0;
  if ((param_2->field_0x20 != 0) && (*(int *)(param_1 + 0x10) >= param_2->field_0x20)) {
    *param_3 = 0;
  }
  else {
    temp_v4 = 0.0f;
    temp_v6 = 1.1f;
    if ((*(int *)(param_1 + 0x10) != 0) || (param_2->field_0xbd == 0)) {
      *param_3 = 0;
      temp_v5 = param_2->field_0x28;
      temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v5 < 0.0f) << 0x1f) |
              ((unsigned int)(temp_v5 == 0.0f) << 0x1e);
      temp_v3 = temp_v0 | ((unsigned int)(temp_v5 != temp_v5) << 0x1c);
      temp_v1 = (unsigned char)(temp_v0 >> 0x18);
      if (!((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(temp_v3 >> 0x1c) & 1))) {
        FUN_00514540(0);
        temp_v5 = (float)VectorUnsignedToFloat
                                 (*(unsigned int *)&param_2->field_0x24,(unsigned char)(temp_v3 >> 0x16) & 3);
        temp_v4 = *(float *)(param_1 + 0x14) + temp_v4 * (temp_v6 - param_2->field_0x28) * temp_v5 * in_s0;
        *(float *)(param_1 + 0x14) = temp_v4;
      }
      else {
        temp_v4 = (float)VectorUnsignedToFloat
                                 (*(unsigned int *)&param_2->field_0x24,(unsigned char)(temp_v3 >> 0x16) & 3);
        temp_v4 = *(float *)(param_1 + 0x14) + temp_v4 * in_s0;
        *(float *)(param_1 + 0x14) = temp_v4;
      }
      *param_4 = (int)romwright_fabs_4(temp_v4);
      temp_v4 = (float)VectorSignedToFloat((int)romwright_fabs_4(temp_v4),(unsigned char)(temp_v3 >> 0x16) & 3);
      *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) - temp_v4;
      return;
    }
    *param_3 = 1;
    temp_v5 = param_2->field_0x28;
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v5 < 0.0f) << 0x1f) | ((unsigned int)(temp_v5 == 0.0f) << 0x1e);
    temp_v3 = temp_v0 | ((unsigned int)(temp_v5 != temp_v5) << 0x1c);
    temp_v1 = (unsigned char)(temp_v0 >> 0x18);
    if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(temp_v3 >> 0x1c) & 1)) {
      FUN_00514540(0);
      temp_v5 = (float)VectorUnsignedToFloat(*(unsigned int *)(param_1 + 4),(unsigned char)(temp_v3 >> 0x16) & 3);
      *param_4 = (int)(temp_v4 * (temp_v6 - param_2->field_0x28) * temp_v5);
      return;
    }
    temp_v2 = *(int *)(param_1 + 4);
  }
  *param_4 = temp_v2;
  return;
}

} /* extern "C" */
