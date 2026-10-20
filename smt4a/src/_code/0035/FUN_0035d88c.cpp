#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f560; /* 0x57f560 */


void FUN_0035d88c(unsigned char param_1)

{
  (*(unsigned char *)((unsigned char *)&DAT_0057f560 + 0x2)) = param_1;
  return;
}

} /* extern "C" */
