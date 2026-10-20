#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891d8; /* 0x5891d8 */


void FUN_0015a308(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_005891d8 + 0x18)) = param_1;
  return;
}

} /* extern "C" */
