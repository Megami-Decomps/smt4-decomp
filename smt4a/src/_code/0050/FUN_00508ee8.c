/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00508ee8` (_code @ 0x508ee8, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char *FUN_00508508(int *, int);
extern int *nw_snd_internal_StreamSoundFile_InfoBlockBody_GetTrackInfoTable(unsigned int);


unsigned int FUN_00508ee8(int param_1,unsigned char *param_2,int param_3)

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
  temp_v0 = 0;
  if (piVar1 != (int *)0x0) {
    if (param_3 >= *piVar1) {
      temp_v0 = 0;
    }
    else {
      puVar3 = (unsigned char *)FUN_00508508(piVar1,param_3);
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
  }
  return temp_v0;
}
