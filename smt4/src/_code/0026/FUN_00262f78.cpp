#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */


int FUN_00262f78(void)

{
  int base = *(int *)((unsigned char *)&DAT_0043e2a8 + 0x4) + 0x24b88;
  return (int)*(short *)(base + 0x24);
}

} /* extern "C" */
