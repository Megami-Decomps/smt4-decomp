#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005c0a9c; /* 0x5c0a9c */


void FUN_001588f0(unsigned int param_1)

{
  DAT_005c0a9c = param_1;
  return;
}

} /* extern "C" */
