#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004651e8; /* 0x4651e8 */


void FUN_002c3510(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_004651e8 + 0x10)) = param_1;
  return;
}

} /* extern "C" */
