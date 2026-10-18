/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cfb64` (_code @ 0x4cfb64, 0x1bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_004cfb64(unsigned int param_1,int param_2,unsigned int param_3,int param_4)

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
  
  temp_v0 = DAT_0059dbb4;
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
  piVar5 = (int *)(DAT_0059dbb4 + 0x1318);
  temp_v2 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = 3;
  if (*(char *)(temp_v0 + 0x1330) != '\0' || temp_v2 != 3) {
    (**(romwright_code **)(temp_v0 + 0x1334))();
    *(unsigned char *)(temp_v0 + 0x1330) = 0;
  }
  temp_v0 = DAT_0059dbb4;
  temp_v1 = (int)(320.0f - temp_v4) | ((int)(240.0f - temp_v5) << 0x10);
  piVar5 = (int *)(DAT_0059dbb4 + 0x1338);
  temp_v3 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = temp_v1;
  if (*(char *)(temp_v0 + 0x1350) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1354))();
    *(unsigned char *)(temp_v0 + 0x1350) = 0;
  }
  temp_v0 = DAT_0059dbb4;
  param_3 = param_3 | (param_4 << 0x10);
  piVar5 = (int *)(DAT_0059dbb4 + 0x1358);
  temp_v1 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = param_3;
  if (*(char *)(temp_v0 + 0x1370) != '\0' || temp_v1 != param_3) {
    (**(romwright_code **)(temp_v0 + 0x1374))();
    *(unsigned char *)(temp_v0 + 0x1370) = 0;
  }
  return;
}
