#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00464af0; /* 0x464af0 */


void FUN_00153050(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_00464af0 + 0x8)) = (*(unsigned int *)((unsigned char *)&DAT_00464af0 + 0x8)) & ~param_1;
  return;
}

} /* extern "C" */
