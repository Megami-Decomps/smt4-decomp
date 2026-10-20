#include "romwright_types.h"

extern "C" {

extern int DAT_00447e88; /* 0x447e88 */


void FUN_0029b97c(unsigned char param_1)

{
  *(unsigned char *)(DAT_00447e88 + 0x134) = param_1;
  return;
}

} /* extern "C" */
