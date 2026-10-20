#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e188; /* 0x43e188 */


void FUN_0023553c(unsigned char param_1)

{
  if ((*(int *)((unsigned char *)&DAT_0043e188 + 0x8)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x8)) + 0x2f) = param_1;
  }
  return;
}

} /* extern "C" */
