#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005821c4; /* 0x5821c4 */


void FUN_002ddda4(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_005821c4 + 0x28)) = param_1;
  return;
}

} /* extern "C" */
