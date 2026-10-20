/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00460a7c` (_code @ 0x460a7c, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0050ae88(void);
int nw_snd_internal_WaveFile_FileHeader_GetInfoBlock(void);

/* Supplied declaration required: FUN_0050ae88. */
/* Supplied declaration required: nw_snd_internal_WaveFile_FileHeader_GetInfoBlock. */


int * FUN_00460a7c(int *param_1,int *param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  
  *(char *)(param_1 + 3) = (char)param_3;
  *param_1 = 0;
  param_1[1] = 0;
  if (((param_3 == 0) && (*param_2 == 0x56415743)) && (param_2[2] + 0xfe000000U < 0x10101)) {
    *param_1 = (int)param_2;
    nw_snd_internal_WaveFile_FileHeader_GetInfoBlock();
    piVar1 = (int *)*param_1;
    FUN_0050ae88();
    if (((param_2 != (int *)0x0) && (piVar1 != (int *)0x0)) &&
       ((*param_2 == 0x4f464e49 && (*piVar1 == 0x41544144)))) {
      param_1[2] = (int)(piVar1 + 2);
      param_1[1] = (int)(param_2 + 2);
    }
  }
  return param_1;
}

} /* extern "C" */
