/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e039c` (_code @ 0x2e039c, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

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
extern unsigned char DAT_004be698; /* 0x4be698 */
extern int DAT_004bf898; /* 0x4bf898 */

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
extern int FUN_002c2950(void);


unsigned int FUN_002e039c(int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1; 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  float in_s0;
  float in_s1;
  
  temp_v1 = FUN_002c2950();
  temp_v2 = 0;
  if (temp_v2 < DAT_004bf898) {
    do {
      temp_v0 = temp_v2 * 0x20;
      if (((*(int *)(temp_v0 + 0x4be6b4) == param_1 || param_1 == 0) || param_1 == 99) &&
         (*(float *)(&DAT_004be698 + temp_v0) <= in_s0)) {
        temp_v3 = in_s1 < *(float *)(temp_v0 + 0x4be6a0);
        temp_v4 = (in_s1 != in_s1) || romwright_isnanf(*(float *)(temp_v0 + 0x4be6a0));
        if (!temp_v3) {
          temp_v3 = *(float *)(temp_v0 + 0x4be6a4) < in_s0;
          temp_v4 = romwright_isnanf(*(float *)(temp_v0 + 0x4be6a4)) || (in_s0 != in_s0);
        }
        if ((temp_v3 == temp_v4) && (in_s1 <= *(float *)(temp_v0 + 0x4be6ac))) {
          *(short *)(temp_v1 + 0xd58) = (short)temp_v2;
          return *(unsigned int *)(temp_v0 + 0x4be6b0);
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < DAT_004bf898);
  }
  return *(unsigned int *)(*(short *)(temp_v1 + 0xd58) * 0x20 + 0x4be6b0);
}
