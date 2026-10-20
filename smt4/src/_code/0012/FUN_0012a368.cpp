#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e380; /* 0x44e380 */


void FUN_0012a368(void)

{
  (*(unsigned char *)((unsigned char *)&DAT_0044e380 + 0x9)) = 1;
  return;
}

} /* extern "C" */
