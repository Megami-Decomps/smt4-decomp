/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00519958` (_code @ 0x519958, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00519958_arg0 fn_00519958_arg0;
struct fn_00519958_arg0 {
    unsigned char pad_0x0[0xe];
    ushort field_0xe; /* +0xe */
    unsigned char pad_0x10[0xc];
    float field_0x1c; /* +0x1c */
    void *field_0x20; /* +0x20 */
};

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: nn_math_ARMv6_HermiteC_FAST. */


void FUN_00519958(fn_00519958_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  unsigned int in_fpscr;
  float in_s0;
  int temp_v2;
  float temp_v3;
  
  pfVar3 = param_1->field_0x20;
  pfVar5 = pfVar3 + ((unsigned int)param_1->field_0xe * 4 - 4);
  pfVar4 = pfVar3;
  if ((*pfVar3 <= in_s0) &&
     (temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(*pfVar5 == in_s0) << 0x1e) |
              ((unsigned int)(in_s0 <= *pfVar5) << 0x1d), temp_v1 = (unsigned char)(temp_v0 >> 0x18), pfVar4 = pfVar5,
     (unsigned char)((temp_v1 >> 5) & 1) && !(unsigned char)(temp_v1 >> 6))) {
    temp_v3 = (float)VectorSignedToFloat(param_1->field_0xe - 1,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v2 = VectorFloatToUnsigned(param_1->field_0x1c * temp_v3 * in_s0,3);
    pfVar4 = pfVar3 + temp_v2 * 4;
    pfVar3 = pfVar4;
    if (*pfVar4 > in_s0) {
      do {
        pfVar4 = pfVar4 + -4;
      } while (in_s0 < *pfVar4);
    }
    else {
      do {
        pfVar4 = pfVar3;
        pfVar3 = pfVar4 + 4;
      } while (pfVar4[4] <= in_s0);
    }
  }
  if (*pfVar4 != in_s0 && pfVar4 != pfVar5) {
    nn_math_ARMv6_HermiteC_FAST();
  }
  return;
}
