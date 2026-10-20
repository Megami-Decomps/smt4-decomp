#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */


int FUN_002b63ac(void)

{
  return (*(int *)((unsigned char *)&DAT_0043e2a8 + 0x4)) + 0x90;
}

} /* extern "C" */
