/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundArchive_SetExternalFileRoot` (_code @ 0x12f5c8, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_002c30c4(char *);


void nw_snd_SoundArchive_SetExternalFileRoot(int param_1,char *param_2)

{
  unsigned int temp_v0;
  char *pcVar2;
  int temp_v1;
  char *pcVar4;
  char *pcVar5;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002c30c4(param_2);
  pcVar4 = (char *)(param_1 + 8);
  temp_v2 = 0;
  if ((temp_v0 >= 0xff) || (temp_v0 != 0)) {
    pcVar2 = param_2;
    pcVar5 = pcVar4;
    do {
      temp_v2 = temp_v2 + 1;
      pcVar4 = pcVar5 + 1;
      *pcVar5 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      if (*pcVar2 == '\0') break;
      temp_v3 = temp_v0;
      if (temp_v0 >= 0xff) {
        temp_v3 = 0xff;
      }
      pcVar5 = pcVar4;
    } while (temp_v2 < temp_v3);
  }
  *pcVar4 = '\0';
  if (param_2[temp_v0 - 1] != '/') {
    temp_v1 = param_1 + temp_v0;
    temp_v0 = temp_v0 + 1;
    *(unsigned char *)(temp_v1 + 8) = 0x2f;
  }
  *(unsigned char *)(param_1 + temp_v0 + 8) = 0;
  return;
}

} /* extern "C" */
