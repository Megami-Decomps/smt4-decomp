#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f588; /* 0x57f588 */


void FUN_0035d03c(unsigned char param_1)

{
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x4)) + 0x19e8) = param_1;
  return;
}

} /* extern "C" */
