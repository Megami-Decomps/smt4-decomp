#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0061978c; /* 0x61978c */


void FUN_0015059c(unsigned char param_1)

{
  (*(unsigned char *)((unsigned char *)&DAT_0061978c + 0x1e6)) = param_1;
  return;
}

} /* extern "C" */
