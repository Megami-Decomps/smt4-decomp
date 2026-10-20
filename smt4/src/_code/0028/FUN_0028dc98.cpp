#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e0b8; /* 0x43e0b8 */


void FUN_0028dc98(int param_1)

{
  if (param_1 + 1U < 3) {
    (*(int *)((unsigned char *)&DAT_0043e0b8 + 0x4)) = param_1;
  }
  return;
}

} /* extern "C" */
