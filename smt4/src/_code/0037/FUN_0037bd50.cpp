/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037bd50` (_code @ 0x37bd50, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_SequenceSoundFile_FileHeader_GetDataBlock(void);
int nw_snd_internal_SequenceSoundFile_FileHeader_GetLabelBlock(void);

/* Supplied declaration required: nw_snd_internal_SequenceSoundFile_FileHeader_GetDataBlock. */
/* Supplied declaration required: nw_snd_internal_SequenceSoundFile_FileHeader_GetLabelBlock. */


int * FUN_0037bd50(int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  temp_v0 = 0x51455343;
  if (*param_2 == 0x51455343) {
    temp_v0 = param_2[2];
  }
  if (*param_2 == 0x51455343 && temp_v0 == 0x1000000) {
    *param_1 = (int)param_2;
    nw_snd_internal_SequenceSoundFile_FileHeader_GetDataBlock();
    param_1[1] = (int)(param_2 + 2);
    temp_v0 = *param_1;
    nw_snd_internal_SequenceSoundFile_FileHeader_GetLabelBlock();
    param_1[2] = temp_v0 + 8;
  }
  return param_1;
}

} /* extern "C" */
