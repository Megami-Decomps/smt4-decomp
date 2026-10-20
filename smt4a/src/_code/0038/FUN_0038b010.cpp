#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f588; /* 0x57f588 */


void FUN_0038b010(unsigned char param_1)

{
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x32) = param_1;
  return;
}

} /* extern "C" */
