#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005b3c78; /* 0x5b3c78 */


void FUN_00280828(int param_1)

{
  (&DAT_005b3c78)[param_1] = (&DAT_005b3c78)[param_1] | 1;
  return;
}

} /* extern "C" */
