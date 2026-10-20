#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005b3c78; /* 0x5b3c78 */


void FUN_002bed94(int param_1)

{
  (&DAT_005b3c78)[param_1] = (&DAT_005b3c78)[param_1] & 0xfffffffe;
  return;
}

} /* extern "C" */
