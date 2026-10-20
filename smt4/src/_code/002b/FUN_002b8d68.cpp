#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043dcb0; /* 0x43dcb0 */


int FUN_002b8d68(void)

{
  return (int)*(short *)((*(int *)((unsigned char *)&DAT_0043dcb0 + 0x4)) + 0x64e);
}

} /* extern "C" */
