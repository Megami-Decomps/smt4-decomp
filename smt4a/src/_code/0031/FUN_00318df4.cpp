#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f0c4; /* 0x57f0c4 */


void FUN_00318df4(unsigned char param_1)

{
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4)) + 0x67c) = param_1;
  return;
}

} /* extern "C" */
