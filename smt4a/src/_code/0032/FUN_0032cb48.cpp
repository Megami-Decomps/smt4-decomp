#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b3bf4; /* 0x5b3bf4 */


void FUN_0032cb48(unsigned char param_1)

{
  (*(unsigned char *)((unsigned char *)&DAT_005b3bf4 + 0x2)) = param_1;
  return;
}

} /* extern "C" */
