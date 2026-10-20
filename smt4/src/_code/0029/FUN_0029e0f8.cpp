#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e140; /* 0x44e140 */


unsigned char FUN_0029e0f8(void)

{
  if (*(int *)((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) + 0x12dc) == 1) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
