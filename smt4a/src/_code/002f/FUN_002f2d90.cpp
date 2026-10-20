#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0062d830; /* 0x62d830 */


void FUN_002f2d90(int param_1)

{
  *(int *)(&DAT_0062d830 + param_1 * 4) = *(int *)(&DAT_0062d830 + param_1 * 4) + 1;
  return;
}

} /* extern "C" */
