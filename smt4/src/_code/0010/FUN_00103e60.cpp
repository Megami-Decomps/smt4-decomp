#include "romwright_types.h"

extern "C" {

extern unsigned int g_randState; /* 0x435e48 */


void FUN_00103e60(unsigned int param_1)

{
  g_randState = param_1;
  return;
}

} /* extern "C" */
