#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f588; /* 0x57f588 */


void FUN_003a76a8(unsigned char param_1)

{
  DAT_0057f588 = param_1;
  return;
}

} /* extern "C" */
