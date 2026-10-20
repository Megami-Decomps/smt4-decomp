#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e380; /* 0x44e380 */


void FUN_0013b85c(void)

{
  (*(unsigned char *)((unsigned char *)&DAT_0044e380 + 0x3)) = 0;
  return;
}

} /* extern "C" */
