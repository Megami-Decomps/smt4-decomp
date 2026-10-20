#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e380; /* 0x44e380 */


void FUN_002bb460(unsigned char param_1)

{
  (*(unsigned char *)((unsigned char *)&DAT_0044e380 + 0xc)) = param_1;
  return;
}

} /* extern "C" */
