/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_res_ResMaterial_Cleanup` (_code @ 0x15b58c, 0x120 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0015d91c. */
/* Supplied declaration required: FUN_0015d950. */


void nw_gfx_res_ResMaterial_Cleanup(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = 0;
  temp_v0 = *(unsigned int *)(*param_1 + 0x18);
  *(unsigned int *)(*param_1 + 0x18) = temp_v0 & 0xffffffbf;
  *(unsigned int *)(*param_1 + 0x18) = temp_v0 & 0xfffffdbf;
  temp_v3 = *(int *)(*param_1 + 0x288);
  if (temp_v3 != 0) {
    temp_v3 = *param_1 + 0x288 + temp_v3;
  }
  else {
    temp_v3 = 0;
  }
  if (temp_v3 != 0) {
    FUN_0015d950(&temp_v3);
  }
  *(unsigned int *)(*param_1 + 0x18) = *(unsigned int *)(*param_1 + 0x18) & 0xffffff7f;
  temp_v1 = *(int *)(*param_1 + 0x284);
  if (temp_v1 != 0) {
    puVar2 = (unsigned int *)(*param_1 + 0x284 + temp_v1);
  }
  else {
    puVar2 = (unsigned int *)0x0;
  }
  if ((puVar2 != (unsigned int *)0x0) && ((~*puVar2 & 0x80000001) != 0)) {
    puVar2 = (unsigned int *)0x0;
  }
  if (puVar2 != (unsigned int *)0x0) {
    puVar2[7] = 0;
  }
  temp_v1 = 0;
  *(unsigned int *)(*param_1 + 0x18) = *(unsigned int *)(*param_1 + 0x18) & 0xfffffeff;
  do {
    piVar3 = (int *)(*param_1 + temp_v1 * 4 + 0x274);
    temp_v3 = *piVar3;
    if (temp_v3 != 0) {
      temp_v3 = (int)piVar3 + temp_v3;
    }
    else {
      temp_v3 = 0;
    }
    if (temp_v3 != 0) {
      FUN_0015d91c(&temp_v3);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  temp_v1 = *(int *)(*param_1 + 0x280);
  if (temp_v1 != 0) {
    temp_v1 = *param_1 + 0x280 + temp_v1;
  }
  else {
    temp_v1 = 0;
  }
  if (temp_v1 != 0) {
    temp_v1 = *(int *)(*param_1 + 0x280);
    if (temp_v1 != 0) {
      temp_v2 = temp_v1 + *param_1 + 0x280;
    }
    temp_v3 = temp_v2;
    FUN_0015d91c(&temp_v3);
  }
  return;
}
