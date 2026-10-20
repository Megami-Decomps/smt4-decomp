/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_SoundArchiveLoader_detail_LoadWaveArchiveByWaveSoundFile` (_code @ 0x37b73c, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ac444(unsigned char [8]);
int nw_snd_internal_SoundArchiveLoader_LoadWaveArchiveImpl(unsigned int, unsigned int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_002ac444. */
/* Supplied declaration required: nw_snd_internal_SoundArchiveLoader_LoadWaveArchiveImpl. */
extern int nw_snd_internal_WaveSoundFileReader_ReadNoteInfo(unsigned char *, unsigned int *, unsigned int, unsigned int);


void nw_snd_internal_SoundArchiveLoader_detail_LoadWaveArchiveByWaveSoundFile
               (unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int uStack_30;
  unsigned int uStack_2c;
  unsigned char uStack_28;
  unsigned char uStack_27;
  unsigned char uStack_26;
  unsigned char uStack_25;
  unsigned char uStack_24;
  unsigned char temp_v3 [8];
  
  if (param_2 == 0) {
    return;
  }
  FUN_002ac444(temp_v3);
  uStack_28 = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  uStack_25 = 0;
  uStack_24 = 0;
  temp_v2 = nw_snd_internal_WaveSoundFileReader_ReadNoteInfo(temp_v3,(unsigned int *)&uStack_30,param_3,0);
  temp_v1 = uStack_2c;
  temp_v0 = uStack_30;
  if (temp_v2 != 0) {
    uStack_30 = 8;
    uStack_2c = 0;
    nw_snd_internal_SoundArchiveLoader_LoadWaveArchiveImpl(param_1,temp_v0,temp_v1,param_4);
  }
  return;
}

} /* extern "C" */
