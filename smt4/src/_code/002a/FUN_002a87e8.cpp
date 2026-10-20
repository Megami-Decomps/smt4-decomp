#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043dcb0; /* 0x43dcb0 */


void FUN_002a87e8(void)

{
  if (0 < *(short *)((*(int *)((unsigned char *)&DAT_0043dcb0 + 0x4)) + 0x64c)) {
    *(short *)((*(int *)((unsigned char *)&DAT_0043dcb0 + 0x4)) + 0x64c) = *(short *)((*(int *)((unsigned char *)&DAT_0043dcb0 + 0x4)) + 0x64c) - 1;
  }
  return;
}

} /* extern "C" */
