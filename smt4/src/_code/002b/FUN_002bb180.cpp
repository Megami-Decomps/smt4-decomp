#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e380; /* 0x44e380 */


void FUN_002bb180(void)

{
  (*(unsigned char *)((unsigned char *)&DAT_0044e380 + 0x1)) = 0;
  return;
}

} /* extern "C" */
