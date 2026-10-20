#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00471a70; /* 0x471a70 */


void FUN_0011d0ec(void)

{
  (*(unsigned char *)((unsigned char *)&DAT_00471a70 + 0x1)) = 1;
  return;
}

} /* extern "C" */
