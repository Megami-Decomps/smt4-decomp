/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_HemiSphereLight_GetMemorySizeInternal` (_code @ 0x1bf594, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_6_stack;

/* Supplied declaration required: FUN_001ca2d0. */
/* Supplied declaration required: nw_gfx_AnimGroup_GetMemorySizeForInitialize. */


void nw_gfx_HemiSphereLight_GetMemorySizeInternal
               (int *param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5,
               unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  *param_1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x17c;
  FUN_001ca2d0(param_1,param_2,param_3,param_4,param_5,param_6);
  temp_v3 = (param_3 << 0x10) >> 0x18 != 0;
  *param_1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0xe8;
  temp_v0 = 0;
  if (temp_v3) {
    temp_v0 = *(int *)(param_2 + 0x28);
  }
  if ((!temp_v3 || temp_v0 == 0) || temp_v0 < 0) {
    return;
  }
  temp_v0 = *(int *)(param_2 + 0x2c);
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + param_2 + 0x2c;
  }
  else {
    temp_v0 = 0;
  }
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v2 = *(int *)(temp_v0 + 0x28);
    if (temp_v2 != 0) {
      temp_v1 = temp_v2 + temp_v0 + 0x28;
    }
  }
  *param_1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x68;
  nw_gfx_AnimGroup_GetMemorySizeForInitialize(param_1,temp_v1,1);
  return;
}
