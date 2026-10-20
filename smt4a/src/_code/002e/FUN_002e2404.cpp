#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f110; /* 0x57f110 */


void FUN_002e2404(unsigned int param_1)

{
  if ((*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) != 0) {
    *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) + 0x14c) = param_1;
  }
  return;
}

} /* extern "C" */
