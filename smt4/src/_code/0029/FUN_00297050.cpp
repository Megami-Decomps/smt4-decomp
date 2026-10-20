#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e188; /* 0x43e188 */


void FUN_00297050(unsigned char param_1)

{
  DAT_0043e188 = param_1;
  return;
}

} /* extern "C" */
