#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b3268; /* 0x5b3268 */


void FUN_003874ec(unsigned char param_1)

{
  DAT_005b3268 = param_1;
  return;
}

} /* extern "C" */
