#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00421a48; /* 0x421a48 */


void FUN_00378b40(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_00421a48;
  return;
}

} /* extern "C" */
