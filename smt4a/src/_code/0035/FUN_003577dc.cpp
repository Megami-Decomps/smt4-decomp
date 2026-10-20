/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003577dc` (_code @ 0x3577dc, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

#ifndef ROMWRIGHT_ISNAN_DEFINED
#define ROMWRIGHT_ISNAN_DEFINED
static int romwright_isnanf(float value)
{
    return value != value;
}
static int romwright_isnan(double value)
{
    return value != value;
}
#endif
extern int DAT_00613174; /* 0x613174 */

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
extern int FUN_00162e8c(void);


unsigned int FUN_003577dc(int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1; 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  float in_s0;
  float in_s1;
  
  temp_v1 = FUN_00162e8c();
  temp_v2 = 0;
  if (temp_v2 < DAT_00613174) {
    do {
      temp_v0 = temp_v2 * 0x20;
      if (((*(int *)(temp_v0 + 0x611890) == param_1 || param_1 == 0) || param_1 == 99) &&
         (*(float *)(temp_v0 + 0x611874) <= in_s0)) {
        temp_v3 = in_s1 < *(float *)(temp_v0 + 0x61187c);
        temp_v4 = (in_s1 != in_s1) || romwright_isnanf(*(float *)(temp_v0 + 0x61187c));
        if (!temp_v3) {
          temp_v3 = *(float *)(temp_v0 + 0x611880) < in_s0;
          temp_v4 = romwright_isnanf(*(float *)(temp_v0 + 0x611880)) || (in_s0 != in_s0);
        }
        if ((temp_v3 == temp_v4) && (in_s1 <= *(float *)(temp_v0 + 0x611888))) {
          *(short *)(temp_v1 + 0xd8c) = (short)temp_v2;
          return *(unsigned int *)(temp_v0 + 0x61188c);
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < DAT_00613174);
  }
  return *(unsigned int *)(*(short *)(temp_v1 + 0xd8c) * 0x20 + 0x61188c);
}

} /* extern "C" */
