#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005806a0; /* 0x5806a0 */


void FUN_0030354c(void)

{
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x2a8) = 0;
  return;
}

} /* extern "C" */
