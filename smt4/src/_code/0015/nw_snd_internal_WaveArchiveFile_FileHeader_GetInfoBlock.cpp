#include "romwright_types.h"

extern "C" {


int nw_snd_internal_WaveArchiveFile_FileHeader_GetInfoBlock(int param_1)

{
  int temp_v0;
  
  if (*(short *)(param_1 + 0x14) == 0x6800) {
    temp_v0 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6800) {
    temp_v0 = param_1 + 0x20;
  }
  else {
    temp_v0 = 0;
  }
  return param_1 + *(int *)(temp_v0 + 4);
}

} /* extern "C" */
