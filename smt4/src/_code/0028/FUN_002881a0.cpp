#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e140; /* 0x44e140 */


unsigned char FUN_002881a0(void)

{
  return *(unsigned char *)((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) + 0x1e67);
}

} /* extern "C" */
