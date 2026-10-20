#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005b3ca0; /* 0x5b3ca0 */


unsigned int FUN_0036badc(int param_1)

{
  return (&DAT_005b3ca0)[param_1];
}

} /* extern "C" */
