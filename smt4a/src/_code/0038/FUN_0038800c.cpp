#include "romwright_types.h"

extern "C" {

extern int DAT_0057f118; /* 0x57f118 */


void FUN_0038800c(unsigned int param_1)

{
  if (DAT_0057f118 != 0) {
    *(unsigned int *)(DAT_0057f118 + 0x14c) = param_1;
  }
  return;
}

} /* extern "C" */
