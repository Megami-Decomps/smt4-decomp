#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f560; /* 0x57f560 */


void FUN_0037de3c(unsigned char param_1)

{
  (*(unsigned char *)((unsigned char *)&DAT_0057f560 + 0x3)) = param_1;
  return;
}

} /* extern "C" */
