#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0061978c; /* 0x61978c */


void FUN_0013dee0(unsigned char param_1)

{
  (*(unsigned char *)((unsigned char *)&DAT_0061978c + 0x1e5)) = param_1;
  return;
}

} /* extern "C" */
