#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e380; /* 0x44e380 */


void FUN_0013b88c(void)

{
  (*(unsigned char *)((unsigned char *)&DAT_0044e380 + 0x2)) = 0;
  return;
}

} /* extern "C" */
