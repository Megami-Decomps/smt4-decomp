#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005f0c7c; /* 0x5f0c7c */

extern int FUN_0018719c(unsigned int);


void FUN_003024a0(unsigned char param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0018719c(0x4d0);
  if (temp_v0 != 0) {
    (*(unsigned char *)((unsigned char *)&DAT_005f0c7c + 0xa0)) = param_1;
  }
  return;
}

} /* extern "C" */
