#include "romwright_types.h"

extern "C" {

extern int DAT_0057f118; /* 0x57f118 */


unsigned int FUN_0032e21c(void)

{
  if (DAT_0057f118 == 0) {
    return 0;
  }
  if ((*(int *)(DAT_0057f118 + 0xf4) == 1) &&
     (*(int *)(DAT_0057f118 + 0xf8) == 1 || *(int *)(DAT_0057f118 + 0xf8) == -1)) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
