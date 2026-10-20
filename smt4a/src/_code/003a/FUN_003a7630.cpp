#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f588; /* 0x57f588 */


void FUN_003a7630(unsigned char param_1)

{
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x33) = param_1;
  return;
}

} /* extern "C" */
