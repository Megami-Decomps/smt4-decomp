#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00464b74; /* 0x464b74 */


void FUN_001db640(int param_1)

{
  (&DAT_00464b74)[param_1] = (&DAT_00464b74)[param_1] | 1;
  return;
}

} /* extern "C" */
