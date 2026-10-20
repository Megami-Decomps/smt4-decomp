#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00464b74; /* 0x464b74 */


void FUN_00152e58(int param_1)

{
  (&DAT_00464b74)[param_1] = (&DAT_00464b74)[param_1] & 0xfffffffe;
  return;
}

} /* extern "C" */
