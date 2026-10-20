#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e188; /* 0x43e188 */


void FUN_002bff50(void)

{
  if ((*(int *)((unsigned char *)&DAT_0043e188 + 0x4)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x4)) + 0xa11) = 0x14;
  }
  return;
}

} /* extern "C" */
