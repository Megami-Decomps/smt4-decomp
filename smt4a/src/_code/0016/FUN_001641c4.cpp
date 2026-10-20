#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f248; /* 0x57f248 */


void FUN_001641c4(void)

{
  if (*(short *)((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) + 0x64a) > 10) {
    *(short *)((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) + 0x64a) = *(short *)((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) + 0x64a) - 1;
  }
  return;
}

} /* extern "C" */
