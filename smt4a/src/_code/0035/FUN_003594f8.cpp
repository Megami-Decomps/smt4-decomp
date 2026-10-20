#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b3bf4; /* 0x5b3bf4 */


void FUN_003594f8(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_005b3bf4 + 0x8)) = (*(unsigned int *)((unsigned char *)&DAT_005b3bf4 + 0x8)) & ~param_1;
  return;
}

} /* extern "C" */
