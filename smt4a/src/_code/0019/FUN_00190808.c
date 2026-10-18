/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00190808` (_code @ 0x190808, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001a8f48. */
/* Supplied declaration required: FUN_001a901c. */
/* Supplied declaration required: nw_snd_internal_GroupFile_FileHeader_GetInfoBlock. */


int * FUN_00190808(int *param_1,int *param_2)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*param_2 == 0x50524743) && (param_2[2] - 0x1000000U < 0x10001)) {
    piVar1 = param_2;
    nw_snd_internal_GroupFile_FileHeader_GetInfoBlock();
    piVar2 = param_2;
    FUN_001a8f48();
    FUN_001a901c();
    if ((piVar1 != (int *)0x0) && (piVar2 != (int *)0x0)) {
      *param_1 = (int)(piVar1 + 2);
      param_1[1] = (int)(piVar2 + 2);
      if (param_2 != (int *)0x0) {
        param_1[2] = (int)(param_2 + 2);
      }
    }
  }
  return param_1;
}
