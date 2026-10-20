/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2f10` (_code @ 0x2b2f10, 0x1ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00221d14(...);
int FUN_0034f8b4(int, int, int);
int FUN_0038136c(int, int, int, int);
int SUB41(double, int);
int VectorFloatToUnsigned(double, int);

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SUB41 (SUBPIECE). */
/* Supplied declaration required: FUN_00221d14. */
/* Supplied declaration required: FUN_0034f8b4. */
/* Supplied declaration required: FUN_0038136c. */


void FUN_002b2f10(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  
  temp_v1 = *(int *)(param_1 + 0x24);
  temp_v3 = *(int *)(temp_v1 + 0xb8);
  temp_v2 = 0;
  if (temp_v3 != 0) {
    temp_v2 = *(int *)(param_1 + 0x1c);
  }
  if (temp_v3 == 0 || temp_v2 == 0) {
    *(unsigned int *)(temp_v1 + 0xd8) = 0;
    *(unsigned int *)(temp_v1 + 0xdc) = 0;
    *(unsigned int *)(temp_v1 + 0xd0) = 0x43480000;
    *(unsigned int *)(temp_v1 + 0xd4) = 0x42f00000;
    *(unsigned int *)(temp_v1 + 0xe0) = 0x43c80000;
    *(unsigned int *)(temp_v1 + 0xe4) = 0x43700000;
    *(unsigned int *)(temp_v1 + 0xc4) = *(unsigned int *)(temp_v1 + 0x28);
  }
  if (temp_v3 < temp_v2) {
    *(unsigned char *)(temp_v1 + 0xc3) = 0;
  }
  else {
    temp_v0 = temp_v1;
    FUN_0038136c(temp_v1,temp_v1 + 0x24,temp_v2,temp_v3);
    FUN_00221d14(*(unsigned int *)(param_1 + 0x10));
    DAT_006472ec = DAT_006472dc;
    DAT_006472f0 = DAT_006472e0;
    DAT_006472f4 = DAT_006472e4;
    DAT_006472f8 = DAT_006472e8;
    FUN_00221d14(temp_v0);
    DAT_006472dc = DAT_006472dc * DAT_006472ec;
    DAT_006472e0 = DAT_006472e0 * DAT_006472f0;
    DAT_006472e4 = DAT_006472e4 * DAT_006472f4;
    DAT_006472e8 = DAT_006472e8 * DAT_006472f8;
    temp_v6 = VectorFloatToUnsigned(DAT_006472dc * 255.0f,3);
    temp_v4 = VectorFloatToUnsigned(DAT_006472e0 * 255.0f,3);
    temp_v7 = VectorFloatToUnsigned(DAT_006472e4 * 255.0f,3);
    temp_v5 = (float)VectorFloatToUnsigned(DAT_006472e8 * 255.0f,3);
    *(char *)(temp_v1 + 0xc0) = SUB41(temp_v5,0);
    *(char *)(temp_v1 + 0xc1) = (char)temp_v7;
    *(char *)(temp_v1 + 0xc2) = (char)temp_v4;
    *(char *)(temp_v1 + 0xc3) = (char)temp_v6;
    FUN_0034f8b4(temp_v1 + 0x34,temp_v2,temp_v3);
    temp_v8 = 0.01f;
    *(float *)(temp_v1 + 0xcc) = temp_v5 * 0.01f + 1.0f;
    FUN_0034f8b4(temp_v1 + 0x60,temp_v2,temp_v3);
    *(float *)(temp_v1 + 200) = temp_v5 * temp_v8;
  }
  return;
}

} /* extern "C" */
