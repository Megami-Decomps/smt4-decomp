#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005b3ca8; /* 0x5b3ca8 */


unsigned int FUN_0036baec(int param_1)

{
  return (&DAT_005b3ca8)[param_1];
}

} /* extern "C" */
