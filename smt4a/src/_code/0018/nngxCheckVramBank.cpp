#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005c0aa0; /* 0x5c0aa0 */


int nngxCheckVramBank(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_005c0aa0 + 0x1));
}

} /* extern "C" */
