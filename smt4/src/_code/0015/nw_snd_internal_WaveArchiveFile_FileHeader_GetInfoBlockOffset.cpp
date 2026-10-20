#include "romwright_types.h"

extern "C" {


unsigned int nw_snd_internal_WaveArchiveFile_FileHeader_GetInfoBlockOffset(int param_1)

{
  if (*(short *)(param_1 + 0x14) == 0x6800) {
    param_1 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6800) {
    param_1 = param_1 + 0x20;
  }
  else {
    param_1 = 0;
  }
  return *(unsigned int *)(param_1 + 4);
}

} /* extern "C" */
