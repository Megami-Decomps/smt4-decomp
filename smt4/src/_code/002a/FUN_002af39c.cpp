#include "romwright_types.h"

extern "C" {

extern int DAT_004652a0; /* 0x4652a0 */


void FUN_002af39c(int param_1)

{
  DAT_004652a0 = param_1 + DAT_004652a0;
  return;
}

} /* extern "C" */
