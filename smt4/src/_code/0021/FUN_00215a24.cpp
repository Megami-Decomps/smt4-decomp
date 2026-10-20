#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044de28; /* 0x44de28 */


int FUN_00215a24(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_0044de28 + 0x1));
}

} /* extern "C" */
