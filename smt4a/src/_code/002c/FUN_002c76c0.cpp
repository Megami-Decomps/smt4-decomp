#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f560; /* 0x57f560 */


void FUN_002c76c0(int param_1)

{
  if (param_1 + 1U < 3) {
    (*(int *)((unsigned char *)&DAT_0057f560 + 0x4)) = param_1;
  }
  return;
}

} /* extern "C" */
