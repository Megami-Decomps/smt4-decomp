#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00464af0; /* 0x464af0 */


void FUN_00105e28(unsigned char param_1)

{
  (*(unsigned char *)((unsigned char *)&DAT_00464af0 + 0x3)) = param_1;
  return;
}

} /* extern "C" */
