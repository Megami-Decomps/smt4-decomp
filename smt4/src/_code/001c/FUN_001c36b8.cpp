#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043dcb0; /* 0x43dcb0 */


int FUN_001c36b8(void)

{
  return (int)(short)((short)*(unsigned int *)((*(int *)((unsigned char *)&DAT_0043dcb0 + 0x4)) + 0x660) -
                     (short)*(unsigned int *)((*(int *)((unsigned char *)&DAT_0043dcb0 + 0x4)) + 0x658));
}

} /* extern "C" */
