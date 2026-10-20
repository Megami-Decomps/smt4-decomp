#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043dcb0; /* 0x43dcb0 */


int FUN_002015a4(void)

{
  return (int)(short)*(unsigned int *)((*(int *)((unsigned char *)&DAT_0043dcb0 + 0x4)) + 0x670);
}

} /* extern "C" */
