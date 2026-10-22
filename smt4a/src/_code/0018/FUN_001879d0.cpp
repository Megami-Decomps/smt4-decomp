/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001879d0` (_code @ 0x1879d0, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorUnsignedToFloat(unsigned int, int);

typedef int romwright_code(...);
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern unsigned long long FUN_001696f4(void);
extern unsigned int asdGxPresetsGetHeightByKind(unsigned int);
extern float nn_ulcd_CTR_StereoCamera_GetParallax(unsigned int, float);


void FUN_001879d0(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  float temp_v3;
  float temp_v4;
  unsigned int in_fpscr;
  unsigned int temp_v5;
  float in_s0;
  float temp_v6;
  unsigned long long temp_v7;
  
  if (*(int *)(param_1 + 0x52c) != 2) {
    temp_v7 = FUN_001696f4();
    temp_v4 = (float)((unsigned long long)temp_v7 >> 0x20);
    if ((int)temp_v7 == 1) {
      if (*(romwright_code **)(param_1 + 0x520) != (romwright_code *)0x0) {
        (**(romwright_code **)(param_1 + 0x520))();
        temp_v4 = temp_v3;
      }
      temp_v6 = *(float *)(param_1 + 0x510);
      temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v6 < in_s0) << 0x1f) |
              ((unsigned int)(temp_v6 == in_s0) << 0x1e);
      temp_v5 = temp_v0 | ((unsigned int)((temp_v6 != temp_v6) || (in_s0 != in_s0)) << 0x1c);
      temp_v1 = (unsigned char)(temp_v0 >> 0x18);
      if ((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(temp_v5 >> 0x1c) & 1)) {
        temp_v5 = in_fpscr & 0xfffffff;
      }
      nn_ulcd_CTR_StereoCamera_GetParallax(param_1 + 0x4a0,temp_v4);
      temp_v2 = asdGxPresetsGetHeightByKind(0);
      VectorUnsignedToFloat(temp_v2,(unsigned char)(temp_v5 >> 0x16) & 3);
      return;
    }
  }
  return;
}

} /* extern "C" */
