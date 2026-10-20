/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e6efc` (_code @ 0x3e6efc, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int *nw_snd_internal_StreamSoundFile_InfoBlockBody_GetTrackInfoTable(unsigned int);
extern unsigned char *nw_snd_internal_StreamSoundFile_TrackInfoTable_GetTrackInfo(int *, int);


unsigned int FUN_003e6efc(int param_1,unsigned char *param_2,int param_3)

{
  int *piVar1;
  unsigned int temp_v0;
  unsigned char *puVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  piVar1 = (int *)nw_snd_internal_StreamSoundFile_InfoBlockBody_GetTrackInfoTable
                            (*(unsigned int *)(param_1 + 4));
  if (param_3 >= *piVar1) {
    temp_v0 = 0;
  }
  else {
    puVar3 = (unsigned char *)
             nw_snd_internal_StreamSoundFile_TrackInfoTable_GetTrackInfo(piVar1,param_3);
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
    param_2[2] = puVar3[2];
    param_2[3] = puVar3[3];
    temp_v3 = *(unsigned int *)(puVar3 + *(int *)(puVar3 + 8));
    temp_v4 = temp_v3 == 2;
    param_2[4] = (char)*(unsigned int *)(puVar3 + *(int *)(puVar3 + 8));
    if (temp_v3 >= 3) {
      temp_v3 = 2;
    }
    else {
      temp_v4 = temp_v3 == 0;
    }
    temp_v1 = 0;
    if (!temp_v4) {
      do {
        temp_v2 = temp_v1 + 1;
        param_2[temp_v1 + 5] = puVar3[temp_v1 + *(int *)(puVar3 + 8) + 4];
        temp_v1 = temp_v2;
      } while (temp_v2 < temp_v3);
    }
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
