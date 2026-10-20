/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b748` (_code @ 0x37b748, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ac444(unsigned char [8]);
int nw_snd_internal_SoundArchiveLoader_LoadWaveArchiveImpl(unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_4: 6 slot(s), 9 byte(s) */
typedef struct {
    unsigned char sp24; /* 0x24: local_24 */
    unsigned char sp25; /* 0x25: local_25 */
    unsigned char sp26; /* 0x26: local_26 */
    unsigned char sp27; /* 0x27: local_27 */
    unsigned char sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

/* Supplied declaration required: FUN_002ac444. */
/* Supplied declaration required: nw_snd_internal_SoundArchiveLoader_LoadWaveArchiveImpl. */
extern int nw_snd_internal_WaveSoundFileReader_ReadNoteInfo(unsigned char *, unsigned int *, unsigned int, unsigned int);


void FUN_0037b748(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int uStack_2c;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9 [8];
  
  FUN_002ac444(temp_v9);
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v2 = nw_snd_internal_WaveSoundFileReader_ReadNoteInfo(temp_v9,(unsigned int *)&temp_v3,param_3,0);
  temp_v1 = uStack_2c;
  temp_v0 = temp_v3;
  if (temp_v2 != 0) {
    temp_v3 = 8;
    uStack_2c = 0;
    nw_snd_internal_SoundArchiveLoader_LoadWaveArchiveImpl(param_1,temp_v0,temp_v1,param_4);
  }
  return;
}

} /* extern "C" */
