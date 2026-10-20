#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */


int FUN_001c35e8(void)

{
  return (*(int *)((unsigned char *)&DAT_0043e2a8 + 0x4)) + 0x1eb80;
}

} /* extern "C" */
