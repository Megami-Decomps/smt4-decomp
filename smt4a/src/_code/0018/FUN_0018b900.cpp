#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891d8; /* 0x5891d8 */


void FUN_0018b900(unsigned char param_1)

{
  (*(unsigned char *)((unsigned char *)&DAT_005891d8 + 0x4)) = param_1;
  return;
}

} /* extern "C" */
