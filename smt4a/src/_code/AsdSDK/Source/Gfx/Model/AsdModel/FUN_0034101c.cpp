#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005b3cb0; /* 0x5b3cb0 */


unsigned int FUN_0034101c(int param_1)

{
  return (&DAT_005b3cb0)[param_1];
}

} /* extern "C" */
