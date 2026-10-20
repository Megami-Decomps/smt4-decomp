#include "romwright_types.h"

extern "C" {

extern int DAT_0057f574; /* 0x57f574 */


void FUN_002c2d5c(unsigned int param_1)

{
  *(unsigned int *)(DAT_0057f574 + 0x10) = param_1;
  return;
}

} /* extern "C" */
