#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f284; /* 0x57f284 */


void FUN_0023b4b4(unsigned char param_1)

{
  if ((*(int *)((unsigned char *)&DAT_0057f284 + 0x4)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f284 + 0x4)) + 0x10) = param_1;
  }
  return;
}

} /* extern "C" */
