/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fef18` (_code @ 0x2fef18, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00221d14. */
/* Supplied declaration required: FUN_0038136c. */


void FUN_002fef18(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = *(int *)(param_1 + 0x24);
  temp_v2 = *(int *)(temp_v0 + 0xb8);
  temp_v1 = 0;
  if (temp_v2 != 0) {
    temp_v1 = *(int *)(param_1 + 0x1c);
  }
  if (temp_v2 == 0 || temp_v1 == 0) {
    *(unsigned int *)(temp_v0 + 200) = 0;
    *(unsigned int *)(temp_v0 + 0xcc) = 0;
    *(unsigned int *)(temp_v0 + 0xd0) = 0x43c80000;
    *(unsigned int *)(temp_v0 + 0xd4) = 0x43700000;
    *(unsigned int *)(temp_v0 + 0xc4) = *(unsigned int *)(temp_v0 + 0x28);
  }
  if (temp_v2 < temp_v1) {
    *(unsigned char *)(temp_v0 + 0xc3) = 0;
  }
  else {
    temp_v1 = temp_v0;
    FUN_0038136c(temp_v0,temp_v0 + 0x24);
    FUN_00221d14(*(unsigned int *)(param_1 + 0x10));
    DAT_006472ec = DAT_006472dc;
    DAT_006472f0 = DAT_006472e0;
    DAT_006472f4 = DAT_006472e4;
    DAT_006472f8 = DAT_006472e8;
    FUN_00221d14(temp_v1);
    DAT_006472dc = DAT_006472dc * DAT_006472ec;
    DAT_006472e0 = DAT_006472e0 * DAT_006472f0;
    DAT_006472e4 = DAT_006472e4 * DAT_006472f4;
    DAT_006472e8 = DAT_006472e8 * DAT_006472f8;
    temp_v3 = VectorFloatToUnsigned(DAT_006472dc * 255.0f,3);
    temp_v6 = VectorFloatToUnsigned(DAT_006472e0 * 255.0f,3);
    temp_v4 = VectorFloatToUnsigned(DAT_006472e4 * 255.0f,3);
    temp_v5 = VectorFloatToUnsigned(DAT_006472e8 * 255.0f,3);
    *(char *)(temp_v0 + 0xc0) = (char)temp_v5;
    *(char *)(temp_v0 + 0xc1) = (char)temp_v4;
    *(char *)(temp_v0 + 0xc2) = (char)temp_v6;
    *(char *)(temp_v0 + 0xc3) = (char)temp_v3;
  }
  return;
}
