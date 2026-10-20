#include "romwright_types.h"

extern "C" {

extern unsigned short DAT_0057f6e8; /* 0x57f6e8 */


void FUN_003deea4(unsigned short param_1)

{
  DAT_0057f6e8 = param_1;
  return;
}

} /* extern "C" */
