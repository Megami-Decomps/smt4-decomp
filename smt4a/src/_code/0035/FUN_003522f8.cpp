#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005f0c7c; /* 0x5f0c7c */


void FUN_003522f8(unsigned char param_1)

{
  (*(unsigned char *)((unsigned char *)&DAT_005f0c7c + 0x76)) = param_1;
  return;
}

} /* extern "C" */
