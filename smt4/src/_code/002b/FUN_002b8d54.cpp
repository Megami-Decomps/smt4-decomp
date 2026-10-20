#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043dcb0; /* 0x43dcb0 */


unsigned char FUN_002b8d54(void)

{
  return *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043dcb0 + 0x4)) + 8);
}

} /* extern "C" */
