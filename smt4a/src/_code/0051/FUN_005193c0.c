/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005193c0` (_code @ 0x5193c0, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_005193c0_arg0 fn_005193c0_arg0;
struct fn_005193c0_arg0 {
    unsigned char pad_0x0[0xe];
    ushort field_0xe; /* +0xe */
    float field_0x10; /* +0x10 */
    float field_0x14; /* +0x14 */
    float field_0x18; /* +0x18 */
    float field_0x1c; /* +0x1c */
    byte *field_0x20; /* +0x20 */
};

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
extern int nn_math_ARMv6_HermiteC_FAST(int, int);


int FUN_005193c0(fn_005193c0_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 5 native warning(s); review required */
  unsigned char *pbVar1;
  unsigned char *pbVar2;
  int temp_v0;
  unsigned char *pbVar4;
  unsigned char temp_v1;
  unsigned int in_fpscr;
  float in_s0;
  unsigned int temp_v2;
  int temp_v3;
  float temp_v4;
  
  pbVar1 = param_1->field_0x20;
  pbVar4 = pbVar1 + ((unsigned int)param_1->field_0xe * 4 - 4);
  temp_v2 = VectorFloatToUnsigned(in_s0 / param_1->field_0x18,3);
  pbVar2 = pbVar1;
  if ((*pbVar1 <= temp_v2) && (pbVar2 = pbVar4, temp_v2 < *pbVar4)) {
    temp_v4 = (float)VectorSignedToFloat(param_1->field_0xe - 1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v3 = VectorFloatToUnsigned(param_1->field_0x1c * temp_v4 * in_s0,3);
    pbVar2 = pbVar1 + temp_v3 * 4;
    pbVar1 = pbVar2;
    if (temp_v2 < *pbVar2) {
      do {
        pbVar2 = pbVar2 + -4;
      } while (temp_v2 < *pbVar2);
    }
    else {
      do {
        pbVar2 = pbVar1;
        pbVar1 = pbVar2 + 4;
      } while (pbVar2[4] <= temp_v2);
    }
  }
  temp_v4 = (float)VectorUnsignedToFloat((unsigned int)*pbVar2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v4 * param_1->field_0x18 == in_s0) << 0x1e);
  temp_v1 = romwright_subpiece_4_1_0(temp_v2 >> 0x1e,0);
  if (!temp_v1) {
    temp_v1 = pbVar2 == pbVar4;
  }
  if (!temp_v1) {
    VectorUnsignedToFloat((unsigned int)pbVar2[4],(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v0 = (char)pbVar2[3] * 0x10 + (unsigned int)(pbVar2[2] >> 4);
    VectorUnsignedToFloat((unsigned int)pbVar2[1] + (pbVar2[2] & 0xf) * 0x100,(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v3 = (char)pbVar2[7] * 0x10 + (unsigned int)(pbVar2[6] >> 4);
    VectorSignedToFloat(temp_v3,(unsigned char)(temp_v2 >> 0x16) & 3);
    VectorUnsignedToFloat((unsigned int)pbVar2[5] + (pbVar2[6] & 0xf) * 0x100,(unsigned char)(temp_v2 >> 0x16) & 3);
    VectorSignedToFloat(temp_v0,(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v3 = nn_math_ARMv6_HermiteC_FAST(temp_v3,temp_v0);
    return temp_v3;
  }
  temp_v3 = (unsigned int)pbVar2[1] + (pbVar2[2] & 0xf) * 0x100;
  VectorUnsignedToFloat(temp_v3,(unsigned char)(temp_v2 >> 0x16) & 3);
  return temp_v3;
}
