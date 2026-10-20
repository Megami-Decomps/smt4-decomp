#include "romwright_types.h"

extern "C" {

extern int DAT_0043e128; /* 0x43e128 */


void FUN_002015d0(unsigned int param_1)

{
  *(unsigned int *)(DAT_0043e128 + 0x10) = param_1;
  return;
}

} /* extern "C" */
