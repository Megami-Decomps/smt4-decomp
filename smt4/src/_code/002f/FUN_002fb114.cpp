/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb114` (_code @ 0x2fb114, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024692c(unsigned int);
int FUN_002b0750(int, int, int, int, int, int, int, int);
int VectorUnsignedToFloat(int, int);

extern float DAT_004d46b8; /* 0x4d46b8 */
extern float DAT_004d46c8; /* 0x4d46c8 */
extern float DAT_004d46d8; /* 0x4d46d8 */
extern float DAT_004d46e8; /* 0x4d46e8 */
extern unsigned char DAT_004d46fd; /* 0x4d46fd */
extern float DAT_004d4704; /* 0x4d4704 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0024692c. */
/* Supplied declaration required: FUN_002b0750. */


void FUN_002fb114(int param_1)

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
    FUN_0024692c(temp_v0 & 0xff);
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
    FUN_002b0750(2,10,37000,0,temp_v2,400,temp_v1,0xb);
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
    FUN_002b0750(2,10,0x9089,0,temp_v2,400,temp_v1,0xb);
    DAT_004d4704 = (float)VectorUnsignedToFloat(0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_004d4704 = DAT_004d4704 * 0.003921569f;
    if ((int)DAT_004d4704 >= 0x3f800001) {
      DAT_004d4704 = 1.0f;
    }
    if (DAT_004d4704 < 0.0f) {
      DAT_004d4704 = 0.0f;
    }
    DAT_004d46b8 = DAT_004d4704;
    DAT_004d46c8 = DAT_004d4704;
    DAT_004d46d8 = DAT_004d4704;
    DAT_004d46e8 = DAT_004d4704;
    DAT_004d46fd = 1;
    return;
  }
  return;
}

} /* extern "C" */
