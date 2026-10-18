/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SceneEnvironmentSetting_GetMemorySizeInternal` (_code @ 0x12d3f0, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0012d3f0_arg1 fn_0012d3f0_arg1;
struct fn_0012d3f0_arg1 {
    unsigned char pad_0x0[0x18];
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x4];
    int field_0x20; /* +0x20 */
    int field_0x24; /* +0x24 */
    int field_0x28; /* +0x28 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_2_stack;


/* WARNING: Type propagation algorithm not settling */

void nw_gfx_SceneEnvironmentSetting_GetMemorySizeInternal(int *param_1,fn_0012d3f0_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  unsigned int *puVar2;
  int temp_v0;
  int temp_v1;
  unsigned char *puVar5;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x3c;
  *param_1 = temp_v0;
  *param_1 = (((temp_v0 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + param_2->field_0x20 * 0xc;
  temp_v0 = param_2->field_0x24;
  piVar1 = &param_2->field_0x24;
  if (temp_v0 != 0) {
    piVar1 = (int *)((int)piVar1 + temp_v0);
  }
  temp_v1 = param_2->field_0x20;
  if (temp_v0 == 0) {
    piVar1 = (int *)0x0;
  }
  if (param_2->field_0x24 != 0) {
    puVar2 = (unsigned int *)((int)&param_2->field_0x24 + param_2->field_0x24);
  }
  else {
    puVar2 = (unsigned int *)0x0;
  }
  if (puVar2 != piVar1 + temp_v1) {
    temp_v0 = param_1[1];
    do {
      puVar5 = (unsigned char *)*puVar2;
      temp_v3 = puVar5 != (unsigned char *)0x0;
      if (temp_v3) {
        puVar5 = puVar5 + (int)puVar2;
      }
      if (!temp_v3) {
        puVar5 = (unsigned char *)0x0;
      }
      temp_v2 = (((*param_1 + temp_v0) - 1U) & ~(temp_v0 - 1U)) + 0x80;
      *param_1 = temp_v2;
      puVar2 = puVar2 + 1;
      *param_1 = (((temp_v2 + temp_v0) - 1U) & ~(temp_v0 - 1U)) + *(int *)(puVar5 + 4) * 4;
    } while (puVar2 != piVar1 + temp_v1);
  }
  temp_v0 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + param_2->field_0x18 * 8;
  *param_1 = temp_v0;
  *param_1 = (((temp_v0 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + param_2->field_0x28 * 8;
  return;
}
