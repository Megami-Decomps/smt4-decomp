/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_WaveSoundFileReader_ReadWaveSoundInfo` (_code @ 0x3e6d20, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a7c80(unsigned int *, unsigned int);
int FUN_003e6240(unsigned int);
int nw_snd_internal_WaveSoundFile_InfoBlockBody_GetWaveSoundData(unsigned int, unsigned int);
int nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetPan(void);
int nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetPitch(void);
int nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetSendValue(unsigned int, int, unsigned int *, int);
int nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetSurroundPan(void);

/* Supplied declaration required: FUN_002a7c80. */
extern unsigned int offsetRefResolve4(void);
/* Supplied declaration required: FUN_003e6240. */
/* Supplied declaration required: nw_snd_internal_WaveSoundFile_InfoBlockBody_GetWaveSoundData. */
/* Supplied declaration required: nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetPan. */
/* Supplied declaration required: nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetPitch. */
/* Supplied declaration required: nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetSendValue. */
/* Supplied declaration required: nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetSurroundPan. */


unsigned int
nw_snd_internal_WaveSoundFileReader_ReadWaveSoundInfo
          (int param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0; 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int in_s0;
  
  nw_snd_internal_WaveSoundFile_InfoBlockBody_GetWaveSoundData(*(unsigned int *)(param_1 + 4),param_3)
  ;
  temp_v0 = offsetRefResolve4();
  nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetPitch();
  *param_2 = in_s0;
  temp_v1 = temp_v0;
  nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetPan();
  *(char *)((int)param_2 + 9) = (char)temp_v1;
  temp_v1 = temp_v0;
  nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetSurroundPan();
  *(char *)((int)param_2 + 10) = (char)temp_v1;
  nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetSendValue(temp_v0,(int)param_2 + 0xb,param_2 + 3,2);
  FUN_003e6240(temp_v0);
  FUN_002a7c80(param_2 + 1,temp_v0);
  return 1;
}

} /* extern "C" */
