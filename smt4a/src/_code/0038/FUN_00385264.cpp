/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00385264` (_code @ 0x385264, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00185dd4(int, int, int, int, int, int, int, int);
int FUN_0037b138(unsigned int);
int VectorUnsignedToFloat(int, int);

extern float DAT_00630730; /* 0x630730 */
extern float DAT_00630740; /* 0x630740 */
extern float DAT_00630750; /* 0x630750 */
extern float DAT_00630760; /* 0x630760 */
extern unsigned char DAT_00630775; /* 0x630775 */
extern float DAT_0063077c; /* 0x63077c */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00185dd4. */
/* Supplied declaration required: FUN_0037b138. */


void FUN_00385264(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  
  if (param_1 < 0xf0) {
    return;
  }
  if ((param_1 < 0x14b) &&
     ((temp_v0 = 0xff, param_1 < 0x137 || (temp_v0 = (0x136 - param_1) * 0x20 + 0xff, -1 < (int)temp_v0)))
     ) {
    FUN_0037b138(temp_v0 & 0xff);
    temp_v1 = param_1 - 0xf0;
    if (temp_v1 >= 6) {
      temp_v1 = 5;
    }
    temp_v1 = (temp_v1 * 0xf0) / 5;
    if (temp_v1 < 0xf0) {
      temp_v2 = (0xf0 - temp_v1) / 2;
    }
    else {
      temp_v2 = 0;
    }
    FUN_00185dd4(2,4,37000,0,temp_v2,400,temp_v1,0xb);
    param_1 = param_1 - 0xf5;
    if (param_1 >= 9) {
      param_1 = 8;
    }
    temp_v1 = (int)(param_1 * 0xf0 + ((unsigned int)(param_1 * 0xf0 >> 0x1f) >> 0x1d)) >> 3;
    if (temp_v1 < 0xf0) {
      temp_v2 = (0xf0 - temp_v1) / 2;
    }
    else {
      temp_v2 = 0;
    }
    FUN_00185dd4(2,4,0x9089,0,temp_v2,400,temp_v1,0xb);
    DAT_0063077c = (float)VectorUnsignedToFloat(0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_0063077c = DAT_0063077c * 0.003921569f;
    if ((int)DAT_0063077c >= 0x3f800001) {
      DAT_0063077c = 1.0f;
    }
    if (DAT_0063077c < 0.0f) {
      DAT_0063077c = 0.0f;
    }
    DAT_00630730 = DAT_0063077c;
    DAT_00630740 = DAT_0063077c;
    DAT_00630750 = DAT_0063077c;
    DAT_00630760 = DAT_0063077c;
    DAT_00630775 = 1;
    return;
  }
  return;
}

} /* extern "C" */
