/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_internal_CalcSetupActivateVertexAttributeCommandSize` (_code @ 0x140328, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;


int nw_gfx_internal_CalcSetupActivateVertexAttributeCommandSize(int param_1,int param_2)

{
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0xc;
  temp_v2 = 0;
  if (temp_v2 < *(int *)(param_1 + 0x38)) {
    do {
      if (*(int *)(param_1 + 0x3c) != 0) {
        temp_v0 = param_1 + 0x3c + *(int *)(param_1 + 0x3c);
      }
      else {
        temp_v0 = 0;
      }
      piVar2 = (int *)(temp_v0 + temp_v2 * 4);
      temp_v0 = *piVar2;
      temp_v2 = temp_v2 + 1;
      if (temp_v0 != 0) {
        temp_v0 = (int)piVar2 + temp_v0;
      }
      else {
        temp_v0 = 0;
      }
      if ((*(unsigned int *)(temp_v0 + 8) & 1) != 0) {
        temp_v1 = temp_v1 + 6;
      }
      else {
        temp_v1 = temp_v1 + 4;
      }
    } while (temp_v2 < *(int *)(param_1 + 0x38));
  }
  if (-1 < *(int *)(param_2 + 0x10)) {
    temp_v1 = temp_v1 + 4;
  }
  return temp_v1 << 2;
}
