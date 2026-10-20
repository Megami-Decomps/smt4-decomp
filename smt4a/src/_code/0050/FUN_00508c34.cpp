/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00508c34` (_code @ 0x508c34, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a90f0(unsigned int *, unsigned int);
int FUN_00507dd8(void);
int FUN_00507ee8(unsigned int);
int FUN_00507f20(void);
int FUN_00507f48(void);
int nw_snd_internal_WaveSoundFile_InfoBlockBody_GetWaveSoundData(int, unsigned int);
int nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetPan(void);
int nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetPitch(void);
int nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetSendValue(unsigned int, int, unsigned int *, int);
int nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetSurroundPan(void);

/* Supplied declaration required: FUN_001a90f0. */
extern unsigned int FUN_00507dcc(void);
/* Supplied declaration required: FUN_00507dd8. */
/* Supplied declaration required: FUN_00507ee8. */
/* Supplied declaration required: FUN_00507f20. */
/* Supplied declaration required: FUN_00507f48. */
/* Supplied declaration required: nw_snd_internal_WaveSoundFile_InfoBlockBody_GetWaveSoundData. */
/* Supplied declaration required: nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetPan. */
/* Supplied declaration required: nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetPitch. */
/* Supplied declaration required: nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetSendValue. */
/* Supplied declaration required: nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetSurroundPan. */


unsigned int FUN_00508c34(int *param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0; 10 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int in_s0;
  
  nw_snd_internal_WaveSoundFile_InfoBlockBody_GetWaveSoundData(param_1[1],param_3);
  temp_v1 = FUN_00507dcc();
  nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetPitch();
  *param_2 = in_s0;
  temp_v2 = temp_v1;
  nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetPan();
  *(char *)((int)param_2 + 9) = (char)temp_v2;
  temp_v2 = temp_v1;
  nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetSurroundPan();
  *(char *)((int)param_2 + 10) = (char)temp_v2;
  nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetSendValue(temp_v1,(int)param_2 + 0xb,param_2 + 3,2);
  temp_v2 = temp_v1;
  FUN_00507ee8(temp_v1);
  FUN_001a90f0(param_2 + 1,temp_v2);
  if (*(unsigned int *)(*param_1 + 8) >= 0x1000100) {
    temp_v2 = temp_v1;
    FUN_00507dd8();
    *(char *)((int)param_2 + 0xe) = (char)temp_v2;
    temp_v2 = temp_v1;
    FUN_00507f20();
    *(char *)((int)param_2 + 0xf) = (char)temp_v2;
    FUN_00507f48();
    temp_v0 = (unsigned char)temp_v1;
  }
  else {
    *(unsigned char *)((int)param_2 + 0xe) = 0x40;
    temp_v0 = 0;
    *(unsigned char *)((int)param_2 + 0xf) = 0;
  }
  *(unsigned char *)(param_2 + 4) = temp_v0;
  return 1;
}

} /* extern "C" */
