#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00435e48; /* 0x435e48 */


void FUN_00103e60(unsigned int param_1)

{
  DAT_00435e48 = param_1;
  return;
}

} /* extern "C" */
