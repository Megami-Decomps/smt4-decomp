#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043d9e0; /* 0x43d9e0 */


unsigned char FUN_00241a44(void)

{
  if (*(char *)((*(int *)((unsigned char *)&DAT_0043d9e0 + 0x4)) + 0x1c) == '\x05') {
    return 0;
  }
  return 1;
}

} /* extern "C" */
