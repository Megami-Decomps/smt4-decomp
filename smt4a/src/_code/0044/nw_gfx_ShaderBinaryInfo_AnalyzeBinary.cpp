/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_ShaderBinaryInfo_AnalyzeBinary` (_code @ 0x449640, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;


void nw_gfx_ShaderBinaryInfo_AnalyzeBinary(int *param_1)

{
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = *(int *)(*param_1 + 4);
  piVar1 = (int *)(*param_1 + 8);
  param_1[1] = temp_v0;
  temp_v1 = 0;
  if (temp_v0 != 0) {
    do {
      temp_v0 = *param_1;
      temp_v2 = *piVar1;
      param_1[temp_v1 + 2] = temp_v0 + temp_v2;
      if (*(char *)(temp_v0 + temp_v2 + 6) != '\0') {
        param_1[0xa5] = param_1[0xa5] + 1;
      }
      temp_v1 = temp_v1 + 1;
      piVar1 = piVar1 + 1;
    } while (temp_v1 < (unsigned int)param_1[1]);
  }
  param_1[0x22] = piVar1[2] + (int)piVar1;
  param_1[0x23] = piVar1[3];
  temp_v0 = piVar1[5];
  temp_v2 = piVar1[4];
  temp_v3 = temp_v0 != 0;
  piVar1 = (int *)((int)piVar1 + temp_v2);
  if (temp_v3) {
    temp_v2 = 0;
  }
  param_1[0xa4] = temp_v0;
  while (temp_v3) {
    temp_v0 = temp_v0 - 1;
    temp_v3 = temp_v0 != 0;
    param_1[temp_v2 + 0x24] = *piVar1;
    piVar1 = piVar1 + 2;
    temp_v2 = temp_v2 + 1;
  }
  return;
}

} /* extern "C" */
