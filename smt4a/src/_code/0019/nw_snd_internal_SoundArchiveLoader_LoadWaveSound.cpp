/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_SoundArchiveLoader_LoadWaveSound` (_code @ 0x190898, 0x194 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00190fc8(unsigned char [12], int);
int FUN_001a8e14(...);
int nw_snd_internal_SoundArchiveLoader_LoadImpl(int *, unsigned int, unsigned int, unsigned int);
int nw_snd_internal_SoundArchiveLoader_LoadWaveArchiveImpl(int *, unsigned int, unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_6: 7 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned char sp3D; /* 0x3d: local_3d */
    unsigned char sp3E; /* 0x3e: local_3e */
    unsigned char sp3F; /* 0x3f: local_3f */
    unsigned char sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_6_stack;

/* Supplied declaration required: FUN_00190fc8. */
extern int soundInfoOwnerReadInfo(int, int, unsigned int *);
/* Supplied declaration required: FUN_001a8e14. */
extern unsigned int *FUN_001b3da8(int, int);
/* Supplied declaration required: nw_snd_internal_SoundArchiveLoader_LoadImpl. */
/* Supplied declaration required: nw_snd_internal_SoundArchiveLoader_LoadWaveArchiveImpl. */
extern int nw_snd_internal_WaveSoundFileReader_ReadNoteInfo(unsigned char *, unsigned int *, unsigned int, unsigned int);


void nw_snd_internal_SoundArchiveLoader_LoadWaveSound
               (int *param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
               int param_6)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11 [12];
  
  temp_v0 = FUN_001a8e14(param_1[1]);
  if ((param_4 & 2) != 0) {
    temp_v4 = 0;
    piVar2 = param_1;
    nw_snd_internal_SoundArchiveLoader_LoadImpl(param_1,temp_v0,param_3,param_5);
    if (piVar2 == (int *)0x0) {
      return;
    }
  }
  if ((param_4 & 8) != 0) {
    temp_v1 = (**(romwright_code **)(*param_1 + 0x10))(param_1,temp_v0);
    if (temp_v1 != 0) {
      temp_v6 = 0;
      temp_v5 = 0;
      temp_v7 = 0;
      temp_v2 = soundInfoOwnerReadInfo(param_1[1],param_2,&temp_v4);
      temp_v3 = temp_v4;
      if (temp_v2 != 0) {
        FUN_00190fc8(temp_v11,temp_v1);
        temp_v6 = 0;
        temp_v7 = 0;
        temp_v8 = 0;
        temp_v9 = 0;
        temp_v10 = 0;
        temp_v1 = nw_snd_internal_WaveSoundFileReader_ReadNoteInfo(temp_v11,&temp_v4,temp_v3,0);
        temp_v0 = temp_v5;
        temp_v3 = temp_v4;
        if (temp_v1 != 0) {
          temp_v5 = param_5;
          temp_v4 = param_4;
          nw_snd_internal_SoundArchiveLoader_LoadWaveArchiveImpl(param_1,temp_v3,temp_v0,param_3);
        }
      }
    }
    else {
      if (param_6 == -1) {
        param_6 = param_2;
      }
      puVar5 = (unsigned int *)FUN_001b3da8(param_1[1],param_6);
      temp_v3 = 0;
      if (temp_v3 < *puVar5) {
        do {
          if ((param_4 & 8) != 0) {
            temp_v0 = FUN_001a8e14(param_1[1],puVar5[temp_v3 + 1]);
            temp_v4 = 1;
            piVar2 = param_1;
            nw_snd_internal_SoundArchiveLoader_LoadImpl(param_1,temp_v0,param_3,param_5);
            if (piVar2 == (int *)0x0) {
              return;
            }
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < *puVar5);
      }
    }
  }
  return;
}

} /* extern "C" */
