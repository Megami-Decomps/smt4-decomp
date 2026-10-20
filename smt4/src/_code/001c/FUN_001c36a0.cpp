#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043dcb0; /* 0x43dcb0 */


int FUN_001c36a0(void)

{
  return (int)(short)*(unsigned int *)((*(int *)((unsigned char *)&DAT_0043dcb0 + 0x4)) + 0x664);
}

} /* extern "C" */
