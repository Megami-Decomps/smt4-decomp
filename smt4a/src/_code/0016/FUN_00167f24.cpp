#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f588; /* 0x57f588 */


void FUN_00167f24(unsigned char param_1)

{
  if ((*(int *)((unsigned char *)&DAT_0057f588 + 0x4)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x4)) + 0x19c5) = param_1;
  }
  return;
}

} /* extern "C" */
