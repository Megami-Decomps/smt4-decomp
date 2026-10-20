/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cb8e4` (_code @ 0x1cb8e4, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d12a0(void);
int nw_snd_internal_SequenceSoundFile_FileHeader_GetDataBlock(void);

/* Supplied declaration required: FUN_001d12a0. */
/* Supplied declaration required: nw_snd_internal_SequenceSoundFile_FileHeader_GetDataBlock. */


int * FUN_001cb8e4(int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*param_2 == 0x51455343) && (param_2[2] - 0x1000000U < 0x10001)) {
    *param_1 = (int)param_2;
    nw_snd_internal_SequenceSoundFile_FileHeader_GetDataBlock();
    param_1[1] = (int)(param_2 + 2);
    temp_v0 = *param_1;
    FUN_001d12a0();
    param_1[2] = temp_v0 + 8;
    return param_1;
  }
  return param_1;
}

} /* extern "C" */
