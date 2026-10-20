#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e7c0; /* 0x44e7c0 */


int FUN_0015e8ec(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_0044e7c0 + 0x4));
}

} /* extern "C" */
