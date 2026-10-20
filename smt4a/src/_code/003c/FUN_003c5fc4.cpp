#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f588; /* 0x57f588 */


void FUN_003c5fc4(unsigned char param_1)

{
  if ((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x2f) = param_1;
  }
  return;
}

} /* extern "C" */
