/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b69f0` (_code @ 0x1b69f0, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nnnstdMemCpy(int, unsigned int, unsigned int);
int nw_gfx_internal_FastWordCopyAsm_6(...);
int nw_gfx_res_ResPrimitive_SetupDrawCommand(int **, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_4_stack;

extern int DAT_005b40e0; /* 0x5b40e0 */

/* Supplied declaration required: nnnstdMemCpy. */
/* Supplied declaration required: nw_gfx_internal_FastWordCopyAsm_6. */
/* Supplied declaration required: nw_gfx_res_ResPrimitive_SetupDrawCommand. */


void FUN_001b69f0(int param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  unsigned int temp_v1;
  int *temp_v2;
  
  piVar2 = *(int **)(param_1 + 8);
  temp_v2 = param_2;
  nw_gfx_internal_FastWordCopyAsm_6(DAT_005b40e0,piVar2 + 5,param_3,param_4,param_1);
  if (-1 < *(int *)(piVar2[2] + 0x10)) {
    nw_gfx_internal_FastWordCopyAsm_6();
  }
  if ((temp_v2[4] & 1U) == 0) {
    nw_gfx_res_ResPrimitive_SetupDrawCommand
              (&temp_v2,*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 8) != 0);
  }
  temp_v0 = temp_v2[1];
  if (temp_v0 != 0) {
    piVar2 = (int *)(temp_v0 + (int)(temp_v2 + 1));
  }
  if (temp_v0 == 0) {
    piVar2 = (int *)0x0;
  }
  piVar3 = piVar2 + *temp_v2;
  for (; piVar2 != piVar3; piVar2 = piVar2 + 1) {
    if (*piVar2 != 0) {
      temp_v0 = *piVar2 + (int)piVar2;
    }
    else {
      temp_v0 = 0;
    }
    if (*(char *)(temp_v0 + 5) != '\0') {
      temp_v1 = *(unsigned int *)(temp_v0 + 0x1c);
      nnnstdMemCpy(DAT_005b40e0,*(unsigned int *)(temp_v0 + 0x18),temp_v1);
      DAT_005b40e0 = DAT_005b40e0 + (temp_v1 & 0xfffffffc);
    }
  }
  return;
}

} /* extern "C" */
