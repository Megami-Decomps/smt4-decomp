#include "romwright_types.h"

extern "C" {

extern int DAT_0057f118; /* 0x57f118 */


void FUN_0036cf98(unsigned char param_1)

{
  if (DAT_0057f118 != 0) {
    *(unsigned char *)(DAT_0057f118 + 0x189) = param_1;
  }
  return;
}

} /* extern "C" */
