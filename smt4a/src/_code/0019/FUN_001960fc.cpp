#include "romwright_types.h"

extern "C" {

extern int DAT_005b40e0; /* 0x5b40e0 */


void FUN_001960fc(int param_1)

{
  DAT_005b40e0 = param_1 + DAT_005b40e0;
  return;
}

} /* extern "C" */
