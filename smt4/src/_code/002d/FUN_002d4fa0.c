/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d4fa0` (_code @ 0x2d4fa0, 0x90 bytes) from smt4_v1.2.0.cxi.
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
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern unsigned char DAT_004c2424; /* 0x4c2424 */
extern int DAT_004c3224; /* 0x4c3224 */

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */


unsigned int FUN_002d4fa0(int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  float in_s0;
  float in_s1;
  
  temp_v1 = 0;
  if (temp_v1 < DAT_004c3224) {
    do {
      temp_v0 = temp_v1 * 0x1c;
      if ((*(int *)(temp_v0 + 0x4c243c) == param_1 || param_1 == 0) &&
         (*(float *)(&DAT_004c2424 + temp_v0) <= in_s0)) {
        temp_v2 = in_s1 < *(float *)(temp_v0 + 0x4c242c);
        temp_v3 = (in_s1 != in_s1) || romwright_isnanf(*(float *)(temp_v0 + 0x4c242c));
        if (!temp_v2) {
          temp_v2 = *(float *)(temp_v0 + 0x4c2430) < in_s0;
          temp_v3 = romwright_isnanf(*(float *)(temp_v0 + 0x4c2430)) || (in_s0 != in_s0);
        }
        if ((temp_v2 == temp_v3) && (in_s1 <= *(float *)(temp_v0 + 0x4c2438))) {
          return 1;
        }
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_004c3224);
  }
  return 0;
}
