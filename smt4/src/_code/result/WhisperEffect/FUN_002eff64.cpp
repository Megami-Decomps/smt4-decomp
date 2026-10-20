#include "romwright_types.h"

extern "C" {

extern int DAT_0044dc50; /* 0x44dc50 */


void FUN_002eff64(void)

{
  *(unsigned char *)(DAT_0044dc50 + 8) = 1;
  return;
}

} /* extern "C" */
