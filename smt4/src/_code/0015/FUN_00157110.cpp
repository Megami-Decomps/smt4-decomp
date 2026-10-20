/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00157110` (_code @ 0x157110, 0x108 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_00157110(unsigned char *param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s1; 2 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  float in_s1;
  float temp_v4;
  
  switch(*param_1) {
  case 0:
    param_2 = param_2 + 1;
    if (param_2 >= 2) {
      in_s1 = *(float *)(param_1 + 0x10);
    }
    temp_v2 = 1;
    if (param_2 >= 2) {
      while (temp_v3 = *(float *)(param_1 + 4), *(float *)(param_1 + 4) = temp_v3 * in_s1,
            0xbcffffff < (unsigned int)(temp_v3 * in_s1)) {
        temp_v2 = temp_v2 + 1;
        if (param_2 <= temp_v2) {
          return;
        }
      }
      temp_v1 = *(short *)(param_1 + 0x14);
      *(unsigned int *)(param_1 + 4) = 0;
      *param_1 = 1;
      *(short *)(param_1 + 0x16) = temp_v1;
      return;
    }
    break;
  case 1:
    temp_v0 = *(unsigned short *)(param_1 + 0x16);
    if (param_2 < (int)(unsigned int)temp_v0) {
      temp_v1 = temp_v0 - (short)param_2;
      *(short *)(param_1 + 0x16) = temp_v1;
      return;
    }
    *(unsigned short *)(param_1 + 0x16) = 0;
    param_2 = param_2 - (unsigned int)temp_v0;
    *param_1 = 2;
  case 2:
    temp_v3 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v3 = *(float *)(param_1 + 4) - *(float *)(param_1 + 8) * temp_v3;
    temp_v4 = (float)VectorSignedToFloat((int)*(short *)((unsigned int)(unsigned char)param_1[0x18] * 2 + 0x414a54),
                                       (unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(param_1 + 4) = temp_v3;
    if (temp_v3 < temp_v4) {
      *(float *)(param_1 + 4) = temp_v4;
      *param_1 = 3;
      return;
    }
    break;
  case 4:
    temp_v3 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(param_1 + 4) = *(float *)(param_1 + 4) - *(float *)(param_1 + 0xc) * temp_v3;
    return;
  }
  return;
}

} /* extern "C" */
