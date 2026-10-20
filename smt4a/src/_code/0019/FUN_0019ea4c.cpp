#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0063cfc8; /* 0x63cfc8 */


unsigned char FUN_0019ea4c(int param_1)

{
  return (&DAT_0063cfc8)[param_1];
}

} /* extern "C" */
