#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f6c8; /* 0x57f6c8 */


void FUN_00229fc0(unsigned char param_1)

{
  (*(unsigned char *)((unsigned char *)&DAT_0057f6c8 + 0x4)) = param_1;
  return;
}

} /* extern "C" */
