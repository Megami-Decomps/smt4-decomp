#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005b3cb8; /* 0x5b3cb8 */


unsigned int FUN_0027242c(int param_1)

{
  return (&DAT_005b3cb8)[param_1];
}

} /* extern "C" */
