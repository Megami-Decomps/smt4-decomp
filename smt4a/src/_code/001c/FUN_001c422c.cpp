/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c422c` (_code @ 0x1c422c, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorUnsignedToFloat(float *, int);

typedef int romwright_code(...);
#ifndef ROMWRIGHT_FLOAT_BITS_DEFINED
#define ROMWRIGHT_FLOAT_BITS_DEFINED
static unsigned int romwright_f2u(float value)
{
    union { float f; unsigned int u; } bits;
    bits.f = value;
    return bits.u;
}
static float romwright_u2f(unsigned int value)
{
    union { float f; unsigned int u; } bits;
    bits.u = value;
    return bits.f;
}
#endif
extern unsigned int DAT_00646618; /* 0x646618 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


float * FUN_001c422c(float *param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  float *pfVar1;
  romwright_code *pcVar2;
  unsigned int in_fpscr;
  unsigned int temp_v0;
  float temp_v1;
  
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(*param_1 == 0.0f) << 0x1e);
  if (romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0)) {
    return param_1;
  }
  pfVar1 = (float *)romwright_f2u((float)(param_1[4]));
  if ((float *)romwright_f2u((float)(param_1[2])) <= pfVar1) {
    pcVar2 = (romwright_code *)(&DAT_00646618)[*(unsigned char *)((int)param_1 + 0xd)];
    if (pcVar2 != (romwright_code *)0x0) {
      if (*(unsigned char *)((int)param_1 + 0xd) != 4) {
        (*pcVar2)();
      }
      else if (*(char *)((int)param_1 + 0x1d) != '\0') {
        temp_v1 = param_1[5];
        (*pcVar2)();
        param_1[6] = temp_v1;
      }
    }
    pfVar1 = (float *)(unsigned int)*(unsigned char *)(param_1 + 3);
    VectorUnsignedToFloat(pfVar1,(unsigned char)(temp_v0 >> 0x16) & 3);
  }
  return pfVar1;
}

} /* extern "C" */
