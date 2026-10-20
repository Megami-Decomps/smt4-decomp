/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00231258` (_code @ 0x231258, 0x1bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(...);

typedef int romwright_code(...);
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_00231258(unsigned int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  
  temp_v0 = DAT_0044ea00;
  if ((int)(param_1 + param_3) < 0) {
    param_1 = 0;
    param_3 = param_1;
    if ((int)(param_1 + param_3) >= 0x141) {
      temp_v4 = (float)VectorSignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
      param_3 = (unsigned int)(320.0f - temp_v4);
    }
  }
  else if ((int)param_1 < 0) {
    param_3 = param_3 + param_1;
    param_1 = 0;
    if ((int)(param_1 + param_3) >= 0x141) {
      temp_v4 = (float)VectorSignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
      param_3 = (unsigned int)(320.0f - temp_v4);
    }
  }
  else if ((int)param_1 >= 0x141) {
    param_1 = 0;
    param_3 = param_1;
  }
  else if ((int)(param_1 + param_3) >= 0x141) {
    temp_v4 = (float)VectorSignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
    param_3 = (unsigned int)(320.0f - temp_v4);
  }
  if (param_2 + param_4 < 0) {
    param_4 = 0;
    param_2 = 0;
    if (param_2 + param_4 >= 0xf1) {
      temp_v4 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
      param_4 = (int)(240.0f - temp_v4);
    }
  }
  else if (param_2 < 0) {
    param_4 = param_4 + param_2;
    param_2 = 0;
    if (param_2 + param_4 >= 0xf1) {
      temp_v4 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
      param_4 = (int)(240.0f - temp_v4);
    }
  }
  else if (param_2 >= 0xf1) {
    param_2 = 0;
    param_4 = param_2;
  }
  else if (param_2 + param_4 >= 0xf1) {
    temp_v4 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    param_4 = (int)(240.0f - temp_v4);
  }
  temp_v4 = (float)VectorSignedToFloat(param_1 + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = (float)VectorSignedToFloat(param_2 + param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  piVar5 = (int *)(DAT_0044ea00 + 0x130c);
  temp_v2 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = 3;
  if (*(char *)(temp_v0 + 0x1324) != '\0' || temp_v2 != 3) {
    (**(romwright_code **)(temp_v0 + 0x1328))();
    *(unsigned char *)(temp_v0 + 0x1324) = 0;
  }
  temp_v0 = DAT_0044ea00;
  temp_v1 = (int)(320.0f - temp_v4) | ((int)(240.0f - temp_v5) << 0x10);
  piVar5 = (int *)(DAT_0044ea00 + 0x132c);
  temp_v3 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = temp_v1;
  if (*(char *)(temp_v0 + 0x1344) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1348))();
    *(unsigned char *)(temp_v0 + 0x1344) = 0;
  }
  temp_v0 = DAT_0044ea00;
  param_3 = param_3 | (param_4 << 0x10);
  piVar5 = (int *)(DAT_0044ea00 + 0x134c);
  temp_v1 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = param_3;
  if (*(char *)(temp_v0 + 0x1364) != '\0' || temp_v1 != param_3) {
    (**(romwright_code **)(temp_v0 + 0x1368))();
    *(unsigned char *)(temp_v0 + 0x1364) = 0;
  }
  return;
}

} /* extern "C" */
