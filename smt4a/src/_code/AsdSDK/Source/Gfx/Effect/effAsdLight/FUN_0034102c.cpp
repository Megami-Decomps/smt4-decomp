#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005b3c80; /* 0x5b3c80 */


unsigned int FUN_0034102c(int param_1)

{
  return (&DAT_005b3c80)[param_1];
}

} /* extern "C" */
