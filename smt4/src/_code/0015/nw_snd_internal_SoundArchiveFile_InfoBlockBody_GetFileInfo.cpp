#include "romwright_types.h"

extern "C" {


int nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetFileInfo(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)(param_1 + *(int *)(param_1 + 0x34));
  if (*puVar1 <= (param_2 & 0xffffff)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
  }
  return temp_v0;
}

} /* extern "C" */
