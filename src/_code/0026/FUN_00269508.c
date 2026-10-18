/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00269508` (_code @ 0x269508, 0x184 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_00269508(char *param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  char temp_v0;
  unsigned int in_fpscr;
  int temp_v1;
  int temp_v2;
  float temp_v3;
  
  if (param_3 != 0) {
    temp_v0 = *param_1;
    temp_v3 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    if (temp_v0 != '\0') {
      if (temp_v0 != '\x01') {
        if (temp_v0 == '\x02') {
          temp_v1 = (int)(*(float *)(param_1 + 0x18) * temp_v3);
          if (param_2 < temp_v1) {
            VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          else {
            temp_v2 = (int)(*(float *)(param_1 + 0x20) * temp_v3);
            if (param_2 < temp_v2) {
              VectorSignedToFloat(temp_v2 - temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(param_2 - temp_v1,(unsigned char)((in_fpscr & 0xfffffff) >> 0x16) & 3);
            }
            else {
              VectorSignedToFloat(param_3 - temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(param_2 - temp_v2,(unsigned char)((in_fpscr & 0xfffffff) >> 0x16) & 3);
            }
          }
        }
      }
      else {
        temp_v1 = (int)(*(float *)(param_1 + 0x18) * temp_v3);
        if (param_2 < temp_v1) {
          VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
        else {
          VectorSignedToFloat(param_3 - temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(param_2 - temp_v1,(unsigned char)((in_fpscr & 0xfffffff) >> 0x16) & 3);
        }
      }
    }
    else {
      VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
  }
  return;
}
