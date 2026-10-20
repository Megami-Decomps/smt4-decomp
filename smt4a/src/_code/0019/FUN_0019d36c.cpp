#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f248; /* 0x57f248 */


void FUN_0019d36c(void)

{
  if (0 < *(short *)((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) + 0x64c)) {
    *(short *)((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) + 0x64c) = *(short *)((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) + 0x64c) - 1;
  }
  return;
}

} /* extern "C" */
