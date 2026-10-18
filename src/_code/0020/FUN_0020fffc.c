/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020fffc` (_code @ 0x20fffc, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0014f07c. */


void FUN_0020fffc(unsigned int *param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0, in_s1; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *unaff_r6;
  unsigned char temp_v2;
  float in_s0;
  unsigned int temp_v3;
  unsigned int in_s1;
  float temp_v4;
  
  temp_v0 = param_1[0xd];
  temp_v2 = temp_v0 == 0;
  temp_v1 = temp_v0;
  if (0 < (int)temp_v0) {
    temp_v1 = temp_v0 - param_2;
    temp_v2 = temp_v0 == param_2;
  }
  if (!temp_v2 && (int)temp_v1 < 0 == (0 < (int)temp_v0 && SBORROW4(temp_v0,param_2))) {
    temp_v2 = (*param_1 & 1) != 0;
    if (temp_v2) {
      unaff_r6 = (unsigned int *)param_1[0x14];
    }
    if (temp_v2 && unaff_r6 != (unsigned int *)0x0) {
      (**(romwright_code **)*unaff_r6)(unaff_r6);
      (**(romwright_code **)(*(int *)unaff_r6[1] + 0xc))((int *)unaff_r6[1],unaff_r6);
      param_1[0x14] = 0;
    }
    temp_v4 = 0.0f;
    *param_1 = *param_1 | 1;
    param_1[0xe] = param_2;
    param_1[0x10] = 0;
    param_1[0x11] = in_s1;
    temp_v1 = param_1[0xb];
    FUN_0014f07c(temp_v1,*(unsigned int *)(param_1[0xc] + param_2 * 4),param_1[0xf]);
    param_1[0x14] = temp_v1;
    temp_v0 = param_1[0x12];
    *(unsigned int *)(*(int *)(temp_v0 + 0x14) + 4) = temp_v1;
    **(unsigned int **)(temp_v0 + 0x24) = 0x3f800000;
    **(unsigned int **)(temp_v0 + 0x34) = 0x3f800000;
    *(unsigned char *)(temp_v0 + 0x41) = 1;
    if (in_s0 != temp_v4) {
      temp_v1 = param_1[0x14];
      temp_v3 = *(unsigned int *)(temp_v1 + 0x44);
      (**(romwright_code **)(temp_v1 + 0x4c))(*(unsigned int *)(temp_v1 + 0x50));
      *(unsigned int *)(temp_v1 + 0x3c) = *(unsigned int *)(temp_v1 + 0x38);
      *(unsigned int *)(temp_v1 + 0x38) = temp_v3;
      *(unsigned char *)(temp_v1 + 0x58) = 1;
    }
  }
  return;
}
