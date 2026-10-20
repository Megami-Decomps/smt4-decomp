#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b3fec; /* 0x5b3fec */


void FUN_001445c4(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_005b3fec + 0x4)) = param_1;
  return;
}

} /* extern "C" */
