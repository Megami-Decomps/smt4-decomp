#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e380; /* 0x44e380 */


void FUN_0011d9a4(void)

{
  (*(unsigned char *)((unsigned char *)&DAT_0044e380 + 0x1)) = 1;
  return;
}

} /* extern "C" */
