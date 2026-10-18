/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_SoundArchiveLoader_IsWaveSoundDataLoaded` (_code @ 0x132cbc, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 7 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned char sp2D; /* 0x2d: local_2d */
    unsigned char sp2E; /* 0x2e: local_2e */
    unsigned char sp2F; /* 0x2f: local_2f */
    unsigned char sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern int FUN_0014d478(int, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002aa984. */
/* Supplied declaration required: FUN_002ac444. */
extern unsigned int FUN_002ac780(int);
extern int nw_snd_internal_WaveSoundFileReader_ReadNoteInfo(unsigned char *, unsigned int *, unsigned int, unsigned int);


void nw_snd_internal_SoundArchiveLoader_IsWaveSoundDataLoaded
               (int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10 [12];
  
  temp_v0 = FUN_002ac780(param_1[1]);
  temp_v1 = (**(romwright_code **)(*param_1 + 0x10))(param_1,temp_v0);
  if ((((param_3 & 10) == 0) || (temp_v1 != 0)) && ((param_3 & 8) != 0)) {
    temp_v5 = 0;
    temp_v4 = 0;
    temp_v6 = 0;
    temp_v2 = FUN_0014d478(param_1[1],param_2,(unsigned int *)&temp_v3);
    temp_v0 = temp_v3;
    if (temp_v2 != 0) {
      FUN_002ac444(temp_v10,temp_v1);
      temp_v5 = 0;
      temp_v6 = 0;
      temp_v7 = 0;
      temp_v8 = 0;
      temp_v9 = 0;
      temp_v1 = nw_snd_internal_WaveSoundFileReader_ReadNoteInfo(temp_v10,(unsigned int *)&temp_v3,temp_v0,0);
      if (temp_v1 != 0) {
        FUN_002aa984(param_1,temp_v3,temp_v4);
      }
    }
  }
  return;
}
