#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004e3d0c; /* 0x4e3d0c */


void FUN_002c565c(int param_1,int param_2)

{
  if (param_1 < 0x200) {
    (&DAT_004e3d0c)[param_1] = param_2 != 0;
  }
  return;
}

} /* extern "C" */
