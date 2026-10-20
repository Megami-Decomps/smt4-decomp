#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891d8; /* 0x5891d8 */


void FUN_0015a440(unsigned char param_1)

{
  (*(unsigned char *)((unsigned char *)&DAT_005891d8 + 0xd)) = param_1;
  return;
}

} /* extern "C" */
