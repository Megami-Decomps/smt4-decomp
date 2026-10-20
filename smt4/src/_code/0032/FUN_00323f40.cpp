#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e188; /* 0x43e188 */


void FUN_00323f40(void)

{
  if ((*(int *)((unsigned char *)&DAT_0043e188 + 0x8)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x8)) + 0x30) = 0;
  }
  return;
}

} /* extern "C" */
