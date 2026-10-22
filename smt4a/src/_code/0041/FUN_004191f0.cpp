/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004191f0` (_code @ 0x4191f0, 0x17c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy(unsigned char *, unsigned char *, unsigned int);

extern unsigned int gfxTexFormatGetBitsPerPixel(unsigned int, unsigned int);
/* Supplied declaration required: FUN_004191f0. */
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_004191f0(unsigned char *param_1,unsigned char *param_2,int param_3,unsigned int *param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = gfxTexFormatGetBitsPerPixel(*param_4,param_4[1]);
  if (param_3 != 1) {
    if (!(temp_v0 == 4 && param_3 == 2)) {
      param_3 = param_3 >> 1;
      if (param_4[8] != 0) {
        FUN_004191f0(param_1,param_2 + (param_4[6] * param_3 * temp_v0 >> 3),param_3,param_4);
        temp_v1 = param_3 * param_3 * temp_v0;
        FUN_004191f0(param_1 + (temp_v1 >> 3),
                     param_2 + ((param_4[6] * param_3 + param_3) * temp_v0 >> 3),param_3,param_4);
        FUN_004191f0(param_1 + ((temp_v1 & 0x7fffffff) >> 2),param_2,param_3,param_4);
        FUN_004191f0(param_1 + (temp_v1 * 3 >> 3),param_2 + (param_3 * temp_v0 >> 3),param_3,param_4);
      }
      else {
        FUN_004191f0(param_1,param_2,param_3,param_4);
        temp_v1 = param_3 * param_3 * temp_v0;
        FUN_004191f0(param_1 + (temp_v1 >> 3),param_2 + (param_3 * temp_v0 >> 3),param_3,param_4);
        FUN_004191f0(param_1 + ((temp_v1 & 0x7fffffff) >> 2),
                     param_2 + (param_4[6] * param_3 * temp_v0 >> 3),param_3,param_4);
        FUN_004191f0(param_1 + (temp_v1 * 3 >> 3),
                     param_2 + ((param_4[6] * param_3 + param_3) * temp_v0 >> 3),param_3,param_4);
      }
    }
    else if (param_4[8] == 0) {
      *param_2 = *param_1;
      param_2[(param_4[6] & 0x3fffffff) >> 1] = param_1[1];
    }
  }
  else {
    rt_memcpy(param_2,param_1,temp_v0 >> 3);
  }
  return 1;
}

} /* extern "C" */
