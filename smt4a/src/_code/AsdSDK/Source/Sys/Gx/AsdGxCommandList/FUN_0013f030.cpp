#include "romwright_types.h"

extern "C" {

extern int DAT_005b3fec; /* 0x5b3fec */


void FUN_0013f030(void)

{
  DAT_005b3fec = 1 - DAT_005b3fec;
  return;
}

} /* extern "C" */
