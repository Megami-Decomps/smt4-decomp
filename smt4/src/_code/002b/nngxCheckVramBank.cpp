#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00471a70; /* 0x471a70 */


int nngxCheckVramBank(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_00471a70 + 0x1));
}

} /* extern "C" */
