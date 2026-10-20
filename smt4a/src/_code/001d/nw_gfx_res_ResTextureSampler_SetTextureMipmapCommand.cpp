/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_res_ResTextureSampler_SetTextureMipmapCommand` (_code @ 0x1d0068, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;


void nw_gfx_res_ResTextureSampler_SetTextureMipmapCommand(int *param_1)

{
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int *piVar5;
  unsigned int temp_v3;
  
  temp_v3 = 0;
  temp_v2 = *(int *)(*param_1 + 4);
  if (temp_v2 != 0) {
    temp_v2 = temp_v2 + *param_1 + 4;
  }
  else {
    temp_v2 = 0;
  }
  temp_v0 = *(unsigned int *)(*param_1 + 8);
  if (*(int *)(temp_v2 + 8) != 0) {
    piVar3 = (int *)(temp_v2 + 8 + *(int *)(temp_v2 + 8));
  }
  else {
    piVar3 = (int *)0x0;
  }
  if ((piVar3 != (int *)0x0 && temp_v0 != 1) && temp_v0 != 0) {
    piVar5 = piVar3;
    if (*piVar3 == 0x20000004) {
      temp_v1 = piVar3[7];
      piVar5 = (int *)0x0;
      if (temp_v1 != 0) {
        piVar5 = (int *)(temp_v1 + (int)(piVar3 + 7));
      }
    }
    temp_v3 = piVar5[10] - 1;
  }
  *(unsigned int *)(temp_v2 + 0x28) = (*(unsigned int *)(temp_v2 + 0x28) & 0xfff0ffff) | ((temp_v3 & 0xf) << 0x10);
  return;
}

} /* extern "C" */
