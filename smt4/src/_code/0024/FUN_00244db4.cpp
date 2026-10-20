#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00464af0; /* 0x464af0 */


void FUN_00244db4(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_00464af0 + 0x8)) = param_1 | (*(unsigned int *)((unsigned char *)&DAT_00464af0 + 0x8));
  return;
}

} /* extern "C" */
