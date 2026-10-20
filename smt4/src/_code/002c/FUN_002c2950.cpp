#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */


int FUN_002c2950(void)

{
  return (*(int *)((unsigned char *)&DAT_0043e2a8 + 0x4)) + 0xa8c0;
}

} /* extern "C" */
