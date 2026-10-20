#include "romwright_types.h"

extern "C" {

extern int DAT_0043e140; /* 0x43e140 */


void FUN_002305e8(unsigned char param_1)

{
  *(unsigned char *)(DAT_0043e140 + 0x10) = param_1;
  return;
}

} /* extern "C" */
