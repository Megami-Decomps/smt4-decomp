#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */


int FUN_00288f60(void)

{
  return (*(int *)((unsigned char *)&DAT_0043e2a8 + 0x4)) + 0x1f8e8;
}

} /* extern "C" */
