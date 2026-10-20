/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_StreamSoundFileReader_ReadStreamSoundInfo` (_code @ 0x3e6ecc, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *nw_snd_internal_StreamSoundFile_InfoBlockBody_GetStreamSoundInfo(unsigned int);


unsigned int
nw_snd_internal_StreamSoundFileReader_ReadStreamSoundInfo(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  puVar1 = (unsigned int *)
           nw_snd_internal_StreamSoundFile_InfoBlockBody_GetStreamSoundInfo
                     (*(unsigned int *)(param_1 + 4));
  temp_v0 = puVar1[1];
  temp_v1 = puVar1[2];
  temp_v2 = puVar1[3];
  temp_v3 = puVar1[4];
  temp_v4 = puVar1[5];
  temp_v5 = puVar1[6];
  temp_v6 = puVar1[7];
  *param_2 = *puVar1;
  param_2[1] = temp_v0;
  param_2[2] = temp_v1;
  param_2[3] = temp_v2;
  param_2[4] = temp_v3;
  param_2[5] = temp_v4;
  param_2[6] = temp_v5;
  param_2[7] = temp_v6;
  temp_v0 = puVar1[9];
  temp_v1 = puVar1[10];
  temp_v2 = puVar1[0xb];
  temp_v3 = puVar1[0xc];
  temp_v4 = puVar1[0xd];
  param_2[8] = puVar1[8];
  param_2[9] = temp_v0;
  param_2[10] = temp_v1;
  param_2[0xb] = temp_v2;
  param_2[0xc] = temp_v3;
  param_2[0xd] = temp_v4;
  return 1;
}

} /* extern "C" */
