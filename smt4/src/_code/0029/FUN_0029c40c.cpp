#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e140; /* 0x44e140 */


unsigned int FUN_0029c40c(void)

{
  return *(unsigned int *)((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) + 0x12e4);
}

} /* extern "C" */
