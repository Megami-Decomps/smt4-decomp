/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_res_ResTextureMapper_SetTexture` (_code @ 0x2a2b3c, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015b6ac(void);
int FUN_0015b890(void);
int FUN_0015b9ec(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_0015b6ac. */
/* Supplied declaration required: FUN_0015b890. */
/* Supplied declaration required: FUN_0015b9ec. */


void nw_gfx_res_ResTextureMapper_SetTexture(int *param_1,int *param_2)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  
  piVar1 = (int *)(*param_1 + 8);
  temp_v0 = *piVar1;
  if (temp_v0 != 0) {
    piVar1 = (int *)((int)piVar1 + temp_v0);
  }
  if (temp_v0 == 0) {
    piVar1 = (int *)0x0;
  }
  piVar1 = piVar1 + 7;
  piVar3 = param_2;
  if (*param_2 == 0x20000004) {
    if (param_2[7] != 0) {
      piVar3 = (int *)((int)param_2 + param_2[7] + 0x1c);
    }
    else {
      piVar3 = (int *)0x0;
    }
  }
  if (piVar3 != (int *)0x0) {
    *piVar1 = (int)piVar3 - (int)piVar1;
  }
  else {
    *piVar1 = 0;
  }
  if (*(int *)*param_1 == -0x80000000) {
    piVar1 = param_2;
    if (*param_2 == 0x20000004) {
      temp_v0 = param_2[7];
      piVar1 = (int *)0x0;
      if (temp_v0 != 0) {
        piVar1 = (int *)(temp_v0 + (int)(param_2 + 7));
      }
    }
    temp_v0 = *piVar1;
    if (temp_v0 == 0x20000009) {
      FUN_0015b6ac();
      return;
    }
    if (temp_v0 == 0x20000011) {
      FUN_0015b890();
      return;
    }
    if (temp_v0 == 0x20000021) {
      FUN_0015b9ec();
      return;
    }
  }
  return;
}

} /* extern "C" */
