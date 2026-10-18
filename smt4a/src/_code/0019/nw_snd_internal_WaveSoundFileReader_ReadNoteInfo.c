/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_WaveSoundFileReader_ReadNoteInfo` (_code @ 0x194ed8, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_001a8a50(unsigned int);
/* Supplied declaration required: FUN_001a8acc. */
/* Supplied declaration required: FUN_001a8b5c. */
/* Supplied declaration required: FUN_001a8b84. */
/* Supplied declaration required: FUN_001a90f0. */
extern unsigned int nw_snd_internal_WaveSoundFile_InfoBlockBody_GetWaveSoundData(unsigned int, unsigned int);
/* Supplied declaration required: nw_snd_internal_WaveSoundFile_NoteInfo_GetOriginalKey. */
/* Supplied declaration required: nw_snd_internal_WaveSoundFile_NoteInfo_GetSurroundPan. */
/* Supplied declaration required: nw_snd_internal_WaveSoundFile_NoteInfo_GetVolume. */
extern unsigned int *nw_snd_internal_WaveSoundFile_WaveSoundData_GetNoteInfo(unsigned int, unsigned int);


unsigned int
nw_snd_internal_WaveSoundFileReader_ReadNoteInfo
          (int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_s0; 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int in_s0;
  
  temp_v0 = nw_snd_internal_WaveSoundFile_InfoBlockBody_GetWaveSoundData
                    (*(unsigned int *)(param_1 + 4),param_3);
  puVar2 = (unsigned int *)nw_snd_internal_WaveSoundFile_WaveSoundData_GetNoteInfo(temp_v0,param_4);
  puVar3 = (unsigned int *)FUN_001a8a50(*(unsigned int *)(param_1 + 4));
  temp_v1 = *puVar2;
  if (temp_v1 < *puVar3) {
    if (puVar3 + temp_v1 * 2 + 1 != (unsigned int *)0x0) {
      *param_2 = puVar3[temp_v1 * 2 + 1];
      param_2[1] = puVar3[temp_v1 * 2 + 2];
      FUN_001a8b84(puVar2);
      param_2[5] = in_s0;
      puVar3 = puVar2;
      FUN_001a8acc(puVar2);
      FUN_001a90f0(param_2 + 2,puVar3);
      puVar3 = puVar2;
      nw_snd_internal_WaveSoundFile_NoteInfo_GetOriginalKey();
      *(char *)((int)param_2 + 0xd) = (char)puVar3;
      puVar3 = puVar2;
      FUN_001a8b5c();
      *(char *)((int)param_2 + 0xe) = (char)puVar3;
      puVar3 = puVar2;
      nw_snd_internal_WaveSoundFile_NoteInfo_GetSurroundPan();
      *(char *)((int)param_2 + 0xf) = (char)puVar3;
      nw_snd_internal_WaveSoundFile_NoteInfo_GetVolume();
      *(char *)(param_2 + 4) = (char)puVar2;
      return 1;
    }
  }
  return 0;
}
