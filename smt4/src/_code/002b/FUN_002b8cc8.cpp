#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043dcb0; /* 0x43dcb0 */


void FUN_002b8cc8(void)

{
  if (*(short *)((*(int *)((unsigned char *)&DAT_0043dcb0 + 0x4)) + 0x64a) > 10) {
    *(short *)((*(int *)((unsigned char *)&DAT_0043dcb0 + 0x4)) + 0x64a) = *(short *)((*(int *)((unsigned char *)&DAT_0043dcb0 + 0x4)) + 0x64a) - 1;
  }
  return;
}

} /* extern "C" */
